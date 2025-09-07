const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/sonnet-backgroundchecker.html
pub const sonnet__backgroundchecker = struct {
    /// New constructs a new Sonnet::BackgroundChecker object.
    ///
    ///
    pub fn New() QtC.Sonnet__BackgroundChecker {
        return qtc.Sonnet__BackgroundChecker_new();
    }

    /// New2 constructs a new Sonnet::BackgroundChecker object.
    ///
    /// ``` speller: QtC.Sonnet__Speller ```
    pub fn New2(speller: ?*anyopaque) QtC.Sonnet__BackgroundChecker {
        return qtc.Sonnet__BackgroundChecker_new2(@ptrCast(speller));
    }

    /// New3 constructs a new Sonnet::BackgroundChecker object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.Sonnet__BackgroundChecker {
        return qtc.Sonnet__BackgroundChecker_new3(@ptrCast(parent));
    }

    /// New4 constructs a new Sonnet::BackgroundChecker object.
    ///
    /// ``` speller: QtC.Sonnet__Speller, parent: QtC.QObject ```
    pub fn New4(speller: ?*anyopaque, parent: ?*anyopaque) QtC.Sonnet__BackgroundChecker {
        return qtc.Sonnet__BackgroundChecker_new4(@ptrCast(speller), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Sonnet__BackgroundChecker_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Sonnet__BackgroundChecker, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__BackgroundChecker_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Sonnet__BackgroundChecker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Sonnet__BackgroundChecker_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__BackgroundChecker_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Sonnet__BackgroundChecker_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Sonnet__BackgroundChecker_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#setText)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__BackgroundChecker_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#text)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__BackgroundChecker_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#currentContext)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, allocator: std.mem.Allocator ```
    pub fn CurrentContext(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__BackgroundChecker_CurrentContext(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.CurrentContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#speller)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Speller(self: ?*anyopaque) QtC.Sonnet__Speller {
        return qtc.Sonnet__BackgroundChecker_Speller(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#setSpeller)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, speller: QtC.Sonnet__Speller ```
    pub fn SetSpeller(self: ?*anyopaque, speller: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_SetSpeller(@ptrCast(self), @ptrCast(speller));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#checkWord)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, word: []const u8 ```
    pub fn CheckWord(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__BackgroundChecker_CheckWord(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#suggest)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, word: []const u8, allocator: std.mem.Allocator ```
    pub fn Suggest(self: ?*anyopaque, word: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__BackgroundChecker_Suggest(@ptrCast(self), word_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::backgroundchecker.Suggest: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::backgroundchecker.Suggest: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#addWordToPersonal)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, word: []const u8 ```
    pub fn AddWordToPersonal(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__BackgroundChecker_AddWordToPersonal(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#addWordToSession)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, word: []const u8 ```
    pub fn AddWordToSession(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__BackgroundChecker_AddWordToSession(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#autoDetectLanguageDisabled)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn AutoDetectLanguageDisabled(self: ?*anyopaque) bool {
        return qtc.Sonnet__BackgroundChecker_AutoDetectLanguageDisabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#setAutoDetectLanguageDisabled)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, autoDetectDisabled: bool ```
    pub fn SetAutoDetectLanguageDisabled(self: ?*anyopaque, autoDetectDisabled: bool) void {
        qtc.Sonnet__BackgroundChecker_SetAutoDetectLanguageDisabled(@ptrCast(self), autoDetectDisabled);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#start)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) void ```
    pub fn OnStart(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnStart(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#start)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QBaseStart(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseStart(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#stop)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#stop)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) void ```
    pub fn OnStop(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnStop(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#stop)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QBaseStop(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseStop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#replace)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, start: i32, oldText: []const u8, newText: []const u8 ```
    pub fn Replace(self: ?*anyopaque, start: i32, oldText: []const u8, newText: []const u8) void {
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const newText_str = qtc.libqt_string{
            .len = newText.len,
            .data = newText.ptr,
        };
        qtc.Sonnet__BackgroundChecker_Replace(@ptrCast(self), @intCast(start), oldText_str, newText_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#changeLanguage)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, lang: []const u8 ```
    pub fn ChangeLanguage(self: ?*anyopaque, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__BackgroundChecker_ChangeLanguage(@ptrCast(self), lang_str);
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn ContinueChecking(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_ContinueChecking(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) void ```
    pub fn OnContinueChecking(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnContinueChecking(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QBaseContinueChecking(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseContinueChecking(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#misspelling)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, word: []const u8, start: i32 ```
    pub fn Misspelling(self: ?*anyopaque, word: []const u8, start: i32) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__BackgroundChecker_Misspelling(@ptrCast(self), word_str, @intCast(start));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#misspelling)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, word: [*:0]const u8, start: i32) callconv(.c) void ```
    pub fn OnMisspelling(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_Connect_Misspelling(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#done)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Done(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_Done(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#done)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker) callconv(.c) void ```
    pub fn OnDone(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_Connect_Done(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, allocator: std.mem.Allocator ```
    pub fn FetchMoreText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__BackgroundChecker_FetchMoreText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.FetchMoreText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnFetchMoreText(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.Sonnet__BackgroundChecker_OnFetchMoreText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, allocator: std.mem.Allocator ```
    pub fn QBaseFetchMoreText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__BackgroundChecker_QBaseFetchMoreText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.FetchMoreText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn FinishedCurrentFeed(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_FinishedCurrentFeed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) void ```
    pub fn OnFinishedCurrentFeed(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnFinishedCurrentFeed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QBaseFinishedCurrentFeed(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseFinishedCurrentFeed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn SlotEngineDone(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_SlotEngineDone(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) void ```
    pub fn OnSlotEngineDone(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnSlotEngineDone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QBaseSlotEngineDone(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseSlotEngineDone(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Sonnet__BackgroundChecker_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Sonnet__BackgroundChecker_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::backgroundchecker.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("sonnet::backgroundchecker.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("sonnet::backgroundchecker.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::backgroundchecker.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__BackgroundChecker_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__BackgroundChecker_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__BackgroundChecker_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__BackgroundChecker_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__BackgroundChecker_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__BackgroundChecker_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__BackgroundChecker_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__BackgroundChecker_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__BackgroundChecker_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Sonnet__BackgroundChecker_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__BackgroundChecker_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__BackgroundChecker_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Sonnet__BackgroundChecker_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__BackgroundChecker_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__BackgroundChecker_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__BackgroundChecker_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__BackgroundChecker_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__BackgroundChecker_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__BackgroundChecker_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker, slot: fn (self: QtC.Sonnet__BackgroundChecker, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Sonnet__BackgroundChecker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Sonnet__BackgroundChecker_Delete(@ptrCast(self));
    }
};
