const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAudioFormat = @import("libqt6").QAudioFormat;
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
const qtexttospeech_enums = @import("libqtexttospeech.zig").enums;
const qvoice_enums = @import("libqvoice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html)
pub const QTextToSpeechEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextToSpeechEngine,

    pub const _is_QTextToSpeechEngine = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextToSpeechEngine object in C++ memory
    ///
    pub fn new() QTextToSpeechEngine {
        return .{ .ptr = qtc.QTextToSpeechEngine_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextToSpeechEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QTextToSpeechEngine {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeechEngine_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn metaObject(self: QTextToSpeechEngine) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextToSpeechEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superMetaObject(self: QTextToSpeechEngine) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTextToSpeechEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeechEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextToSpeechEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTextToSpeechEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeechEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QTextToSpeechEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeechEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QTextToSpeechEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeechEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeechEngine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtexttospeech_enums.Capability `
    ///
    pub fn capabilities(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_Capabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCapabilities` instead
    ///
    pub const OnCapabilities = onCapabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCapabilities(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCapabilities` instead
    ///
    pub const SuperCapabilities = superCapabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#capabilities)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtexttospeech_enums.Capability `
    ///
    pub fn superCapabilities(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperCapabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableLocales` instead
    ///
    pub const AvailableLocales = availableLocales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableLocales(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_AvailableLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("QTextToSpeechEngine.availableLocales: Memory allocation failed");
        const _data_val: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onAvailableLocales` instead
    ///
    pub const OnAvailableLocales = onAvailableLocales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QLocale `
    ///
    pub fn onAvailableLocales(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTextToSpeechEngine_OnAvailableLocales(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAvailableLocales` instead
    ///
    pub const SuperAvailableLocales = superAvailableLocales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superAvailableLocales(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_SuperAvailableLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("QTextToSpeechEngine.availableLocales: Memory allocation failed");
        const _data_val: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `availableVoices` instead
    ///
    pub const AvailableVoices = availableVoices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableVoices(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QVoice {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_AvailableVoices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("QTextToSpeechEngine.availableVoices: Memory allocation failed");
        const _data_val: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onAvailableVoices` instead
    ///
    pub const OnAvailableVoices = onAvailableVoices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QVoice `
    ///
    pub fn onAvailableVoices(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTextToSpeechEngine_OnAvailableVoices(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAvailableVoices` instead
    ///
    pub const SuperAvailableVoices = superAvailableVoices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superAvailableVoices(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QVoice {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_SuperAvailableVoices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("QTextToSpeechEngine.availableVoices: Memory allocation failed");
        const _data_val: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `say` instead
    ///
    pub const Say = say;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn say(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_Say(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSay` instead
    ///
    pub const OnSay = onSay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSay(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnSay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSay` instead
    ///
    pub const SuperSay = superSay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superSay(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_SuperSay(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `synthesize` instead
    ///
    pub const Synthesize = synthesize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn synthesize(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_Synthesize(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSynthesize` instead
    ///
    pub const OnSynthesize = onSynthesize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSynthesize(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnSynthesize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSynthesize` instead
    ///
    pub const SuperSynthesize = superSynthesize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superSynthesize(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_SuperSynthesize(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn stop(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_Stop(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### DEPRECATED: Use `onStop` instead
    ///
    pub const OnStop = onStop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, boundaryHint: qtexttospeech_enums.BoundaryHint) callconv(.c) void `
    ///
    pub fn onStop(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnStop(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStop` instead
    ///
    pub const SuperStop = superStop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn superStop(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_SuperStop(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn pause(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_Pause(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### DEPRECATED: Use `onPause` instead
    ///
    pub const OnPause = onPause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, boundaryHint: qtexttospeech_enums.BoundaryHint) callconv(.c) void `
    ///
    pub fn onPause(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnPause(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPause` instead
    ///
    pub const SuperPause = superPause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn superPause(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_SuperPause(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn resume0(self: QTextToSpeechEngine) void {
        qtc.QTextToSpeechEngine_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResume` instead
    ///
    pub const OnResume = onResume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResume(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResume` instead
    ///
    pub const SuperResume = superResume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superResume(self: QTextToSpeechEngine) void {
        qtc.QTextToSpeechEngine_SuperResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rate` instead
    ///
    pub const Rate = rate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn rate(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_Rate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRate` instead
    ///
    pub const OnRate = onRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) f64 `
    ///
    pub fn onRate(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) f64) void {
        qtc.QTextToSpeechEngine_OnRate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRate` instead
    ///
    pub const SuperRate = superRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superRate(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_SuperRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRate` instead
    ///
    pub const SetRate = setRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _rate: f64 `
    ///
    pub fn setRate(self: QTextToSpeechEngine, _rate: f64) bool {
        return qtc.QTextToSpeechEngine_SetRate(@ptrCast(self.ptr), @bitCast(_rate));
    }

    /// ### DEPRECATED: Use `onSetRate` instead
    ///
    pub const OnSetRate = onSetRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, rate: f64) callconv(.c) bool `
    ///
    pub fn onSetRate(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, f64) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetRate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetRate` instead
    ///
    pub const SuperSetRate = superSetRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _rate: f64 `
    ///
    pub fn superSetRate(self: QTextToSpeechEngine, _rate: f64) bool {
        return qtc.QTextToSpeechEngine_SuperSetRate(@ptrCast(self.ptr), @bitCast(_rate));
    }

    /// ### DEPRECATED: Use `pitch` instead
    ///
    pub const Pitch = pitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn pitch(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_Pitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPitch` instead
    ///
    pub const OnPitch = onPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) f64 `
    ///
    pub fn onPitch(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) f64) void {
        qtc.QTextToSpeechEngine_OnPitch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPitch` instead
    ///
    pub const SuperPitch = superPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superPitch(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_SuperPitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPitch` instead
    ///
    pub const SetPitch = setPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _pitch: f64 `
    ///
    pub fn setPitch(self: QTextToSpeechEngine, _pitch: f64) bool {
        return qtc.QTextToSpeechEngine_SetPitch(@ptrCast(self.ptr), @bitCast(_pitch));
    }

    /// ### DEPRECATED: Use `onSetPitch` instead
    ///
    pub const OnSetPitch = onSetPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, pitch: f64) callconv(.c) bool `
    ///
    pub fn onSetPitch(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, f64) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetPitch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPitch` instead
    ///
    pub const SuperSetPitch = superSetPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _pitch: f64 `
    ///
    pub fn superSetPitch(self: QTextToSpeechEngine, _pitch: f64) bool {
        return qtc.QTextToSpeechEngine_SuperSetPitch(@ptrCast(self.ptr), @bitCast(_pitch));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn locale(self: QTextToSpeechEngine) QLocale {
        return .{ .ptr = qtc.QTextToSpeechEngine_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLocale` instead
    ///
    pub const OnLocale = onLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QLocale `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onLocale(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QLocale) void {
        qtc.QTextToSpeechEngine_OnLocale(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLocale` instead
    ///
    pub const SuperLocale = superLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superLocale(self: QTextToSpeechEngine) QLocale {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperLocale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QTextToSpeechEngine, _locale: anytype) bool {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        return qtc.QTextToSpeechEngine_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `onSetLocale` instead
    ///
    pub const OnSetLocale = onSetLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, locale: QLocale) callconv(.c) bool `
    ///
    pub fn onSetLocale(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QLocale) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetLocale(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLocale` instead
    ///
    pub const SuperSetLocale = superSetLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn superSetLocale(self: QTextToSpeechEngine, _locale: anytype) bool {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        return qtc.QTextToSpeechEngine_SuperSetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `volume` instead
    ///
    pub const Volume = volume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn volume(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_Volume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVolume` instead
    ///
    pub const OnVolume = onVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) f64 `
    ///
    pub fn onVolume(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) f64) void {
        qtc.QTextToSpeechEngine_OnVolume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVolume` instead
    ///
    pub const SuperVolume = superVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superVolume(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_SuperVolume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVolume` instead
    ///
    pub const SetVolume = setVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _volume: f64 `
    ///
    pub fn setVolume(self: QTextToSpeechEngine, _volume: f64) bool {
        return qtc.QTextToSpeechEngine_SetVolume(@ptrCast(self.ptr), @bitCast(_volume));
    }

    /// ### DEPRECATED: Use `onSetVolume` instead
    ///
    pub const OnSetVolume = onSetVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, volume: f64) callconv(.c) bool `
    ///
    pub fn onSetVolume(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, f64) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetVolume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetVolume` instead
    ///
    pub const SuperSetVolume = superSetVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _volume: f64 `
    ///
    pub fn superSetVolume(self: QTextToSpeechEngine, _volume: f64) bool {
        return qtc.QTextToSpeechEngine_SuperSetVolume(@ptrCast(self.ptr), @bitCast(_volume));
    }

    /// ### DEPRECATED: Use `voice` instead
    ///
    pub const Voice = voice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn voice(self: QTextToSpeechEngine) QVoice {
        return .{ .ptr = qtc.QTextToSpeechEngine_Voice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onVoice` instead
    ///
    pub const OnVoice = onVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QVoice `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVoice(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QVoice) void {
        qtc.QTextToSpeechEngine_OnVoice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVoice` instead
    ///
    pub const SuperVoice = superVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superVoice(self: QTextToSpeechEngine) QVoice {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperVoice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVoice` instead
    ///
    pub const SetVoice = setVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _voice: QVoice `
    ///
    pub fn setVoice(self: QTextToSpeechEngine, _voice: anytype) bool {
        comptime _ = @TypeOf(_voice)._is_QVoice;
        return qtc.QTextToSpeechEngine_SetVoice(@ptrCast(self.ptr), @ptrCast(_voice.ptr));
    }

    /// ### DEPRECATED: Use `onSetVoice` instead
    ///
    pub const OnSetVoice = onSetVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, voice: QVoice) callconv(.c) bool `
    ///
    pub fn onSetVoice(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QVoice) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetVoice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetVoice` instead
    ///
    pub const SuperSetVoice = superSetVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _voice: QVoice `
    ///
    pub fn superSetVoice(self: QTextToSpeechEngine, _voice: anytype) bool {
        comptime _ = @TypeOf(_voice)._is_QVoice;
        return qtc.QTextToSpeechEngine_SuperSetVoice(@ptrCast(self.ptr), @ptrCast(_voice.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ## Returns:
    ///
    /// ` qtexttospeech_enums.State `
    ///
    pub fn state(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onState` instead
    ///
    pub const OnState = onState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onState(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superState` instead
    ///
    pub const SuperState = superState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#state)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ## Returns:
    ///
    /// ` qtexttospeech_enums.State `
    ///
    pub fn superState(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorReason` instead
    ///
    pub const ErrorReason = errorReason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ## Returns:
    ///
    /// ` qtexttospeech_enums.ErrorReason `
    ///
    pub fn errorReason(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_ErrorReason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onErrorReason` instead
    ///
    pub const OnErrorReason = onErrorReason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onErrorReason(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnErrorReason(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superErrorReason` instead
    ///
    pub const SuperErrorReason = superErrorReason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorReason)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ## Returns:
    ///
    /// ` qtexttospeech_enums.ErrorReason `
    ///
    pub fn superErrorReason(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperErrorReason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeechEngine_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeechEngine.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onErrorString` instead
    ///
    pub const OnErrorString = onErrorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onErrorString(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTextToSpeechEngine_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superErrorString` instead
    ///
    pub const SuperErrorString = superErrorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superErrorString(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeechEngine_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeechEngine.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createVoice` instead
    ///
    pub const CreateVoice = createVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _locale: QLocale `
    ///
    /// ` gender: qvoice_enums.Gender `
    ///
    /// ` age: qvoice_enums.Age `
    ///
    /// ` data: QVariant `
    ///
    pub fn createVoice(self: QTextToSpeechEngine, name: []const u8, _locale: anytype, gender: i32, age: i32, data: anytype) QVoice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(_locale)._is_QLocale;
        comptime _ = @TypeOf(data)._is_QVariant;
        return .{ .ptr = qtc.QTextToSpeechEngine_CreateVoice(@ptrCast(self.ptr), name_str, @ptrCast(_locale.ptr), @bitCast(gender), @bitCast(age), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateVoice` instead
    ///
    pub const OnCreateVoice = onCreateVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, name: [*:0]const u8, locale: QLocale, gender: qvoice_enums.Gender, age: qvoice_enums.Age, data: QVariant) callconv(.c) QVoice `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateVoice(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8, QLocale, i32, i32, QVariant) callconv(.c) QVoice) void {
        qtc.QTextToSpeechEngine_OnCreateVoice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateVoice` instead
    ///
    pub const SuperCreateVoice = superCreateVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _locale: QLocale `
    ///
    /// ` gender: qvoice_enums.Gender `
    ///
    /// ` age: qvoice_enums.Age `
    ///
    /// ` data: QVariant `
    ///
    pub fn superCreateVoice(self: QTextToSpeechEngine, name: []const u8, _locale: anytype, gender: i32, age: i32, data: anytype) QVoice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(_locale)._is_QLocale;
        comptime _ = @TypeOf(data)._is_QVariant;
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperCreateVoice(@ptrCast(self.ptr), name_str, @ptrCast(_locale.ptr), @bitCast(gender), @bitCast(age), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `voiceData` instead
    ///
    pub const VoiceData = voiceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _voice: QVoice `
    ///
    pub fn voiceData(self: QTextToSpeechEngine, _voice: anytype) QVariant {
        comptime _ = @TypeOf(_voice)._is_QVoice;
        return .{ .ptr = qtc.QTextToSpeechEngine_VoiceData(@ptrCast(self.ptr), @ptrCast(_voice.ptr)) };
    }

    /// ### DEPRECATED: Use `onVoiceData` instead
    ///
    pub const OnVoiceData = onVoiceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, voice: QVoice) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVoiceData(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QVoice) callconv(.c) QVariant) void {
        qtc.QTextToSpeechEngine_OnVoiceData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVoiceData` instead
    ///
    pub const SuperVoiceData = superVoiceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _voice: QVoice `
    ///
    pub fn superVoiceData(self: QTextToSpeechEngine, _voice: anytype) QVariant {
        comptime _ = @TypeOf(_voice)._is_QVoice;
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperVoiceData(@ptrCast(self.ptr), @ptrCast(_voice.ptr)) };
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _state: qtexttospeech_enums.State `
    ///
    pub fn stateChanged(self: QTextToSpeechEngine, _state: i32) void {
        qtc.QTextToSpeechEngine_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, state: qtexttospeech_enums.State) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` errorVal: qtexttospeech_enums.ErrorReason `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred(self: QTextToSpeechEngine, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QTextToSpeechEngine_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, errorVal: qtexttospeech_enums.ErrorReason, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sayingWord` instead
    ///
    pub const SayingWord = sayingWord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#sayingWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` word: []const u8 `
    ///
    /// ` start: isize `
    ///
    /// ` length: isize `
    ///
    pub fn sayingWord(self: QTextToSpeechEngine, word: []const u8, start: isize, length: isize) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.QTextToSpeechEngine_SayingWord(@ptrCast(self.ptr), word_str, @bitCast(start), @bitCast(length));
    }

    /// ### DEPRECATED: Use `onSayingWord` instead
    ///
    pub const OnSayingWord = onSayingWord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#sayingWord)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, word: [*:0]const u8, start: isize, length: isize) callconv(.c) void `
    ///
    pub fn onSayingWord(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8, isize, isize) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_SayingWord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `synthesized` instead
    ///
    pub const Synthesized = synthesized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` format: QAudioFormat `
    ///
    /// ` data: []u8 `
    ///
    pub fn synthesized(self: QTextToSpeechEngine, format: anytype, data: []u8) void {
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QTextToSpeechEngine_Synthesized(@ptrCast(self.ptr), @ptrCast(format.ptr), data_str);
    }

    /// ### DEPRECATED: Use `onSynthesized` instead
    ///
    pub const OnSynthesized = onSynthesized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesized)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, format: QAudioFormat, data: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onSynthesized(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QAudioFormat, qtc.libqt_string) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_Synthesized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeechEngine.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeechEngine.tr3: Memory allocation failed");
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextToSpeechEngine.objectName: Memory allocation failed");
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTextToSpeechEngine, name: []const u8) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn isWidgetType(self: QTextToSpeechEngine) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn isWindowType(self: QTextToSpeechEngine) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn isQuickItemType(self: QTextToSpeechEngine) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn signalsBlocked(self: QTextToSpeechEngine) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTextToSpeechEngine, b: bool) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn thread(self: QTextToSpeechEngine) QThread {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTextToSpeechEngine, _thread: anytype) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTextToSpeechEngine, interval: i32) i32 {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTextToSpeechEngine, time: i64) i32 {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTextToSpeechEngine, id: i32) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTextToSpeechEngine, id: i32) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTextToSpeechEngine.children: Memory allocation failed");
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTextToSpeechEngine, _parent: anytype) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTextToSpeechEngine, filterObj: anytype) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTextToSpeechEngine, obj: anytype) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTextToSpeechEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn disconnect3(self: QTextToSpeechEngine) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTextToSpeechEngine, receiver: anytype) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn dumpObjectTree(self: QTextToSpeechEngine) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn dumpObjectInfo(self: QTextToSpeechEngine) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTextToSpeechEngine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTextToSpeechEngine, name: [:0]const u8) QVariant {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTextToSpeechEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextToSpeechEngine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextToSpeechEngine.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn bindingStorage(self: QTextToSpeechEngine) QBindingStorage {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn bindingStorage2(self: QTextToSpeechEngine) QBindingStorage {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn destroyed(self: QTextToSpeechEngine) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine) callconv(.c) void) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn parent(self: QTextToSpeechEngine) QObject {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTextToSpeechEngine, classname: [:0]const u8) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn deleteLater(self: QTextToSpeechEngine) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTextToSpeechEngine, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTextToSpeechEngine, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTextToSpeechEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTextToSpeechEngine, signal: [:0]const u8) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTextToSpeechEngine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTextToSpeechEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTextToSpeechEngine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTextToSpeechEngine, param1: anytype) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QObject) callconv(.c) void) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTextToSpeechEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeechEngine_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTextToSpeechEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeechEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTextToSpeechEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeechEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTextToSpeechEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextToSpeechEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTextToSpeechEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextToSpeechEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTextToSpeechEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextToSpeechEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTextToSpeechEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextToSpeechEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTextToSpeechEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextToSpeechEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QChildEvent) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTextToSpeechEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextToSpeechEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTextToSpeechEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextToSpeechEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QEvent) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn sender(self: QTextToSpeechEngine) QObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superSender(self: QTextToSpeechEngine) QObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextToSpeechEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn senderSignalIndex(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn superSenderSignalIndex(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTextToSpeechEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeechEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTextToSpeechEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeechEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTextToSpeechEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeechEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTextToSpeechEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeechEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine`
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#dtor.QTextToSpeechEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn delete(self: QTextToSpeechEngine) void {
        qtc.QTextToSpeechEngine_Delete(@ptrCast(self.ptr));
    }
};
