const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
pub const TextGrammarCheck__LanguageToolManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextGrammarCheck__LanguageToolManager,

    pub const _is_TextGrammarCheck__LanguageToolManager = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextGrammarCheck::LanguageToolManager object in C++ memory
    ///
    pub fn new() TextGrammarCheck__LanguageToolManager {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextGrammarCheck::LanguageToolManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) TextGrammarCheck__LanguageToolManager {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn metaObject(self: TextGrammarCheck__LanguageToolManager) QMetaObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextGrammarCheck__LanguageToolManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn superMetaObject(self: TextGrammarCheck__LanguageToolManager) QMetaObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextGrammarCheck__LanguageToolManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextGrammarCheck__LanguageToolManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextGrammarCheck__LanguageToolManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextGrammarCheck__LanguageToolManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextGrammarCheck__LanguageToolManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextGrammarCheck__LanguageToolManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextGrammarCheck__LanguageToolManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextGrammarCheck__LanguageToolManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `self0` instead
    ///
    pub const Self = self0;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    pub fn self0() TextGrammarCheck__LanguageToolManager {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_Self() };
    }

    /// ### DEPRECATED: Use `networkAccessManager` instead
    ///
    pub const NetworkAccessManager = networkAccessManager;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn networkAccessManager(self: TextGrammarCheck__LanguageToolManager) QNetworkAccessManager {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_NetworkAccessManager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `languageToolPath` instead
    ///
    pub const LanguageToolPath = languageToolPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn languageToolPath(self: TextGrammarCheck__LanguageToolManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__LanguageToolManager_LanguageToolPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.languageToolPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLanguageToolPath` instead
    ///
    pub const SetLanguageToolPath = setLanguageToolPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setLanguageToolPath(self: TextGrammarCheck__LanguageToolManager, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.TextGrammarCheck__LanguageToolManager_SetLanguageToolPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `loadSettings` instead
    ///
    pub const LoadSettings = loadSettings;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn loadSettings(self: TextGrammarCheck__LanguageToolManager) void {
        qtc.TextGrammarCheck__LanguageToolManager_LoadSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveSettings` instead
    ///
    pub const SaveSettings = saveSettings;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn saveSettings(self: TextGrammarCheck__LanguageToolManager) void {
        qtc.TextGrammarCheck__LanguageToolManager_SaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn language(self: TextGrammarCheck__LanguageToolManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__LanguageToolManager_Language(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLanguage` instead
    ///
    pub const SetLanguage = setLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _language: []const u8 `
    ///
    pub fn setLanguage(self: TextGrammarCheck__LanguageToolManager, _language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = _language.len,
            .data = _language.ptr,
        };
        qtc.TextGrammarCheck__LanguageToolManager_SetLanguage(@ptrCast(self.ptr), language_str);
    }

    /// ### DEPRECATED: Use `useLocalInstance` instead
    ///
    pub const UseLocalInstance = useLocalInstance;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn useLocalInstance(self: TextGrammarCheck__LanguageToolManager) bool {
        return qtc.TextGrammarCheck__LanguageToolManager_UseLocalInstance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUseLocalInstance` instead
    ///
    pub const SetUseLocalInstance = setUseLocalInstance;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _useLocalInstance: bool `
    ///
    pub fn setUseLocalInstance(self: TextGrammarCheck__LanguageToolManager, _useLocalInstance: bool) void {
        qtc.TextGrammarCheck__LanguageToolManager_SetUseLocalInstance(@ptrCast(self.ptr), _useLocalInstance);
    }

    /// ### DEPRECATED: Use `languageToolCheckPath` instead
    ///
    pub const LanguageToolCheckPath = languageToolCheckPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn languageToolCheckPath(self: TextGrammarCheck__LanguageToolManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__LanguageToolManager_LanguageToolCheckPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.languageToolCheckPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `languageToolLanguagesPath` instead
    ///
    pub const LanguageToolLanguagesPath = languageToolLanguagesPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn languageToolLanguagesPath(self: TextGrammarCheck__LanguageToolManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__LanguageToolManager_LanguageToolLanguagesPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.languageToolLanguagesPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `convertToLanguagePath` instead
    ///
    pub const ConvertToLanguagePath = convertToLanguagePath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn convertToLanguagePath(allocator: std.mem.Allocator, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.TextGrammarCheck__LanguageToolManager_ConvertToLanguagePath(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.convertToLanguagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `grammarColorForError` instead
    ///
    pub const GrammarColorForError = grammarColorForError;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` errorVal: []const u8 `
    ///
    pub fn grammarColorForError(self: TextGrammarCheck__LanguageToolManager, errorVal: []const u8) QColor {
        const errorVal_str = qtc.libqt_string{
            .len = errorVal.len,
            .data = errorVal.ptr,
        };
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_GrammarColorForError(@ptrCast(self.ptr), errorVal_str) };
    }

    /// ### DEPRECATED: Use `allowToGetListOfLanguages` instead
    ///
    pub const AllowToGetListOfLanguages = allowToGetListOfLanguages;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn allowToGetListOfLanguages(self: TextGrammarCheck__LanguageToolManager) bool {
        return qtc.TextGrammarCheck__LanguageToolManager_AllowToGetListOfLanguages(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.tr3: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextGrammarCheck__LanguageToolManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__LanguageToolManager.objectName: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextGrammarCheck__LanguageToolManager, name: []const u8) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn isWidgetType(self: TextGrammarCheck__LanguageToolManager) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn isWindowType(self: TextGrammarCheck__LanguageToolManager) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn isQuickItemType(self: TextGrammarCheck__LanguageToolManager) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn signalsBlocked(self: TextGrammarCheck__LanguageToolManager) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextGrammarCheck__LanguageToolManager, b: bool) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn thread(self: TextGrammarCheck__LanguageToolManager) QThread {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextGrammarCheck__LanguageToolManager, _thread: anytype) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextGrammarCheck__LanguageToolManager, interval: i32) i32 {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextGrammarCheck__LanguageToolManager, time: i64) i32 {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextGrammarCheck__LanguageToolManager, id: i32) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextGrammarCheck__LanguageToolManager, id: i32) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextGrammarCheck__LanguageToolManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextGrammarCheck__LanguageToolManager.children: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: TextGrammarCheck__LanguageToolManager, _parent: anytype) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextGrammarCheck__LanguageToolManager, filterObj: anytype) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextGrammarCheck__LanguageToolManager, obj: anytype) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextGrammarCheck__LanguageToolManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn disconnect3(self: TextGrammarCheck__LanguageToolManager) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextGrammarCheck__LanguageToolManager, receiver: anytype) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn dumpObjectTree(self: TextGrammarCheck__LanguageToolManager) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn dumpObjectInfo(self: TextGrammarCheck__LanguageToolManager) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextGrammarCheck__LanguageToolManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextGrammarCheck__LanguageToolManager, name: [:0]const u8) QVariant {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextGrammarCheck__LanguageToolManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextGrammarCheck__LanguageToolManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextGrammarCheck__LanguageToolManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn bindingStorage(self: TextGrammarCheck__LanguageToolManager) QBindingStorage {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn bindingStorage2(self: TextGrammarCheck__LanguageToolManager) QBindingStorage {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn destroyed(self: TextGrammarCheck__LanguageToolManager) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn parent(self: TextGrammarCheck__LanguageToolManager) QObject {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextGrammarCheck__LanguageToolManager, classname: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn deleteLater(self: TextGrammarCheck__LanguageToolManager) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextGrammarCheck__LanguageToolManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextGrammarCheck__LanguageToolManager, time: i64, timerType: i32) i32 {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextGrammarCheck__LanguageToolManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextGrammarCheck__LanguageToolManager, signal: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextGrammarCheck__LanguageToolManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextGrammarCheck__LanguageToolManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextGrammarCheck__LanguageToolManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextGrammarCheck__LanguageToolManager, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QObject) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: TextGrammarCheck__LanguageToolManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolManager_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: TextGrammarCheck__LanguageToolManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QEvent) callconv(.c) bool) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: TextGrammarCheck__LanguageToolManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: TextGrammarCheck__LanguageToolManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: TextGrammarCheck__LanguageToolManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextGrammarCheck__LanguageToolManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextGrammarCheck__LanguageToolManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextGrammarCheck__LanguageToolManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QTimerEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextGrammarCheck__LanguageToolManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextGrammarCheck__LanguageToolManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextGrammarCheck__LanguageToolManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextGrammarCheck__LanguageToolManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QChildEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextGrammarCheck__LanguageToolManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextGrammarCheck__LanguageToolManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextGrammarCheck__LanguageToolManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextGrammarCheck__LanguageToolManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextGrammarCheck__LanguageToolManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextGrammarCheck__LanguageToolManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QMetaMethod) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextGrammarCheck__LanguageToolManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextGrammarCheck__LanguageToolManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QMetaMethod) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn sender(self: TextGrammarCheck__LanguageToolManager) QObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn superSender(self: TextGrammarCheck__LanguageToolManager) QObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolManager_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextGrammarCheck__LanguageToolManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn senderSignalIndex(self: TextGrammarCheck__LanguageToolManager) i32 {
        return qtc.TextGrammarCheck__LanguageToolManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn superSenderSignalIndex(self: TextGrammarCheck__LanguageToolManager) i32 {
        return qtc.TextGrammarCheck__LanguageToolManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextGrammarCheck__LanguageToolManager, callback: *const fn () callconv(.c) i32) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextGrammarCheck__LanguageToolManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextGrammarCheck__LanguageToolManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextGrammarCheck__LanguageToolManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextGrammarCheck__LanguageToolManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextGrammarCheck__LanguageToolManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextGrammarCheck__LanguageToolManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextGrammarCheck__LanguageToolManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextGrammarCheck__LanguageToolManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolManager`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, QMetaMethod) callconv(.c) bool) void {
        qtc.TextGrammarCheck__LanguageToolManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextGrammarCheck__LanguageToolManager, callback: *const fn (TextGrammarCheck__LanguageToolManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolManager.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextGrammarCheck__LanguageToolManager `
    ///
    pub fn delete(self: TextGrammarCheck__LanguageToolManager) void {
        qtc.TextGrammarCheck__LanguageToolManager_Delete(@ptrCast(self.ptr));
    }
};
