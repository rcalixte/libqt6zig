const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QLocale = @import("libqt6").QLocale;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVoice = @import("libqt6").QVoice;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtexttospeech_enums = enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)
pub const QTextToSpeech = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextToSpeech,

    pub const _is_QTextToSpeech = {};
    pub const _is_QObject = {};

    /// New constructs a new QTextToSpeech object.
    ///
    pub fn New() QTextToSpeech {
        return .{ .ptr = qtc.QTextToSpeech_new() };
    }

    /// New2 constructs a new QTextToSpeech object.
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: []const u8 `
    ///
    pub fn New2(engine: []const u8) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        return .{ .ptr = qtc.QTextToSpeech_new2(engine_str) };
    }

    /// New3 constructs a new QTextToSpeech object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` engine: []const u8 `
    ///
    /// ` params: ArrayMap_constu8_QVariant `
    ///
    pub fn New3(allocator: std.mem.Allocator, engine: []const u8, params: ArrayMap_constu8_QVariant) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("qtexttospeech.New3: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("qtexttospeech.New3: Memory allocation failed");
        defer allocator.free(params_values);
        var i: usize = 0;
        var params_it = params.iterator();
        while (params_it.next()) |it_entry| : (i += 1) {
            const params_key = it_entry.key_ptr.*;
            params_keys[i] = qtc.libqt_string{
                .len = params_key.len,
                .data = params_key.ptr,
            };
            params_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const params_map = qtc.libqt_map{
            .len = params_count,
            .keys = @ptrCast(params_keys.ptr),
            .values = @ptrCast(params_values.ptr),
        };
        return .{ .ptr = qtc.QTextToSpeech_new3(engine_str, params_map) };
    }

    /// New4 constructs a new QTextToSpeech object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(parent: anytype) QTextToSpeech {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeech_new4(@ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new QTextToSpeech object.
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(engine: []const u8, parent: anytype) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeech_new5(engine_str, @ptrCast(parent.ptr)) };
    }

    /// New6 constructs a new QTextToSpeech object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` engine: []const u8 `
    ///
    /// ` params: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(allocator: std.mem.Allocator, engine: []const u8, params: ArrayMap_constu8_QVariant, parent: anytype) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("qtexttospeech.New6: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("qtexttospeech.New6: Memory allocation failed");
        defer allocator.free(params_values);
        var i: usize = 0;
        var params_it = params.iterator();
        while (params_it.next()) |it_entry| : (i += 1) {
            const params_key = it_entry.key_ptr.*;
            params_keys[i] = qtc.libqt_string{
                .len = params_key.len,
                .data = params_key.ptr,
            };
            params_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const params_map = qtc.libqt_map{
            .len = params_count,
            .keys = @ptrCast(params_keys.ptr),
            .values = @ptrCast(params_values.ptr),
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeech_new6(engine_str, params_map, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn MetaObject(self: QTextToSpeech) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeech_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTextToSpeech, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextToSpeech_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    pub fn SuperMetaObject(self: QTextToSpeech) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeech_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTextToSpeech, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeech_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextToSpeech_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTextToSpeech, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeech_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTextToSpeech, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeech_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTextToSpeech, callback: *const fn (QTextToSpeech, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextToSpeech_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTextToSpeech, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeech_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeech.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` engine: []const u8 `
    ///
    pub fn SetEngine(self: QTextToSpeech, engine: []const u8) bool {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        return qtc.QTextToSpeech_SetEngine(@ptrCast(self.ptr), engine_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Engine(self: QTextToSpeech, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeech_Engine(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeech.Engine: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtexttospeech_enums.Capability `
    ///
    pub fn EngineCapabilities(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_EngineCapabilities(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ## Returns:
    ///
    /// ` qtexttospeech_enums.State `
    ///
    pub fn State(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ## Returns:
    ///
    /// ` qtexttospeech_enums.ErrorReason `
    ///
    pub fn ErrorReason(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_ErrorReason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QTextToSpeech, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeech_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeech.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableLocales(self: QTextToSpeech, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AvailableLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("qtexttospeech.AvailableLocales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Locale(self: QTextToSpeech) QLocale {
        return .{ .ptr = qtc.QTextToSpeech_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Voice(self: QTextToSpeech) QVoice {
        return .{ .ptr = qtc.QTextToSpeech_Voice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableVoices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableVoices(self: QTextToSpeech, allocator: std.mem.Allocator) []QVoice {
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AvailableVoices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("qtexttospeech.AvailableVoices: Memory allocation failed");
        const _data: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Rate(self: QTextToSpeech) f64 {
        return qtc.QTextToSpeech_Rate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Pitch(self: QTextToSpeech) f64 {
        return qtc.QTextToSpeech_Pitch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Volume(self: QTextToSpeech) f64 {
        return qtc.QTextToSpeech_Volume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableEngines)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableEngines(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AvailableEngines();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtexttospeech.AvailableEngines: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtexttospeech.AvailableEngines: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#say)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Say(self: QTextToSpeech, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeech_Say(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#enqueue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Enqueue(self: QTextToSpeech, text: []const u8) isize {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QTextToSpeech_Enqueue(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Stop(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Pause(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Pause(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Resume(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Resume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QTextToSpeech, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QTextToSpeech_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` rate: f64 `
    ///
    pub fn SetRate(self: QTextToSpeech, rate: f64) void {
        qtc.QTextToSpeech_SetRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` pitch: f64 `
    ///
    pub fn SetPitch(self: QTextToSpeech, pitch: f64) void {
        qtc.QTextToSpeech_SetPitch(@ptrCast(self.ptr), @bitCast(pitch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setVolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` volume: f64 `
    ///
    pub fn SetVolume(self: QTextToSpeech, volume: f64) void {
        qtc.QTextToSpeech_SetVolume(@ptrCast(self.ptr), @bitCast(volume));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setVoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` voice: QVoice `
    ///
    pub fn SetVoice(self: QTextToSpeech, voice: anytype) void {
        comptime _ = @TypeOf(voice)._is_QVoice;
        qtc.QTextToSpeech_SetVoice(@ptrCast(self.ptr), @ptrCast(voice.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` engine: []const u8 `
    ///
    pub fn EngineChanged(self: QTextToSpeech, engine: []const u8) void {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        qtc.QTextToSpeech_EngineChanged(@ptrCast(self.ptr), engine_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, engine: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEngineChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_EngineChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` state: qtexttospeech_enums.State `
    ///
    pub fn StateChanged(self: QTextToSpeech, state: i32) void {
        qtc.QTextToSpeech_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, state: qtexttospeech_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, i32) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` errorVal: qtexttospeech_enums.ErrorReason `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: QTextToSpeech, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QTextToSpeech_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, errorVal: qtexttospeech_enums.ErrorReason, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QTextToSpeech, callback: *const fn (QTextToSpeech, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#localeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` locale: QLocale `
    ///
    pub fn LocaleChanged(self: QTextToSpeech, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QTextToSpeech_LocaleChanged(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#localeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, locale: QLocale) callconv(.c) void `
    ///
    pub fn OnLocaleChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QLocale) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_LocaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` rate: f64 `
    ///
    pub fn RateChanged(self: QTextToSpeech, rate: f64) void {
        qtc.QTextToSpeech_RateChanged(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, rate: f64) callconv(.c) void `
    ///
    pub fn OnRateChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, f64) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_RateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitchChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` pitch: f64 `
    ///
    pub fn PitchChanged(self: QTextToSpeech, pitch: f64) void {
        qtc.QTextToSpeech_PitchChanged(@ptrCast(self.ptr), @bitCast(pitch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitchChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, pitch: f64) callconv(.c) void `
    ///
    pub fn OnPitchChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, f64) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_PitchChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volumeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` volume: f64 `
    ///
    pub fn VolumeChanged(self: QTextToSpeech, volume: f64) void {
        qtc.QTextToSpeech_VolumeChanged(@ptrCast(self.ptr), @bitCast(volume));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volumeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, volume: f64) callconv(.c) void `
    ///
    pub fn OnVolumeChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, f64) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_VolumeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voiceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` voice: QVoice `
    ///
    pub fn VoiceChanged(self: QTextToSpeech, voice: anytype) void {
        comptime _ = @TypeOf(voice)._is_QVoice;
        qtc.QTextToSpeech_VoiceChanged(@ptrCast(self.ptr), @ptrCast(voice.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voiceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, voice: QVoice) callconv(.c) void `
    ///
    pub fn OnVoiceChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QVoice) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_VoiceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#sayingWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` word: []const u8 `
    ///
    /// ` id: isize `
    ///
    /// ` start: isize `
    ///
    /// ` length: isize `
    ///
    pub fn SayingWord(self: QTextToSpeech, word: []const u8, id: isize, start: isize, length: isize) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.QTextToSpeech_SayingWord(@ptrCast(self.ptr), word_str, @bitCast(id), @bitCast(start), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#sayingWord)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, word: [*:0]const u8, id: isize, start: isize, length: isize) callconv(.c) void `
    ///
    pub fn OnSayingWord(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8, isize, isize, isize) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_SayingWord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#aboutToSynthesize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` id: isize `
    ///
    pub fn AboutToSynthesize(self: QTextToSpeech, id: isize) void {
        qtc.QTextToSpeech_AboutToSynthesize(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#aboutToSynthesize)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, id: isize) callconv(.c) void `
    ///
    pub fn OnAboutToSynthesize(self: QTextToSpeech, callback: *const fn (QTextToSpeech, isize) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_AboutToSynthesize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#allVoices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    pub fn AllVoices(self: QTextToSpeech, allocator: std.mem.Allocator, locale: anytype) []QVoice {
        comptime _ = @TypeOf(locale)._is_QLocale;
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AllVoices(@ptrCast(self.ptr), @ptrCast(locale.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("qtexttospeech.AllVoices: Memory allocation failed");
        const _data: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#allVoices)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, locale: QLocale) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QVoice `
    ///
    pub fn OnAllVoices(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QLocale) callconv(.c) qtc.libqt_list) void {
        qtc.QTextToSpeech_OnAllVoices(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAllVoices` instead
    ///
    pub const QBaseAllVoices = SuperAllVoices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#allVoices)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SuperAllVoices(self: QTextToSpeech, allocator: std.mem.Allocator, locale: anytype) []QVoice {
        comptime _ = @TypeOf(locale)._is_QLocale;
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_SuperAllVoices(@ptrCast(self.ptr), @ptrCast(locale.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("qtexttospeech.AllVoices: Memory allocation failed");
        const _data: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeech.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeech.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` engine: []const u8 `
    ///
    /// ` params: ArrayMap_constu8_QVariant `
    ///
    pub fn SetEngine2(self: QTextToSpeech, allocator: std.mem.Allocator, engine: []const u8, params: ArrayMap_constu8_QVariant) bool {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("qtexttospeech.SetEngine2: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("qtexttospeech.SetEngine2: Memory allocation failed");
        defer allocator.free(params_values);
        var i: usize = 0;
        var params_it = params.iterator();
        while (params_it.next()) |it_entry| : (i += 1) {
            const params_key = it_entry.key_ptr.*;
            params_keys[i] = qtc.libqt_string{
                .len = params_key.len,
                .data = params_key.ptr,
            };
            params_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const params_map = qtc.libqt_map{
            .len = params_count,
            .keys = @ptrCast(params_keys.ptr),
            .values = @ptrCast(params_values.ptr),
        };
        return qtc.QTextToSpeech_SetEngine2(@ptrCast(self.ptr), engine_str, params_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn Stop1(self: QTextToSpeech, boundaryHint: i32) void {
        qtc.QTextToSpeech_Stop1(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn Pause1(self: QTextToSpeech, boundaryHint: i32) void {
        qtc.QTextToSpeech_Pause1(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTextToSpeech, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeech.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTextToSpeech, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn IsWidgetType(self: QTextToSpeech) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn IsWindowType(self: QTextToSpeech) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn IsQuickItemType(self: QTextToSpeech) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn SignalsBlocked(self: QTextToSpeech) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTextToSpeech, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Thread(self: QTextToSpeech) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTextToSpeech, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTextToSpeech, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTextToSpeech, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTextToSpeech, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTextToSpeech, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTextToSpeech, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtexttospeech.Children: Memory allocation failed");
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
    /// ` self: QTextToSpeech `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTextToSpeech, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTextToSpeech, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTextToSpeech, obj: anytype) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTextToSpeech, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn Disconnect3(self: QTextToSpeech) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTextToSpeech, receiver: anytype) bool {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn DumpObjectTree(self: QTextToSpeech) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn DumpObjectInfo(self: QTextToSpeech) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextToSpeech, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTextToSpeech, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTextToSpeech, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtexttospeech.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtexttospeech.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextToSpeech `
    ///
    pub fn BindingStorage(self: QTextToSpeech) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn BindingStorage2(self: QTextToSpeech) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Destroyed(self: QTextToSpeech) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTextToSpeech, callback: *const fn (QTextToSpeech) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Parent(self: QTextToSpeech) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTextToSpeech, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn DeleteLater(self: QTextToSpeech) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTextToSpeech, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTextToSpeech, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTextToSpeech, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTextToSpeech, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTextToSpeech, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTextToSpeech, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTextToSpeech, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTextToSpeech, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QObject) callconv(.c) void) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTextToSpeech, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeech_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTextToSpeech, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeech_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeech_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTextToSpeech, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeech_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTextToSpeech, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeech_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeech_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTextToSpeech, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextToSpeech_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTextToSpeech, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextToSpeech_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QTimerEvent) callconv(.c) void) void {
        qtc.QTextToSpeech_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTextToSpeech, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextToSpeech_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTextToSpeech, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextToSpeech_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QChildEvent) callconv(.c) void) void {
        qtc.QTextToSpeech_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTextToSpeech, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextToSpeech_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTextToSpeech, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextToSpeech_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QEvent) callconv(.c) void) void {
        qtc.QTextToSpeech_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeech_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeech_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Sender(self: QTextToSpeech) QObject {
        return .{ .ptr = qtc.QTextToSpeech_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeech `
    ///
    pub fn SuperSender(self: QTextToSpeech) QObject {
        return .{ .ptr = qtc.QTextToSpeech_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTextToSpeech, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextToSpeech_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn SenderSignalIndex(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    pub fn SuperSenderSignalIndex(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTextToSpeech, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeech_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTextToSpeech, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeech_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTextToSpeech, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeech_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextToSpeech_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTextToSpeech, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeech_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTextToSpeech, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeech_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextToSpeech_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#dtor.QTextToSpeech)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn Delete(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#public-types)
pub const enums = struct {
    pub const State = enum(i32) {
        pub const Ready: i32 = 0;
        pub const Speaking: i32 = 1;
        pub const Paused: i32 = 2;
        pub const Error: i32 = 3;
        pub const Synthesizing: i32 = 4;
    };

    pub const ErrorReason = enum(i32) {
        pub const NoError: i32 = 0;
        pub const Initialization: i32 = 1;
        pub const Configuration: i32 = 2;
        pub const Input: i32 = 3;
        pub const Playback: i32 = 4;
    };

    pub const BoundaryHint = enum(i32) {
        pub const Default: i32 = 0;
        pub const Immediate: i32 = 1;
        pub const Word: i32 = 2;
        pub const Sentence: i32 = 3;
        pub const Utterance: i32 = 4;
    };

    pub const Capability = enum(i32) {
        pub const None: i32 = 0;
        pub const Speak: i32 = 1;
        pub const PauseResume: i32 = 2;
        pub const WordByWordProgress: i32 = 4;
        pub const Synthesize: i32 = 8;
    };
};
