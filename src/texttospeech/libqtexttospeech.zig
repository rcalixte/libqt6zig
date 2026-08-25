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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextToSpeech object in C++ memory
    ///
    pub fn new() QTextToSpeech {
        return .{ .ptr = qtc.QTextToSpeech_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextToSpeech object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: []const u8 `
    ///
    pub fn new2(_engine: []const u8) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = _engine.len,
            .data = _engine.ptr,
        };
        return .{ .ptr = qtc.QTextToSpeech_new2(engine_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextToSpeech object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _engine: []const u8 `
    ///
    /// ` params: ArrayMap_constu8_QVariant `
    ///
    pub fn new3(allocator: std.mem.Allocator, _engine: []const u8, params: ArrayMap_constu8_QVariant) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = _engine.len,
            .data = _engine.ptr,
        };
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("QTextToSpeech.new3: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("QTextToSpeech.new3: Memory allocation failed");
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

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextToSpeech object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) QTextToSpeech {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeech_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTextToSpeech object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_engine: []const u8, _parent: anytype) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = _engine.len,
            .data = _engine.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeech_new5(engine_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTextToSpeech object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _engine: []const u8 `
    ///
    /// ` params: ArrayMap_constu8_QVariant `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(allocator: std.mem.Allocator, _engine: []const u8, params: ArrayMap_constu8_QVariant, _parent: anytype) QTextToSpeech {
        const engine_str = qtc.libqt_string{
            .len = _engine.len,
            .data = _engine.ptr,
        };
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("QTextToSpeech.new6: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("QTextToSpeech.new6: Memory allocation failed");
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
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeech_new6(engine_str, params_map, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn metaObject(self: QTextToSpeech) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeech_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTextToSpeech, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextToSpeech_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    pub fn superMetaObject(self: QTextToSpeech) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeech_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTextToSpeech, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeech_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextToSpeech_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTextToSpeech, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeech_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QTextToSpeech, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeech_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTextToSpeech, callback: *const fn (QTextToSpeech, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextToSpeech_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QTextToSpeech, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeech_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeech.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEngine` instead
    ///
    pub const SetEngine = setEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _engine: []const u8 `
    ///
    pub fn setEngine(self: QTextToSpeech, _engine: []const u8) bool {
        const engine_str = qtc.libqt_string{
            .len = _engine.len,
            .data = _engine.ptr,
        };
        return qtc.QTextToSpeech_SetEngine(@ptrCast(self.ptr), engine_str);
    }

    /// ### DEPRECATED: Use `engine` instead
    ///
    pub const Engine = engine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn engine(self: QTextToSpeech, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeech_Engine(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeech.engine: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `engineCapabilities` instead
    ///
    pub const EngineCapabilities = engineCapabilities;

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
    pub fn engineCapabilities(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_EngineCapabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorReason` instead
    ///
    pub const ErrorReason = errorReason;

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
    pub fn errorReason(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_ErrorReason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QTextToSpeech, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeech_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeech.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availableLocales` instead
    ///
    pub const AvailableLocales = availableLocales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableLocales(self: QTextToSpeech, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AvailableLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("QTextToSpeech.availableLocales: Memory allocation failed");
        const _data_val: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn locale(self: QTextToSpeech) QLocale {
        return .{ .ptr = qtc.QTextToSpeech_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `voice` instead
    ///
    pub const Voice = voice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn voice(self: QTextToSpeech) QVoice {
        return .{ .ptr = qtc.QTextToSpeech_Voice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `availableVoices` instead
    ///
    pub const AvailableVoices = availableVoices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableVoices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableVoices(self: QTextToSpeech, allocator: std.mem.Allocator) []QVoice {
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AvailableVoices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("QTextToSpeech.availableVoices: Memory allocation failed");
        const _data_val: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `rate` instead
    ///
    pub const Rate = rate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn rate(self: QTextToSpeech) f64 {
        return qtc.QTextToSpeech_Rate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pitch` instead
    ///
    pub const Pitch = pitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn pitch(self: QTextToSpeech) f64 {
        return qtc.QTextToSpeech_Pitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `volume` instead
    ///
    pub const Volume = volume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn volume(self: QTextToSpeech) f64 {
        return qtc.QTextToSpeech_Volume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableEngines` instead
    ///
    pub const AvailableEngines = availableEngines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#availableEngines)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableEngines(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AvailableEngines();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTextToSpeech.availableEngines: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextToSpeech.availableEngines: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `say` instead
    ///
    pub const Say = say;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#say)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` text: []const u8 `
    ///
    pub fn say(self: QTextToSpeech, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeech_Say(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `enqueue` instead
    ///
    pub const Enqueue = enqueue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#enqueue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` text: []const u8 `
    ///
    pub fn enqueue(self: QTextToSpeech, text: []const u8) isize {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QTextToSpeech_Enqueue(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn stop(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn pause(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn resume0(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QTextToSpeech, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QTextToSpeech_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `setRate` instead
    ///
    pub const SetRate = setRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _rate: f64 `
    ///
    pub fn setRate(self: QTextToSpeech, _rate: f64) void {
        qtc.QTextToSpeech_SetRate(@ptrCast(self.ptr), @bitCast(_rate));
    }

    /// ### DEPRECATED: Use `setPitch` instead
    ///
    pub const SetPitch = setPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _pitch: f64 `
    ///
    pub fn setPitch(self: QTextToSpeech, _pitch: f64) void {
        qtc.QTextToSpeech_SetPitch(@ptrCast(self.ptr), @bitCast(_pitch));
    }

    /// ### DEPRECATED: Use `setVolume` instead
    ///
    pub const SetVolume = setVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setVolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _volume: f64 `
    ///
    pub fn setVolume(self: QTextToSpeech, _volume: f64) void {
        qtc.QTextToSpeech_SetVolume(@ptrCast(self.ptr), @bitCast(_volume));
    }

    /// ### DEPRECATED: Use `setVoice` instead
    ///
    pub const SetVoice = setVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setVoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _voice: QVoice `
    ///
    pub fn setVoice(self: QTextToSpeech, _voice: anytype) void {
        comptime _ = @TypeOf(_voice)._is_QVoice;
        qtc.QTextToSpeech_SetVoice(@ptrCast(self.ptr), @ptrCast(_voice.ptr));
    }

    /// ### DEPRECATED: Use `engineChanged` instead
    ///
    pub const EngineChanged = engineChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _engine: []const u8 `
    ///
    pub fn engineChanged(self: QTextToSpeech, _engine: []const u8) void {
        const engine_str = qtc.libqt_string{
            .len = _engine.len,
            .data = _engine.ptr,
        };
        qtc.QTextToSpeech_EngineChanged(@ptrCast(self.ptr), engine_str);
    }

    /// ### DEPRECATED: Use `onEngineChanged` instead
    ///
    pub const OnEngineChanged = onEngineChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#engineChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, engine: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onEngineChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_EngineChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _state: qtexttospeech_enums.State `
    ///
    pub fn stateChanged(self: QTextToSpeech, _state: i32) void {
        qtc.QTextToSpeech_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, state: qtexttospeech_enums.State) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, i32) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` errorVal: qtexttospeech_enums.ErrorReason `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred(self: QTextToSpeech, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QTextToSpeech_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, errorVal: qtexttospeech_enums.ErrorReason, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QTextToSpeech, callback: *const fn (QTextToSpeech, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localeChanged` instead
    ///
    pub const LocaleChanged = localeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#localeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn localeChanged(self: QTextToSpeech, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QTextToSpeech_LocaleChanged(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `onLocaleChanged` instead
    ///
    pub const OnLocaleChanged = onLocaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#localeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, locale: QLocale) callconv(.c) void `
    ///
    pub fn onLocaleChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QLocale) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_LocaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rateChanged` instead
    ///
    pub const RateChanged = rateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _rate: f64 `
    ///
    pub fn rateChanged(self: QTextToSpeech, _rate: f64) void {
        qtc.QTextToSpeech_RateChanged(@ptrCast(self.ptr), @bitCast(_rate));
    }

    /// ### DEPRECATED: Use `onRateChanged` instead
    ///
    pub const OnRateChanged = onRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#rateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, rate: f64) callconv(.c) void `
    ///
    pub fn onRateChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, f64) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_RateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pitchChanged` instead
    ///
    pub const PitchChanged = pitchChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitchChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _pitch: f64 `
    ///
    pub fn pitchChanged(self: QTextToSpeech, _pitch: f64) void {
        qtc.QTextToSpeech_PitchChanged(@ptrCast(self.ptr), @bitCast(_pitch));
    }

    /// ### DEPRECATED: Use `onPitchChanged` instead
    ///
    pub const OnPitchChanged = onPitchChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pitchChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, pitch: f64) callconv(.c) void `
    ///
    pub fn onPitchChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, f64) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_PitchChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `volumeChanged` instead
    ///
    pub const VolumeChanged = volumeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volumeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _volume: f64 `
    ///
    pub fn volumeChanged(self: QTextToSpeech, _volume: f64) void {
        qtc.QTextToSpeech_VolumeChanged(@ptrCast(self.ptr), @bitCast(_volume));
    }

    /// ### DEPRECATED: Use `onVolumeChanged` instead
    ///
    pub const OnVolumeChanged = onVolumeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#volumeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, volume: f64) callconv(.c) void `
    ///
    pub fn onVolumeChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, f64) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_VolumeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `voiceChanged` instead
    ///
    pub const VoiceChanged = voiceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voiceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` _voice: QVoice `
    ///
    pub fn voiceChanged(self: QTextToSpeech, _voice: anytype) void {
        comptime _ = @TypeOf(_voice)._is_QVoice;
        qtc.QTextToSpeech_VoiceChanged(@ptrCast(self.ptr), @ptrCast(_voice.ptr));
    }

    /// ### DEPRECATED: Use `onVoiceChanged` instead
    ///
    pub const OnVoiceChanged = onVoiceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#voiceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, voice: QVoice) callconv(.c) void `
    ///
    pub fn onVoiceChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QVoice) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_VoiceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sayingWord` instead
    ///
    pub const SayingWord = sayingWord;

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
    pub fn sayingWord(self: QTextToSpeech, word: []const u8, id: isize, start: isize, length: isize) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.QTextToSpeech_SayingWord(@ptrCast(self.ptr), word_str, @bitCast(id), @bitCast(start), @bitCast(length));
    }

    /// ### DEPRECATED: Use `onSayingWord` instead
    ///
    pub const OnSayingWord = onSayingWord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#sayingWord)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, word: [*:0]const u8, id: isize, start: isize, length: isize) callconv(.c) void `
    ///
    pub fn onSayingWord(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8, isize, isize, isize) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_SayingWord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToSynthesize` instead
    ///
    pub const AboutToSynthesize = aboutToSynthesize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#aboutToSynthesize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` id: isize `
    ///
    pub fn aboutToSynthesize(self: QTextToSpeech, id: isize) void {
        qtc.QTextToSpeech_AboutToSynthesize(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `onAboutToSynthesize` instead
    ///
    pub const OnAboutToSynthesize = onAboutToSynthesize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#aboutToSynthesize)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, id: isize) callconv(.c) void `
    ///
    pub fn onAboutToSynthesize(self: QTextToSpeech, callback: *const fn (QTextToSpeech, isize) callconv(.c) void) void {
        qtc.QTextToSpeech_Connect_AboutToSynthesize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `allVoices` instead
    ///
    pub const AllVoices = allVoices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#allVoices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn allVoices(self: QTextToSpeech, allocator: std.mem.Allocator, _locale: anytype) []QVoice {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_AllVoices(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("QTextToSpeech.allVoices: Memory allocation failed");
        const _data_val: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onAllVoices` instead
    ///
    pub const OnAllVoices = onAllVoices;

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
    pub fn onAllVoices(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QLocale) callconv(.c) qtc.libqt_list) void {
        qtc.QTextToSpeech_OnAllVoices(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAllVoices` instead
    ///
    pub const SuperAllVoices = superAllVoices;

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
    /// ` _locale: QLocale `
    ///
    pub fn superAllVoices(self: QTextToSpeech, allocator: std.mem.Allocator, _locale: anytype) []QVoice {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        const _arr: qtc.libqt_list = qtc.QTextToSpeech_SuperAllVoices(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("QTextToSpeech.allVoices: Memory allocation failed");
        const _data_val: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeech.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeech.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEngine2` instead
    ///
    pub const SetEngine2 = setEngine2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#setEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _engine: []const u8 `
    ///
    /// ` params: ArrayMap_constu8_QVariant `
    ///
    pub fn setEngine2(self: QTextToSpeech, allocator: std.mem.Allocator, _engine: []const u8, params: ArrayMap_constu8_QVariant) bool {
        const engine_str = qtc.libqt_string{
            .len = _engine.len,
            .data = _engine.ptr,
        };
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("QTextToSpeech.setEngine2: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("QTextToSpeech.setEngine2: Memory allocation failed");
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

    /// ### DEPRECATED: Use `stop1` instead
    ///
    pub const Stop1 = stop1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn stop1(self: QTextToSpeech, boundaryHint: i32) void {
        qtc.QTextToSpeech_Stop1(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### DEPRECATED: Use `pause1` instead
    ///
    pub const Pause1 = pause1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeech `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn pause1(self: QTextToSpeech, boundaryHint: i32) void {
        qtc.QTextToSpeech_Pause1(@ptrCast(self.ptr), @bitCast(boundaryHint));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTextToSpeech, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeech.objectName: Memory allocation failed");
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
    /// ` self: QTextToSpeech `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTextToSpeech, name: []const u8) void {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn isWidgetType(self: QTextToSpeech) bool {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn isWindowType(self: QTextToSpeech) bool {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn isQuickItemType(self: QTextToSpeech) bool {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn signalsBlocked(self: QTextToSpeech) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTextToSpeech, b: bool) bool {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn thread(self: QTextToSpeech) QThread {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTextToSpeech, _thread: anytype) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTextToSpeech, interval: i32) i32 {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTextToSpeech, time: i64) i32 {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTextToSpeech, id: i32) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTextToSpeech, id: i32) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTextToSpeech, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTextToSpeech.children: Memory allocation failed");
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTextToSpeech, _parent: anytype) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTextToSpeech, filterObj: anytype) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTextToSpeech, obj: anytype) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTextToSpeech, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn disconnect3(self: QTextToSpeech) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTextToSpeech, receiver: anytype) bool {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn dumpObjectTree(self: QTextToSpeech) void {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn dumpObjectInfo(self: QTextToSpeech) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTextToSpeech, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTextToSpeech, name: [:0]const u8) QVariant {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTextToSpeech, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextToSpeech.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextToSpeech.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextToSpeech `
    ///
    pub fn bindingStorage(self: QTextToSpeech) QBindingStorage {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn bindingStorage2(self: QTextToSpeech) QBindingStorage {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn destroyed(self: QTextToSpeech) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTextToSpeech, callback: *const fn (QTextToSpeech) callconv(.c) void) void {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn parent(self: QTextToSpeech) QObject {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTextToSpeech, classname: [:0]const u8) bool {
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
    /// ` self: QTextToSpeech `
    ///
    pub fn deleteLater(self: QTextToSpeech) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTextToSpeech, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTextToSpeech, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTextToSpeech, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTextToSpeech, signal: [:0]const u8) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTextToSpeech, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTextToSpeech, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTextToSpeech, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTextToSpeech, param1: anytype) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QObject) callconv(.c) void) void {
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTextToSpeech, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeech_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTextToSpeech, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeech_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeech_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTextToSpeech, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeech_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTextToSpeech, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeech_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeech_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTextToSpeech, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextToSpeech_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTextToSpeech, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextToSpeech_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QTimerEvent) callconv(.c) void) void {
        qtc.QTextToSpeech_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTextToSpeech, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextToSpeech_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTextToSpeech, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextToSpeech_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QChildEvent) callconv(.c) void) void {
        qtc.QTextToSpeech_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTextToSpeech, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextToSpeech_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTextToSpeech, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextToSpeech_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QEvent) callconv(.c) void) void {
        qtc.QTextToSpeech_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeech_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTextToSpeech, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeech_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeech_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    pub fn sender(self: QTextToSpeech) QObject {
        return .{ .ptr = qtc.QTextToSpeech_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeech `
    ///
    pub fn superSender(self: QTextToSpeech) QObject {
        return .{ .ptr = qtc.QTextToSpeech_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTextToSpeech, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextToSpeech_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    pub fn senderSignalIndex(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    pub fn superSenderSignalIndex(self: QTextToSpeech) i32 {
        return qtc.QTextToSpeech_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTextToSpeech, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeech_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTextToSpeech, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeech_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTextToSpeech, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeech_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextToSpeech_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTextToSpeech, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeech_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTextToSpeech, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeech_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeech`
    ///
    /// ` callback: *const fn (self: QTextToSpeech, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTextToSpeech, callback: *const fn (QTextToSpeech, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextToSpeech_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeech `
    ///
    /// ` callback: *const fn (self: QTextToSpeech, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTextToSpeech, callback: *const fn (QTextToSpeech, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#dtor.QTextToSpeech)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextToSpeech `
    ///
    pub fn delete(self: QTextToSpeech) void {
        qtc.QTextToSpeech_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeech.html#public-types)
pub const enums = struct {
    pub const State = enum {
        pub const Ready: i32 = 0;
        pub const Speaking: i32 = 1;
        pub const Paused: i32 = 2;
        pub const Error: i32 = 3;
        pub const Synthesizing: i32 = 4;
    };

    pub const ErrorReason = enum {
        pub const NoError: i32 = 0;
        pub const Initialization: i32 = 1;
        pub const Configuration: i32 = 2;
        pub const Input: i32 = 3;
        pub const Playback: i32 = 4;
    };

    pub const BoundaryHint = enum {
        pub const Default: i32 = 0;
        pub const Immediate: i32 = 1;
        pub const Word: i32 = 2;
        pub const Sentence: i32 = 3;
        pub const Utterance: i32 = 4;
    };

    pub const Capability = enum {
        pub const None: i32 = 0;
        pub const Speak: i32 = 1;
        pub const PauseResume: i32 = 2;
        pub const WordByWordProgress: i32 = 4;
        pub const Synthesize: i32 = 8;
    };
};
