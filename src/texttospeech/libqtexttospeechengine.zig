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

    /// New constructs a new QTextToSpeechEngine object.
    ///
    pub fn New() QTextToSpeechEngine {
        return .{ .ptr = qtc.QTextToSpeechEngine_new() };
    }

    /// New2 constructs a new QTextToSpeechEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QTextToSpeechEngine {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTextToSpeechEngine_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn MetaObject(self: QTextToSpeechEngine) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextToSpeechEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperMetaObject(self: QTextToSpeechEngine) QMetaObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTextToSpeechEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeechEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextToSpeechEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTextToSpeechEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextToSpeechEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QTextToSpeechEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeechEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QTextToSpeechEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextToSpeechEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeechengine.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Capabilities(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_Capabilities(@ptrCast(self.ptr));
    }

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
    pub fn OnCapabilities(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCapabilities` instead
    ///
    pub const QBaseCapabilities = SuperCapabilities;

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
    pub fn SuperCapabilities(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperCapabilities(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableLocales(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_AvailableLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("qtexttospeechengine.AvailableLocales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnAvailableLocales(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTextToSpeechEngine_OnAvailableLocales(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAvailableLocales` instead
    ///
    pub const QBaseAvailableLocales = SuperAvailableLocales;

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
    pub fn SuperAvailableLocales(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_SuperAvailableLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("qtexttospeechengine.AvailableLocales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#availableVoices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableVoices(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QVoice {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_AvailableVoices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("qtexttospeechengine.AvailableVoices: Memory allocation failed");
        const _data: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnAvailableVoices(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTextToSpeechEngine_OnAvailableVoices(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAvailableVoices` instead
    ///
    pub const QBaseAvailableVoices = SuperAvailableVoices;

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
    pub fn SuperAvailableVoices(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QVoice {
        const _arr: qtc.libqt_list = qtc.QTextToSpeechEngine_SuperAvailableVoices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVoice, _arr.len) catch @panic("qtexttospeechengine.AvailableVoices: Memory allocation failed");
        const _data: [*]QtC.QVoice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#say)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Say(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_Say(@ptrCast(self.ptr), text_str);
    }

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
    pub fn OnSay(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnSay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSay` instead
    ///
    pub const QBaseSay = SuperSay;

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
    pub fn SuperSay(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_SuperSay(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Synthesize(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_Synthesize(@ptrCast(self.ptr), text_str);
    }

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
    pub fn OnSynthesize(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnSynthesize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSynthesize` instead
    ///
    pub const QBaseSynthesize = SuperSynthesize;

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
    pub fn SuperSynthesize(self: QTextToSpeechEngine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextToSpeechEngine_SuperSynthesize(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn Stop(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_Stop(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

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
    pub fn OnStop(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnStop(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStop` instead
    ///
    pub const QBaseStop = SuperStop;

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
    pub fn SuperStop(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_SuperStop(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` boundaryHint: qtexttospeech_enums.BoundaryHint `
    ///
    pub fn Pause(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_Pause(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

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
    pub fn OnPause(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnPause(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPause` instead
    ///
    pub const QBasePause = SuperPause;

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
    pub fn SuperPause(self: QTextToSpeechEngine, boundaryHint: i32) void {
        qtc.QTextToSpeechEngine_SuperPause(@ptrCast(self.ptr), @bitCast(boundaryHint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Resume(self: QTextToSpeechEngine) void {
        qtc.QTextToSpeechEngine_Resume(@ptrCast(self.ptr));
    }

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
    pub fn OnResume(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResume` instead
    ///
    pub const QBaseResume = SuperResume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#resume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperResume(self: QTextToSpeechEngine) void {
        qtc.QTextToSpeechEngine_SuperResume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Rate(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_Rate(@ptrCast(self.ptr));
    }

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
    pub fn OnRate(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) f64) void {
        qtc.QTextToSpeechEngine_OnRate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRate` instead
    ///
    pub const QBaseRate = SuperRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#rate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperRate(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_SuperRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` rate: f64 `
    ///
    pub fn SetRate(self: QTextToSpeechEngine, rate: f64) bool {
        return qtc.QTextToSpeechEngine_SetRate(@ptrCast(self.ptr), @bitCast(rate));
    }

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
    pub fn OnSetRate(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, f64) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetRate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetRate` instead
    ///
    pub const QBaseSetRate = SuperSetRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setRate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` rate: f64 `
    ///
    pub fn SuperSetRate(self: QTextToSpeechEngine, rate: f64) bool {
        return qtc.QTextToSpeechEngine_SuperSetRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Pitch(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_Pitch(@ptrCast(self.ptr));
    }

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
    pub fn OnPitch(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) f64) void {
        qtc.QTextToSpeechEngine_OnPitch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPitch` instead
    ///
    pub const QBasePitch = SuperPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#pitch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperPitch(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_SuperPitch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` pitch: f64 `
    ///
    pub fn SetPitch(self: QTextToSpeechEngine, pitch: f64) bool {
        return qtc.QTextToSpeechEngine_SetPitch(@ptrCast(self.ptr), @bitCast(pitch));
    }

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
    pub fn OnSetPitch(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, f64) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetPitch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPitch` instead
    ///
    pub const QBaseSetPitch = SuperSetPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setPitch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` pitch: f64 `
    ///
    pub fn SuperSetPitch(self: QTextToSpeechEngine, pitch: f64) bool {
        return qtc.QTextToSpeechEngine_SuperSetPitch(@ptrCast(self.ptr), @bitCast(pitch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Locale(self: QTextToSpeechEngine) QLocale {
        return .{ .ptr = qtc.QTextToSpeechEngine_Locale(@ptrCast(self.ptr)) };
    }

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
    pub fn OnLocale(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QLocale) void {
        qtc.QTextToSpeechEngine_OnLocale(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLocale` instead
    ///
    pub const QBaseLocale = SuperLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#locale)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperLocale(self: QTextToSpeechEngine) QLocale {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperLocale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QTextToSpeechEngine, locale: anytype) bool {
        comptime _ = @TypeOf(locale)._is_QLocale;
        return qtc.QTextToSpeechEngine_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

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
    pub fn OnSetLocale(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QLocale) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetLocale(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLocale` instead
    ///
    pub const QBaseSetLocale = SuperSetLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setLocale)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SuperSetLocale(self: QTextToSpeechEngine, locale: anytype) bool {
        comptime _ = @TypeOf(locale)._is_QLocale;
        return qtc.QTextToSpeechEngine_SuperSetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Volume(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_Volume(@ptrCast(self.ptr));
    }

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
    pub fn OnVolume(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) f64) void {
        qtc.QTextToSpeechEngine_OnVolume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVolume` instead
    ///
    pub const QBaseVolume = SuperVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#volume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperVolume(self: QTextToSpeechEngine) f64 {
        return qtc.QTextToSpeechEngine_SuperVolume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` volume: f64 `
    ///
    pub fn SetVolume(self: QTextToSpeechEngine, volume: f64) bool {
        return qtc.QTextToSpeechEngine_SetVolume(@ptrCast(self.ptr), @bitCast(volume));
    }

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
    pub fn OnSetVolume(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, f64) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetVolume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetVolume` instead
    ///
    pub const QBaseSetVolume = SuperSetVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVolume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` volume: f64 `
    ///
    pub fn SuperSetVolume(self: QTextToSpeechEngine, volume: f64) bool {
        return qtc.QTextToSpeechEngine_SuperSetVolume(@ptrCast(self.ptr), @bitCast(volume));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Voice(self: QTextToSpeechEngine) QVoice {
        return .{ .ptr = qtc.QTextToSpeechEngine_Voice(@ptrCast(self.ptr)) };
    }

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
    pub fn OnVoice(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QVoice) void {
        qtc.QTextToSpeechEngine_OnVoice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVoice` instead
    ///
    pub const QBaseVoice = SuperVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperVoice(self: QTextToSpeechEngine) QVoice {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperVoice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` voice: QVoice `
    ///
    pub fn SetVoice(self: QTextToSpeechEngine, voice: anytype) bool {
        comptime _ = @TypeOf(voice)._is_QVoice;
        return qtc.QTextToSpeechEngine_SetVoice(@ptrCast(self.ptr), @ptrCast(voice.ptr));
    }

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
    pub fn OnSetVoice(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QVoice) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnSetVoice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetVoice` instead
    ///
    pub const QBaseSetVoice = SuperSetVoice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#setVoice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` voice: QVoice `
    ///
    pub fn SuperSetVoice(self: QTextToSpeechEngine, voice: anytype) bool {
        comptime _ = @TypeOf(voice)._is_QVoice;
        return qtc.QTextToSpeechEngine_SuperSetVoice(@ptrCast(self.ptr), @ptrCast(voice.ptr));
    }

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
    pub fn State(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_State(@ptrCast(self.ptr));
    }

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
    pub fn OnState(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperState` instead
    ///
    pub const QBaseState = SuperState;

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
    pub fn SuperState(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperState(@ptrCast(self.ptr));
    }

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
    pub fn ErrorReason(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_ErrorReason(@ptrCast(self.ptr));
    }

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
    pub fn OnErrorReason(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnErrorReason(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperErrorReason` instead
    ///
    pub const QBaseErrorReason = SuperErrorReason;

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
    pub fn SuperErrorReason(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperErrorReason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeechEngine_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeechengine.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorString)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnErrorString(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTextToSpeechEngine_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperErrorString` instead
    ///
    pub const QBaseErrorString = SuperErrorString;

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
    pub fn SuperErrorString(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextToSpeechEngine_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeechengine.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#createVoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` name: []const u8 `
    ///
    /// ` locale: QLocale `
    ///
    /// ` gender: qvoice_enums.Gender `
    ///
    /// ` age: qvoice_enums.Age `
    ///
    /// ` data: QVariant `
    ///
    pub fn CreateVoice(self: QTextToSpeechEngine, name: []const u8, locale: anytype, gender: i32, age: i32, data: anytype) QVoice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(locale)._is_QLocale;
        comptime _ = @TypeOf(data)._is_QVariant;
        return .{ .ptr = qtc.QTextToSpeechEngine_CreateVoice(@ptrCast(self.ptr), name_str, @ptrCast(locale.ptr), @bitCast(gender), @bitCast(age), @ptrCast(data.ptr)) };
    }

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
    pub fn OnCreateVoice(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8, QLocale, i32, i32, QVariant) callconv(.c) QVoice) void {
        qtc.QTextToSpeechEngine_OnCreateVoice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateVoice` instead
    ///
    pub const QBaseCreateVoice = SuperCreateVoice;

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
    /// ` locale: QLocale `
    ///
    /// ` gender: qvoice_enums.Gender `
    ///
    /// ` age: qvoice_enums.Age `
    ///
    /// ` data: QVariant `
    ///
    pub fn SuperCreateVoice(self: QTextToSpeechEngine, name: []const u8, locale: anytype, gender: i32, age: i32, data: anytype) QVoice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(locale)._is_QLocale;
        comptime _ = @TypeOf(data)._is_QVariant;
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperCreateVoice(@ptrCast(self.ptr), name_str, @ptrCast(locale.ptr), @bitCast(gender), @bitCast(age), @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` voice: QVoice `
    ///
    pub fn VoiceData(self: QTextToSpeechEngine, voice: anytype) QVariant {
        comptime _ = @TypeOf(voice)._is_QVoice;
        return .{ .ptr = qtc.QTextToSpeechEngine_VoiceData(@ptrCast(self.ptr), @ptrCast(voice.ptr)) };
    }

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
    pub fn OnVoiceData(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QVoice) callconv(.c) QVariant) void {
        qtc.QTextToSpeechEngine_OnVoiceData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVoiceData` instead
    ///
    pub const QBaseVoiceData = SuperVoiceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#voiceData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` voice: QVoice `
    ///
    pub fn SuperVoiceData(self: QTextToSpeechEngine, voice: anytype) QVariant {
        comptime _ = @TypeOf(voice)._is_QVoice;
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperVoiceData(@ptrCast(self.ptr), @ptrCast(voice.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` state: qtexttospeech_enums.State `
    ///
    pub fn StateChanged(self: QTextToSpeechEngine, state: i32) void {
        qtc.QTextToSpeechEngine_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, state: qtexttospeech_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` errorVal: qtexttospeech_enums.ErrorReason `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: QTextToSpeechEngine, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QTextToSpeechEngine_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, errorVal: qtexttospeech_enums.ErrorReason, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SayingWord(self: QTextToSpeechEngine, word: []const u8, start: isize, length: isize) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.QTextToSpeechEngine_SayingWord(@ptrCast(self.ptr), word_str, @bitCast(start), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#sayingWord)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, word: [*:0]const u8, start: isize, length: isize) callconv(.c) void `
    ///
    pub fn OnSayingWord(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8, isize, isize) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_SayingWord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Synthesized(self: QTextToSpeechEngine, format: anytype, data: []u8) void {
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QTextToSpeechEngine_Synthesized(@ptrCast(self.ptr), @ptrCast(format.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#synthesized)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` callback: *const fn (self: QTextToSpeechEngine, format: QAudioFormat, data: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnSynthesized(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QAudioFormat, qtc.libqt_string) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_Connect_Synthesized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeechengine.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeechengine.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttospeechengine.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QTextToSpeechEngine, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn IsWidgetType(self: QTextToSpeechEngine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn IsWindowType(self: QTextToSpeechEngine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn IsQuickItemType(self: QTextToSpeechEngine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SignalsBlocked(self: QTextToSpeechEngine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QTextToSpeechEngine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Thread(self: QTextToSpeechEngine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTextToSpeechEngine, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QTextToSpeechEngine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QTextToSpeechEngine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QTextToSpeechEngine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QTextToSpeechEngine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QTextToSpeechEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtexttospeechengine.Children: Memory allocation failed");
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTextToSpeechEngine, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QTextToSpeechEngine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QTextToSpeechEngine, obj: anytype) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTextToSpeechEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Disconnect3(self: QTextToSpeechEngine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QTextToSpeechEngine, receiver: anytype) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn DumpObjectTree(self: QTextToSpeechEngine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn DumpObjectInfo(self: QTextToSpeechEngine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QTextToSpeechEngine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTextToSpeechEngine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QTextToSpeechEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtexttospeechengine.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtexttospeechengine.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn BindingStorage(self: QTextToSpeechEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn BindingStorage2(self: QTextToSpeechEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Destroyed(self: QTextToSpeechEngine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Parent(self: QTextToSpeechEngine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QTextToSpeechEngine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn DeleteLater(self: QTextToSpeechEngine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QTextToSpeechEngine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QTextToSpeechEngine, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTextToSpeechEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTextToSpeechEngine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QTextToSpeechEngine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTextToSpeechEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTextToSpeechEngine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTextToSpeechEngine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QObject) callconv(.c) void) void {
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTextToSpeechEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeechEngine_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTextToSpeechEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeechEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTextToSpeechEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeechEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTextToSpeechEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextToSpeechEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTextToSpeechEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextToSpeechEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTextToSpeechEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextToSpeechEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTextToSpeechEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextToSpeechEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTextToSpeechEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextToSpeechEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QChildEvent) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTextToSpeechEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextToSpeechEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTextToSpeechEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextToSpeechEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QEvent) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTextToSpeechEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextToSpeechEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QTextToSpeechEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QTextToSpeechEngine) QObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperSender(self: QTextToSpeechEngine) QObject {
        return .{ .ptr = qtc.QTextToSpeechEngine_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextToSpeechEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn SuperSenderSignalIndex(self: QTextToSpeechEngine) i32 {
        return qtc.QTextToSpeechEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QTextToSpeechEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QTextToSpeechEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeechEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTextToSpeechEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextToSpeechEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextToSpeechEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QTextToSpeechEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeechEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextToSpeechEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTextToSpeechEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextToSpeechEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextToSpeechEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QTextToSpeechEngine, callback: *const fn (QTextToSpeechEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechengine.html#dtor.QTextToSpeechEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextToSpeechEngine `
    ///
    pub fn Delete(self: QTextToSpeechEngine) void {
        qtc.QTextToSpeechEngine_Delete(@ptrCast(self.ptr));
    }
};
