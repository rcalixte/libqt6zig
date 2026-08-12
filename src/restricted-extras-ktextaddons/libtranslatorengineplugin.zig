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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkreply_enums = @import("../network/libqnetworkreply.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
pub const TextTranslator__TranslatorEnginePlugin = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextTranslator__TranslatorEnginePlugin,

    pub const _is_TextTranslator__TranslatorEnginePlugin = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextTranslator::TranslatorEnginePlugin object in C++ memory
    ///
    pub fn new() TextTranslator__TranslatorEnginePlugin {
        return .{ .ptr = qtc.TextTranslator__TranslatorEnginePlugin_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextTranslator::TranslatorEnginePlugin object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) TextTranslator__TranslatorEnginePlugin {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.TextTranslator__TranslatorEnginePlugin_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn metaObject(self: TextTranslator__TranslatorEnginePlugin) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEnginePlugin_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn superMetaObject(self: TextTranslator__TranslatorEnginePlugin) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEnginePlugin_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextTranslator__TranslatorEnginePlugin, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorEnginePlugin_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextTranslator__TranslatorEnginePlugin, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextTranslator__TranslatorEnginePlugin, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorEnginePlugin_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextTranslator__TranslatorEnginePlugin, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn translate(self: TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEnginePlugin_Translate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTranslate` instead
    ///
    pub const OnTranslate = onTranslate;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onTranslate(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnTranslate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTranslate` instead
    ///
    pub const SuperTranslate = superTranslate;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn superTranslate(self: TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEnginePlugin_SuperTranslate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resultTranslate` instead
    ///
    pub const ResultTranslate = resultTranslate;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resultTranslate(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_ResultTranslate(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.resultTranslate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setInputText` instead
    ///
    pub const SetInputText = setInputText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setInputText(self: TextTranslator__TranslatorEnginePlugin, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_SetInputText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setFrom` instead
    ///
    pub const SetFrom = setFrom;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` language: []const u8 `
    ///
    pub fn setFrom(self: TextTranslator__TranslatorEnginePlugin, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_SetFrom(@ptrCast(self.ptr), language_str);
    }

    /// ### DEPRECATED: Use `setTo` instead
    ///
    pub const SetTo = setTo;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` language: []const u8 `
    ///
    pub fn setTo(self: TextTranslator__TranslatorEnginePlugin, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_SetTo(@ptrCast(self.ptr), language_str);
    }

    /// ### DEPRECATED: Use `setResult` instead
    ///
    pub const SetResult = setResult;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _result: []const u8 `
    ///
    pub fn setResult(self: TextTranslator__TranslatorEnginePlugin, _result: []const u8) void {
        const result_str = qtc.libqt_string{
            .len = _result.len,
            .data = _result.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_SetResult(@ptrCast(self.ptr), result_str);
    }

    /// ### DEPRECATED: Use `setJsonDebug` instead
    ///
    pub const SetJsonDebug = setJsonDebug;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` debug: []const u8 `
    ///
    pub fn setJsonDebug(self: TextTranslator__TranslatorEnginePlugin, debug: []const u8) void {
        const debug_str = qtc.libqt_string{
            .len = debug.len,
            .data = debug.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_SetJsonDebug(@ptrCast(self.ptr), debug_str);
    }

    /// ### DEPRECATED: Use `inputText` instead
    ///
    pub const InputText = inputText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inputText(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_InputText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.inputText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `from` instead
    ///
    pub const From = from;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn from(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_From(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.from: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `to` instead
    ///
    pub const To = to;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn to(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_To(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.to: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `result` instead
    ///
    pub const Result = result;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn result(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_Result(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.result: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `jsonDebug` instead
    ///
    pub const JsonDebug = jsonDebug;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn jsonDebug(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_JsonDebug(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.jsonDebug: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn clear(self: TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEnginePlugin_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `translateDone` instead
    ///
    pub const TranslateDone = translateDone;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn translateDone(self: TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEnginePlugin_TranslateDone(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTranslateDone` instead
    ///
    pub const OnTranslateDone = onTranslateDone;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin) callconv(.c) void `
    ///
    pub fn onTranslateDone(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_Connect_TranslateDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `translateFailed` instead
    ///
    pub const TranslateFailed = translateFailed;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` errorMessage: []const u8 `
    ///
    pub fn translateFailed(self: TextTranslator__TranslatorEnginePlugin, errorMessage: []const u8) void {
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_TranslateFailed(@ptrCast(self.ptr), errorMessage_str);
    }

    /// ### DEPRECATED: Use `onTranslateFailed` instead
    ///
    pub const OnTranslateFailed = onTranslateFailed;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, errorMessage: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTranslateFailed(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, [*:0]const u8) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_Connect_TranslateFailed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `languagesChanged` instead
    ///
    pub const LanguagesChanged = languagesChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn languagesChanged(self: TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEnginePlugin_LanguagesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLanguagesChanged` instead
    ///
    pub const OnLanguagesChanged = onLanguagesChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin) callconv(.c) void `
    ///
    pub fn onLanguagesChanged(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_Connect_LanguagesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `appendResult` instead
    ///
    pub const AppendResult = appendResult;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _result: []const u8 `
    ///
    pub fn appendResult(self: TextTranslator__TranslatorEnginePlugin, _result: []const u8) void {
        const result_str = qtc.libqt_string{
            .len = _result.len,
            .data = _result.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_AppendResult(@ptrCast(self.ptr), result_str);
    }

    /// ### DEPRECATED: Use `onAppendResult` instead
    ///
    pub const OnAppendResult = onAppendResult;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, result: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAppendResult(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, [*:0]const u8) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnAppendResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAppendResult` instead
    ///
    pub const SuperAppendResult = superAppendResult;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _result: []const u8 `
    ///
    pub fn superAppendResult(self: TextTranslator__TranslatorEnginePlugin, _result: []const u8) void {
        const result_str = qtc.libqt_string{
            .len = _result.len,
            .data = _result.ptr,
        };
        qtc.TextTranslator__TranslatorEnginePlugin_SuperAppendResult(@ptrCast(self.ptr), result_str);
    }

    /// ### DEPRECATED: Use `slotError` instead
    ///
    pub const SlotError = slotError;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` errorVal: qnetworkreply_enums.NetworkError `
    ///
    pub fn slotError(self: TextTranslator__TranslatorEnginePlugin, errorVal: i32) void {
        qtc.TextTranslator__TranslatorEnginePlugin_SlotError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onSlotError` instead
    ///
    pub const OnSlotError = onSlotError;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, errorVal: qnetworkreply_enums.NetworkError) callconv(.c) void `
    ///
    pub fn onSlotError(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, i32) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnSlotError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotError` instead
    ///
    pub const SuperSlotError = superSlotError;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` errorVal: qnetworkreply_enums.NetworkError `
    ///
    pub fn superSlotError(self: TextTranslator__TranslatorEnginePlugin, errorVal: i32) void {
        qtc.TextTranslator__TranslatorEnginePlugin_SuperSlotError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `verifyFromAndToLanguage` instead
    ///
    pub const VerifyFromAndToLanguage = verifyFromAndToLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn verifyFromAndToLanguage(self: TextTranslator__TranslatorEnginePlugin) bool {
        return qtc.TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVerifyFromAndToLanguage` instead
    ///
    pub const OnVerifyFromAndToLanguage = onVerifyFromAndToLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onVerifyFromAndToLanguage(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnVerifyFromAndToLanguage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVerifyFromAndToLanguage` instead
    ///
    pub const SuperVerifyFromAndToLanguage = superVerifyFromAndToLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn superVerifyFromAndToLanguage(self: TextTranslator__TranslatorEnginePlugin) bool {
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperVerifyFromAndToLanguage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasDebug` instead
    ///
    pub const HasDebug = hasDebug;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn hasDebug(self: TextTranslator__TranslatorEnginePlugin) bool {
        return qtc.TextTranslator__TranslatorEnginePlugin_HasDebug(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasDebug` instead
    ///
    pub const OnHasDebug = onHasDebug;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasDebug(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnHasDebug(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasDebug` instead
    ///
    pub const SuperHasDebug = superHasDebug;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn superHasDebug(self: TextTranslator__TranslatorEnginePlugin) bool {
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperHasDebug(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `languageCode` instead
    ///
    pub const LanguageCode = languageCode;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` langStr: []const u8 `
    ///
    pub fn languageCode(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator, langStr: []const u8) []const u8 {
        const langStr_str = qtc.libqt_string{
            .len = langStr.len,
            .data = langStr.ptr,
        };
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_LanguageCode(@ptrCast(self.ptr), langStr_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.languageCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLanguageCode` instead
    ///
    pub const OnLanguageCode = onLanguageCode;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, langStr: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onLanguageCode(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnLanguageCode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLanguageCode` instead
    ///
    pub const SuperLanguageCode = superLanguageCode;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` langStr: []const u8 `
    ///
    pub fn superLanguageCode(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator, langStr: []const u8) []const u8 {
        const langStr_str = qtc.libqt_string{
            .len = langStr.len,
            .data = langStr.ptr,
        };
        var _str = qtc.TextTranslator__TranslatorEnginePlugin_SuperLanguageCode(@ptrCast(self.ptr), langStr_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.languageCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.tr3: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextTranslator__TranslatorEnginePlugin.objectName: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextTranslator__TranslatorEnginePlugin, name: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn isWidgetType(self: TextTranslator__TranslatorEnginePlugin) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn isWindowType(self: TextTranslator__TranslatorEnginePlugin) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn isQuickItemType(self: TextTranslator__TranslatorEnginePlugin) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn signalsBlocked(self: TextTranslator__TranslatorEnginePlugin) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextTranslator__TranslatorEnginePlugin, b: bool) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn thread(self: TextTranslator__TranslatorEnginePlugin) QThread {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextTranslator__TranslatorEnginePlugin, _thread: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextTranslator__TranslatorEnginePlugin, interval: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextTranslator__TranslatorEnginePlugin, time: i64) i32 {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextTranslator__TranslatorEnginePlugin, id: i32) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextTranslator__TranslatorEnginePlugin, id: i32) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextTranslator__TranslatorEnginePlugin.children: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: TextTranslator__TranslatorEnginePlugin, _parent: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextTranslator__TranslatorEnginePlugin, filterObj: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextTranslator__TranslatorEnginePlugin, obj: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextTranslator__TranslatorEnginePlugin, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn disconnect3(self: TextTranslator__TranslatorEnginePlugin) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextTranslator__TranslatorEnginePlugin, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn dumpObjectTree(self: TextTranslator__TranslatorEnginePlugin) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn dumpObjectInfo(self: TextTranslator__TranslatorEnginePlugin) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextTranslator__TranslatorEnginePlugin, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextTranslator__TranslatorEnginePlugin, name: [:0]const u8) QVariant {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextTranslator__TranslatorEnginePlugin, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextTranslator__TranslatorEnginePlugin.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextTranslator__TranslatorEnginePlugin.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn bindingStorage(self: TextTranslator__TranslatorEnginePlugin) QBindingStorage {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn bindingStorage2(self: TextTranslator__TranslatorEnginePlugin) QBindingStorage {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn destroyed(self: TextTranslator__TranslatorEnginePlugin) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin) callconv(.c) void) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn parent(self: TextTranslator__TranslatorEnginePlugin) QObject {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextTranslator__TranslatorEnginePlugin, classname: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn deleteLater(self: TextTranslator__TranslatorEnginePlugin) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextTranslator__TranslatorEnginePlugin, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextTranslator__TranslatorEnginePlugin, time: i64, timerType: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextTranslator__TranslatorEnginePlugin, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextTranslator__TranslatorEnginePlugin, signal: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextTranslator__TranslatorEnginePlugin, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextTranslator__TranslatorEnginePlugin, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextTranslator__TranslatorEnginePlugin, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextTranslator__TranslatorEnginePlugin, param1: anytype) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QObject) callconv(.c) void) void {
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEnginePlugin_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: TextTranslator__TranslatorEnginePlugin, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEnginePlugin_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: TextTranslator__TranslatorEnginePlugin, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorEnginePlugin_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorEnginePlugin_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QTimerEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorEnginePlugin_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorEnginePlugin_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QChildEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextTranslator__TranslatorEnginePlugin_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextTranslator__TranslatorEnginePlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextTranslator__TranslatorEnginePlugin_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextTranslator__TranslatorEnginePlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEnginePlugin_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextTranslator__TranslatorEnginePlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEnginePlugin_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextTranslator__TranslatorEnginePlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEnginePlugin_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextTranslator__TranslatorEnginePlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorEnginePlugin_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn sender(self: TextTranslator__TranslatorEnginePlugin) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEnginePlugin_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn superSender(self: TextTranslator__TranslatorEnginePlugin) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorEnginePlugin_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn senderSignalIndex(self: TextTranslator__TranslatorEnginePlugin) i32 {
        return qtc.TextTranslator__TranslatorEnginePlugin_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn superSenderSignalIndex(self: TextTranslator__TranslatorEnginePlugin) i32 {
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextTranslator__TranslatorEnginePlugin, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorEnginePlugin_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextTranslator__TranslatorEnginePlugin, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextTranslator__TranslatorEnginePlugin, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorEnginePlugin_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextTranslator__TranslatorEnginePlugin, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorEnginePlugin_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, QMetaMethod) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorEnginePlugin_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorEnginePlugin, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextTranslator__TranslatorEnginePlugin, callback: *const fn (TextTranslator__TranslatorEnginePlugin, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEnginePlugin.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorEnginePlugin `
    ///
    pub fn delete(self: TextTranslator__TranslatorEnginePlugin) void {
        qtc.TextTranslator__TranslatorEnginePlugin_Delete(@ptrCast(self.ptr));
    }
};
