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
const Sonnet__Speller = @import("libqt6").Sonnet__Speller;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html)
pub const Sonnet__BackgroundChecker = extern struct {
    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Sonnet__BackgroundChecker,

    pub const _is_Sonnet__BackgroundChecker = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Sonnet::BackgroundChecker object in C++ memory
    ///
    pub fn new() Sonnet__BackgroundChecker {
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Sonnet::BackgroundChecker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _speller: Sonnet__Speller `
    ///
    pub fn new2(_speller: anytype) Sonnet__BackgroundChecker {
        comptime _ = @TypeOf(_speller)._is_Sonnet__Speller;
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_new2(@ptrCast(_speller.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Sonnet::BackgroundChecker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) Sonnet__BackgroundChecker {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new Sonnet::BackgroundChecker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _speller: Sonnet__Speller `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_speller: anytype, _parent: anytype) Sonnet__BackgroundChecker {
        comptime _ = @TypeOf(_speller)._is_Sonnet__Speller;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_new4(@ptrCast(_speller.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn metaObject(self: Sonnet__BackgroundChecker) QMetaObject {
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Sonnet__BackgroundChecker_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superMetaObject(self: Sonnet__BackgroundChecker) QMetaObject {
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Sonnet__BackgroundChecker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__BackgroundChecker_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Sonnet__BackgroundChecker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__BackgroundChecker_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Sonnet__BackgroundChecker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__BackgroundChecker_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__BackgroundChecker_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Sonnet__BackgroundChecker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__BackgroundChecker_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: Sonnet__BackgroundChecker, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Sonnet__BackgroundChecker_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__BackgroundChecker_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentContext` instead
    ///
    pub const CurrentContext = currentContext;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#currentContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentContext(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__BackgroundChecker_CurrentContext(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.currentContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `speller` instead
    ///
    pub const Speller = speller;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#speller)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn speller(self: Sonnet__BackgroundChecker) Sonnet__Speller {
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_Speller(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSpeller` instead
    ///
    pub const SetSpeller = setSpeller;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#setSpeller)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _speller: Sonnet__Speller `
    ///
    pub fn setSpeller(self: Sonnet__BackgroundChecker, _speller: anytype) void {
        comptime _ = @TypeOf(_speller)._is_Sonnet__Speller;
        qtc.Sonnet__BackgroundChecker_SetSpeller(@ptrCast(self.ptr), @ptrCast(_speller.ptr));
    }

    /// ### DEPRECATED: Use `checkWord` instead
    ///
    pub const CheckWord = checkWord;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#checkWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` word: []const u8 `
    ///
    pub fn checkWord(self: Sonnet__BackgroundChecker, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__BackgroundChecker_CheckWord(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `suggest` instead
    ///
    pub const Suggest = suggest;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#suggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    pub fn suggest(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator, word: []const u8) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__BackgroundChecker_Suggest(@ptrCast(self.ptr), word_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__BackgroundChecker.suggest: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__BackgroundChecker.suggest: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `addWordToPersonal` instead
    ///
    pub const AddWordToPersonal = addWordToPersonal;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#addWordToPersonal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` word: []const u8 `
    ///
    pub fn addWordToPersonal(self: Sonnet__BackgroundChecker, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__BackgroundChecker_AddWordToPersonal(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `addWordToSession` instead
    ///
    pub const AddWordToSession = addWordToSession;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#addWordToSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` word: []const u8 `
    ///
    pub fn addWordToSession(self: Sonnet__BackgroundChecker, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__BackgroundChecker_AddWordToSession(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `autoDetectLanguageDisabled` instead
    ///
    pub const AutoDetectLanguageDisabled = autoDetectLanguageDisabled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#autoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn autoDetectLanguageDisabled(self: Sonnet__BackgroundChecker) bool {
        return qtc.Sonnet__BackgroundChecker_AutoDetectLanguageDisabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDetectLanguageDisabled` instead
    ///
    pub const SetAutoDetectLanguageDisabled = setAutoDetectLanguageDisabled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#setAutoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` autoDetectDisabled: bool `
    ///
    pub fn setAutoDetectLanguageDisabled(self: Sonnet__BackgroundChecker, autoDetectDisabled: bool) void {
        qtc.Sonnet__BackgroundChecker_SetAutoDetectLanguageDisabled(@ptrCast(self.ptr), autoDetectDisabled);
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn start(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStart` instead
    ///
    pub const OnStart = onStart;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStart(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStart` instead
    ///
    pub const SuperStart = superStart;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#start)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superStart(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_SuperStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn stop(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStop` instead
    ///
    pub const OnStop = onStop;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#stop)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStop(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnStop(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStop` instead
    ///
    pub const SuperStop = superStop;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#stop)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superStop(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_SuperStop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _start: i32 `
    ///
    /// ` oldText: []const u8 `
    ///
    /// ` newText: []const u8 `
    ///
    pub fn replace(self: Sonnet__BackgroundChecker, _start: i32, oldText: []const u8, newText: []const u8) void {
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const newText_str = qtc.libqt_string{
            .len = newText.len,
            .data = newText.ptr,
        };
        qtc.Sonnet__BackgroundChecker_Replace(@ptrCast(self.ptr), @bitCast(_start), oldText_str, newText_str);
    }

    /// ### DEPRECATED: Use `changeLanguage` instead
    ///
    pub const ChangeLanguage = changeLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#changeLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn changeLanguage(self: Sonnet__BackgroundChecker, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__BackgroundChecker_ChangeLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### DEPRECATED: Use `continueChecking` instead
    ///
    pub const ContinueChecking = continueChecking;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn continueChecking(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_ContinueChecking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContinueChecking` instead
    ///
    pub const OnContinueChecking = onContinueChecking;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onContinueChecking(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnContinueChecking(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContinueChecking` instead
    ///
    pub const SuperContinueChecking = superContinueChecking;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superContinueChecking(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_SuperContinueChecking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `misspelling` instead
    ///
    pub const Misspelling = misspelling;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#misspelling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` word: []const u8 `
    ///
    /// ` _start: i32 `
    ///
    pub fn misspelling(self: Sonnet__BackgroundChecker, word: []const u8, _start: i32) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__BackgroundChecker_Misspelling(@ptrCast(self.ptr), word_str, @bitCast(_start));
    }

    /// ### DEPRECATED: Use `onMisspelling` instead
    ///
    pub const OnMisspelling = onMisspelling;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#misspelling)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, word: [*:0]const u8, start: i32) callconv(.c) void `
    ///
    pub fn onMisspelling(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_Connect_Misspelling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `done` instead
    ///
    pub const Done = done;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#done)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn done(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_Done(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDone` instead
    ///
    pub const OnDone = onDone;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#done)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker) callconv(.c) void `
    ///
    pub fn onDone(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_Connect_Done(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fetchMoreText` instead
    ///
    pub const FetchMoreText = fetchMoreText;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fetchMoreText(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__BackgroundChecker_FetchMoreText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.fetchMoreText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onFetchMoreText` instead
    ///
    pub const OnFetchMoreText = onFetchMoreText;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onFetchMoreText(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.Sonnet__BackgroundChecker_OnFetchMoreText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFetchMoreText` instead
    ///
    pub const SuperFetchMoreText = superFetchMoreText;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superFetchMoreText(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__BackgroundChecker_SuperFetchMoreText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.fetchMoreText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `finishedCurrentFeed` instead
    ///
    pub const FinishedCurrentFeed = finishedCurrentFeed;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn finishedCurrentFeed(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_FinishedCurrentFeed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinishedCurrentFeed` instead
    ///
    pub const OnFinishedCurrentFeed = onFinishedCurrentFeed;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onFinishedCurrentFeed(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnFinishedCurrentFeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFinishedCurrentFeed` instead
    ///
    pub const SuperFinishedCurrentFeed = superFinishedCurrentFeed;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superFinishedCurrentFeed(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_SuperFinishedCurrentFeed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotEngineDone` instead
    ///
    pub const SlotEngineDone = slotEngineDone;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn slotEngineDone(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_SlotEngineDone(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSlotEngineDone` instead
    ///
    pub const OnSlotEngineDone = onSlotEngineDone;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSlotEngineDone(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnSlotEngineDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotEngineDone` instead
    ///
    pub const SuperSlotEngineDone = superSlotEngineDone;

    /// ### [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superSlotEngineDone(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_SuperSlotEngineDone(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.tr3: Memory allocation failed");
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__BackgroundChecker.objectName: Memory allocation failed");
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Sonnet__BackgroundChecker, name: []const u8) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn isWidgetType(self: Sonnet__BackgroundChecker) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn isWindowType(self: Sonnet__BackgroundChecker) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn isQuickItemType(self: Sonnet__BackgroundChecker) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn signalsBlocked(self: Sonnet__BackgroundChecker) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Sonnet__BackgroundChecker, b: bool) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn thread(self: Sonnet__BackgroundChecker) QThread {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Sonnet__BackgroundChecker, _thread: anytype) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Sonnet__BackgroundChecker, interval: i32) i32 {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Sonnet__BackgroundChecker, time: i64) i32 {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Sonnet__BackgroundChecker, id: i32) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Sonnet__BackgroundChecker, id: i32) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Sonnet__BackgroundChecker.children: Memory allocation failed");
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Sonnet__BackgroundChecker, _parent: anytype) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Sonnet__BackgroundChecker, filterObj: anytype) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Sonnet__BackgroundChecker, obj: anytype) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Sonnet__BackgroundChecker, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn disconnect3(self: Sonnet__BackgroundChecker) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Sonnet__BackgroundChecker, receiver: anytype) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn dumpObjectTree(self: Sonnet__BackgroundChecker) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn dumpObjectInfo(self: Sonnet__BackgroundChecker) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Sonnet__BackgroundChecker, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Sonnet__BackgroundChecker, name: [:0]const u8) QVariant {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Sonnet__BackgroundChecker, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Sonnet__BackgroundChecker.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__BackgroundChecker.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn bindingStorage(self: Sonnet__BackgroundChecker) QBindingStorage {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn bindingStorage2(self: Sonnet__BackgroundChecker) QBindingStorage {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn destroyed(self: Sonnet__BackgroundChecker) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker) callconv(.c) void) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn parent(self: Sonnet__BackgroundChecker) QObject {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Sonnet__BackgroundChecker, classname: [:0]const u8) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn deleteLater(self: Sonnet__BackgroundChecker) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Sonnet__BackgroundChecker, interval: i32, timerType: i32) i32 {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Sonnet__BackgroundChecker, time: i64, timerType: i32) i32 {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Sonnet__BackgroundChecker, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Sonnet__BackgroundChecker, signal: [:0]const u8) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Sonnet__BackgroundChecker, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Sonnet__BackgroundChecker, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Sonnet__BackgroundChecker, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Sonnet__BackgroundChecker, param1: anytype) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QObject) callconv(.c) void) void {
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Sonnet__BackgroundChecker, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__BackgroundChecker_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Sonnet__BackgroundChecker, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__BackgroundChecker_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__BackgroundChecker_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Sonnet__BackgroundChecker, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__BackgroundChecker_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Sonnet__BackgroundChecker, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__BackgroundChecker_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QObject, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__BackgroundChecker_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Sonnet__BackgroundChecker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Sonnet__BackgroundChecker_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Sonnet__BackgroundChecker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Sonnet__BackgroundChecker_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QTimerEvent) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Sonnet__BackgroundChecker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Sonnet__BackgroundChecker_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Sonnet__BackgroundChecker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Sonnet__BackgroundChecker_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QChildEvent) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Sonnet__BackgroundChecker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Sonnet__BackgroundChecker_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Sonnet__BackgroundChecker, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Sonnet__BackgroundChecker_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QEvent) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Sonnet__BackgroundChecker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__BackgroundChecker_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Sonnet__BackgroundChecker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__BackgroundChecker_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Sonnet__BackgroundChecker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__BackgroundChecker_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Sonnet__BackgroundChecker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__BackgroundChecker_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn sender(self: Sonnet__BackgroundChecker) QObject {
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superSender(self: Sonnet__BackgroundChecker) QObject {
        return .{ .ptr = qtc.Sonnet__BackgroundChecker_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) QObject) void {
        qtc.Sonnet__BackgroundChecker_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn senderSignalIndex(self: Sonnet__BackgroundChecker) i32 {
        return qtc.Sonnet__BackgroundChecker_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn superSenderSignalIndex(self: Sonnet__BackgroundChecker) i32 {
        return qtc.Sonnet__BackgroundChecker_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: Sonnet__BackgroundChecker, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__BackgroundChecker_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Sonnet__BackgroundChecker, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__BackgroundChecker_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: Sonnet__BackgroundChecker, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__BackgroundChecker_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__BackgroundChecker_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Sonnet__BackgroundChecker, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__BackgroundChecker_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: Sonnet__BackgroundChecker, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__BackgroundChecker_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__BackgroundChecker`
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, QMetaMethod) callconv(.c) bool) void {
        qtc.Sonnet__BackgroundChecker_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__BackgroundChecker `
    ///
    /// ` callback: *const fn (self: Sonnet__BackgroundChecker, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Sonnet__BackgroundChecker, callback: *const fn (Sonnet__BackgroundChecker, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__BackgroundChecker `
    ///
    pub fn delete(self: Sonnet__BackgroundChecker) void {
        qtc.Sonnet__BackgroundChecker_Delete(@ptrCast(self.ptr));
    }
};
