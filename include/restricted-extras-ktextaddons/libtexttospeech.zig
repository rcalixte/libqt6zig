const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QLocale = @import("libqt6").QLocale;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const texttospeech_enums = enums;

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
pub const TextEditTextToSpeech__TextToSpeech = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEditTextToSpeech__TextToSpeech,

    pub const _is_TextEditTextToSpeech__TextToSpeech = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn metaObject(self: TextEditTextToSpeech__TextToSpeech) QMetaObject {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeech_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextEditTextToSpeech__TextToSpeech, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEditTextToSpeech__TextToSpeech_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextEditTextToSpeech__TextToSpeech, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeech_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEditTextToSpeech__TextToSpeech.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `self0` instead
    ///
    pub const Self = self0;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    pub fn self0() TextEditTextToSpeech__TextToSpeech {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeech_Self() };
    }

    /// ### DEPRECATED: Use `isReady` instead
    ///
    pub const IsReady = isReady;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn isReady(self: TextEditTextToSpeech__TextToSpeech) bool {
        return qtc.TextEditTextToSpeech__TextToSpeech_IsReady(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `volume` instead
    ///
    pub const Volume = volume;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn volume(self: TextEditTextToSpeech__TextToSpeech) f64 {
        return qtc.TextEditTextToSpeech__TextToSpeech_Volume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableLocales` instead
    ///
    pub const AvailableLocales = availableLocales;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableLocales(self: TextEditTextToSpeech__TextToSpeech, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.TextEditTextToSpeech__TextToSpeech_AvailableLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("TextEditTextToSpeech__TextToSpeech.availableLocales: Memory allocation failed");
        const _data_val: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `availableEngines` instead
    ///
    pub const AvailableEngines = availableEngines;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableEngines(self: TextEditTextToSpeech__TextToSpeech, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEditTextToSpeech__TextToSpeech_AvailableEngines(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextEditTextToSpeech__TextToSpeech.availableEngines: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEditTextToSpeech__TextToSpeech.availableEngines: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableVoices` instead
    ///
    pub const AvailableVoices = availableVoices;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableVoices(self: TextEditTextToSpeech__TextToSpeech, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEditTextToSpeech__TextToSpeech_AvailableVoices(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextEditTextToSpeech__TextToSpeech.availableVoices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEditTextToSpeech__TextToSpeech.availableVoices: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn locale(self: TextEditTextToSpeech__TextToSpeech) QLocale {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeech_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reloadSettings` instead
    ///
    pub const ReloadSettings = reloadSettings;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn reloadSettings(self: TextEditTextToSpeech__TextToSpeech) void {
        qtc.TextEditTextToSpeech__TextToSpeech_ReloadSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `say` instead
    ///
    pub const Say = say;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` text: []const u8 `
    ///
    pub fn say(self: TextEditTextToSpeech__TextToSpeech, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextEditTextToSpeech__TextToSpeech_Say(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn stop(self: TextEditTextToSpeech__TextToSpeech) void {
        qtc.TextEditTextToSpeech__TextToSpeech_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn pause(self: TextEditTextToSpeech__TextToSpeech) void {
        qtc.TextEditTextToSpeech__TextToSpeech_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn resume0(self: TextEditTextToSpeech__TextToSpeech) void {
        qtc.TextEditTextToSpeech__TextToSpeech_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRate` instead
    ///
    pub const SetRate = setRate;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` rate: f64 `
    ///
    pub fn setRate(self: TextEditTextToSpeech__TextToSpeech, rate: f64) void {
        qtc.TextEditTextToSpeech__TextToSpeech_SetRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### DEPRECATED: Use `setPitch` instead
    ///
    pub const SetPitch = setPitch;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` pitch: f64 `
    ///
    pub fn setPitch(self: TextEditTextToSpeech__TextToSpeech, pitch: f64) void {
        qtc.TextEditTextToSpeech__TextToSpeech_SetPitch(@ptrCast(self.ptr), @bitCast(pitch));
    }

    /// ### DEPRECATED: Use `setVolume` instead
    ///
    pub const SetVolume = setVolume;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` _volume: f64 `
    ///
    pub fn setVolume(self: TextEditTextToSpeech__TextToSpeech, _volume: f64) void {
        qtc.TextEditTextToSpeech__TextToSpeech_SetVolume(@ptrCast(self.ptr), @bitCast(_volume));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: TextEditTextToSpeech__TextToSpeech, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.TextEditTextToSpeech__TextToSpeech_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` param1: texttospeech_enums.State `
    ///
    pub fn stateChanged(self: TextEditTextToSpeech__TextToSpeech, param1: i32) void {
        qtc.TextEditTextToSpeech__TextToSpeech_StateChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeech, param1: texttospeech_enums.State) callconv(.c) void `
    ///
    pub fn onStateChanged(self: TextEditTextToSpeech__TextToSpeech, callback: *const fn (TextEditTextToSpeech__TextToSpeech, i32) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeech_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEditTextToSpeech__TextToSpeech.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEditTextToSpeech__TextToSpeech.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: TextEditTextToSpeech__TextToSpeech, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: TextEditTextToSpeech__TextToSpeech, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextEditTextToSpeech__TextToSpeech, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEditTextToSpeech__TextToSpeech.objectName: Memory allocation failed");
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextEditTextToSpeech__TextToSpeech, name: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn isWidgetType(self: TextEditTextToSpeech__TextToSpeech) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn isWindowType(self: TextEditTextToSpeech__TextToSpeech) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn isQuickItemType(self: TextEditTextToSpeech__TextToSpeech) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn signalsBlocked(self: TextEditTextToSpeech__TextToSpeech) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextEditTextToSpeech__TextToSpeech, b: bool) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn thread(self: TextEditTextToSpeech__TextToSpeech) QThread {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextEditTextToSpeech__TextToSpeech, _thread: anytype) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextEditTextToSpeech__TextToSpeech, interval: i32) i32 {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextEditTextToSpeech__TextToSpeech, time: i64) i32 {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextEditTextToSpeech__TextToSpeech, id: i32) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextEditTextToSpeech__TextToSpeech, id: i32) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextEditTextToSpeech__TextToSpeech, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextEditTextToSpeech__TextToSpeech.children: Memory allocation failed");
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: TextEditTextToSpeech__TextToSpeech, _parent: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextEditTextToSpeech__TextToSpeech, filterObj: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextEditTextToSpeech__TextToSpeech, obj: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextEditTextToSpeech__TextToSpeech, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn disconnect3(self: TextEditTextToSpeech__TextToSpeech) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextEditTextToSpeech__TextToSpeech, receiver: anytype) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn dumpObjectTree(self: TextEditTextToSpeech__TextToSpeech) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn dumpObjectInfo(self: TextEditTextToSpeech__TextToSpeech) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextEditTextToSpeech__TextToSpeech, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextEditTextToSpeech__TextToSpeech, name: [:0]const u8) QVariant {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextEditTextToSpeech__TextToSpeech, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextEditTextToSpeech__TextToSpeech.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEditTextToSpeech__TextToSpeech.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn bindingStorage(self: TextEditTextToSpeech__TextToSpeech) QBindingStorage {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn bindingStorage2(self: TextEditTextToSpeech__TextToSpeech) QBindingStorage {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn destroyed(self: TextEditTextToSpeech__TextToSpeech) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeech) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextEditTextToSpeech__TextToSpeech, callback: *const fn (TextEditTextToSpeech__TextToSpeech) callconv(.c) void) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn parent(self: TextEditTextToSpeech__TextToSpeech) QObject {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextEditTextToSpeech__TextToSpeech, classname: [:0]const u8) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn deleteLater(self: TextEditTextToSpeech__TextToSpeech) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextEditTextToSpeech__TextToSpeech, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextEditTextToSpeech__TextToSpeech, time: i64, timerType: i32) i32 {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextEditTextToSpeech__TextToSpeech, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextEditTextToSpeech__TextToSpeech, signal: [:0]const u8) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextEditTextToSpeech__TextToSpeech, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextEditTextToSpeech__TextToSpeech, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextEditTextToSpeech__TextToSpeech, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextEditTextToSpeech__TextToSpeech, param1: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeech, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextEditTextToSpeech__TextToSpeech, callback: *const fn (TextEditTextToSpeech__TextToSpeech, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeech, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextEditTextToSpeech__TextToSpeech, callback: *const fn (TextEditTextToSpeech__TextToSpeech, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeech `
    ///
    pub fn delete(self: TextEditTextToSpeech__TextToSpeech) void {
        qtc.TextEditTextToSpeech__TextToSpeech_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const State = enum(i32) {
        pub const Ready: i32 = 0;
        pub const Speaking: i32 = 1;
        pub const Paused: i32 = 2;
        pub const BackendError: i32 = 3;
    };
};
