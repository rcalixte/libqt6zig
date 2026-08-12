const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSettings = @import("libqt6").QSettings;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QsciAbstractAPIs = @import("libqt6").QsciAbstractAPIs;
const QsciScintilla = @import("libqt6").QsciScintilla;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTekHex.html)
pub const QsciLexerTekHex = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTekHex.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciLexerTekHex,

    pub const _is_QsciLexerTekHex = {};
    pub const _is_QsciLexerHex = {};
    pub const _is_QsciLexer = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciLexerTekHex object in C++ memory
    ///
    pub fn new() QsciLexerTekHex {
        return .{ .ptr = qtc.QsciLexerTekHex_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciLexerTekHex object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QsciLexerTekHex {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QsciLexerTekHex_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn metaObject(self: QsciLexerTekHex) QMetaObject {
        return .{ .ptr = qtc.QsciLexerTekHex_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QsciLexerTekHex, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciLexerTekHex_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superMetaObject(self: QsciLexerTekHex) QMetaObject {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QsciLexerTekHex, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerTekHex_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciLexerTekHex_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QsciLexerTekHex, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerTekHex_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QsciLexerTekHex, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerTekHex_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QsciLexerTekHex, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerTekHex_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerTekHex.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTekHex.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn language(self: QsciLexerTekHex) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_Language(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `lexer` instead
    ///
    pub const Lexer = lexer;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTekHex.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn lexer(self: QsciLexerTekHex) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_Lexer(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTekHex.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` style: i32 `
    ///
    pub fn description(self: QsciLexerTekHex, allocator: std.mem.Allocator, style: i32) []const u8 {
        var _str = qtc.QsciLexerTekHex_Description(@ptrCast(self.ptr), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerTekHex.description: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerTekHex.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerTekHex.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultColor` instead
    ///
    pub const DefaultColor = defaultColor;

    /// Inherited from QsciLexerHex
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHex.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerHex_DefaultColor(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultFont` instead
    ///
    pub const DefaultFont = defaultFont;

    /// Inherited from QsciLexerHex
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHex.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont(self: QsciLexerTekHex, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerHex_DefaultFont(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultPaper` instead
    ///
    pub const DefaultPaper = defaultPaper;

    /// Inherited from QsciLexerHex
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHex.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerHex_DefaultPaper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `apis` instead
    ///
    pub const Apis = apis;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn apis(self: QsciLexerTekHex) QsciAbstractAPIs {
        return .{ .ptr = qtc.QsciLexer_Apis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `autoIndentStyle` instead
    ///
    pub const AutoIndentStyle = autoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn autoIndentStyle(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexer_AutoIndentStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `editor` instead
    ///
    pub const Editor = editor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn editor(self: QsciLexerTekHex) QsciScintilla {
        return .{ .ptr = qtc.QsciLexer_Editor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAPIs` instead
    ///
    pub const SetAPIs = setAPIs;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _apis: QsciAbstractAPIs `
    ///
    pub fn setAPIs(self: QsciLexerTekHex, _apis: anytype) void {
        comptime _ = @TypeOf(_apis)._is_QsciAbstractAPIs;
        qtc.QsciLexer_SetAPIs(@ptrCast(self.ptr), @ptrCast(_apis.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultColor` instead
    ///
    pub const SetDefaultColor = setDefaultColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultColor(self: QsciLexerTekHex, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_SetDefaultColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultFont` instead
    ///
    pub const SetDefaultFont = setDefaultFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` f: QFont `
    ///
    pub fn setDefaultFont(self: QsciLexerTekHex, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexer_SetDefaultFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultPaper` instead
    ///
    pub const SetDefaultPaper = setDefaultPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultPaper(self: QsciLexerTekHex, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_SetDefaultPaper(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `readSettings` instead
    ///
    pub const ReadSettings = readSettings;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    pub fn readSettings(self: QsciLexerTekHex, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciLexer_ReadSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### DEPRECATED: Use `writeSettings` instead
    ///
    pub const WriteSettings = writeSettings;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    pub fn writeSettings(self: QsciLexerTekHex, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciLexer_WriteSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn colorChanged(self: QsciLexerTekHex, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_ColorChanged(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eolFillChanged` instead
    ///
    pub const EolFillChanged = eolFillChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` eolfilled: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFillChanged(self: QsciLexerTekHex, eolfilled: bool, style: i32) void {
        qtc.QsciLexer_EolFillChanged(@ptrCast(self.ptr), eolfilled, @bitCast(style));
    }

    /// ### DEPRECATED: Use `onEolFillChanged` instead
    ///
    pub const OnEolFillChanged = onEolFillChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, eolfilled: bool, style: i32) callconv(.c) void `
    ///
    pub fn onEolFillChanged(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, bool, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_EolFillChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fontChanged` instead
    ///
    pub const FontChanged = fontChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn fontChanged(self: QsciLexerTekHex, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexer_FontChanged(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onFontChanged` instead
    ///
    pub const OnFontChanged = onFontChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QFont, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paperChanged` instead
    ///
    pub const PaperChanged = paperChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn paperChanged(self: QsciLexerTekHex, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_PaperChanged(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onPaperChanged` instead
    ///
    pub const OnPaperChanged = onPaperChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onPaperChanged(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PaperChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `propertyChanged` instead
    ///
    pub const PropertyChanged = propertyChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` prop: [:0]const u8 `
    ///
    /// ` val: [:0]const u8 `
    ///
    pub fn propertyChanged(self: QsciLexerTekHex, prop: [:0]const u8, val: [:0]const u8) void {
        const prop_Cstring = prop.ptr;
        const val_Cstring = val.ptr;
        qtc.QsciLexer_PropertyChanged(@ptrCast(self.ptr), prop_Cstring, val_Cstring);
    }

    /// ### DEPRECATED: Use `onPropertyChanged` instead
    ///
    pub const OnPropertyChanged = onPropertyChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPropertyChanged(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PropertyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readSettings2` instead
    ///
    pub const ReadSettings2 = readSettings2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn readSettings2(self: QsciLexerTekHex, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_ReadSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
    }

    /// ### DEPRECATED: Use `writeSettings2` instead
    ///
    pub const WriteSettings2 = writeSettings2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn writeSettings2(self: QsciLexerTekHex, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_WriteSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QsciLexerTekHex, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerTekHex.objectName: Memory allocation failed");
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QsciLexerTekHex, name: []const u8) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn isWidgetType(self: QsciLexerTekHex) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn isWindowType(self: QsciLexerTekHex) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn isQuickItemType(self: QsciLexerTekHex) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn signalsBlocked(self: QsciLexerTekHex) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QsciLexerTekHex, b: bool) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn thread(self: QsciLexerTekHex) QThread {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QsciLexerTekHex, _thread: anytype) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QsciLexerTekHex, interval: i32) i32 {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QsciLexerTekHex, time: i64) i32 {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QsciLexerTekHex, id: i32) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QsciLexerTekHex, id: i32) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QsciLexerTekHex, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QsciLexerTekHex.children: Memory allocation failed");
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QsciLexerTekHex, _parent: anytype) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QsciLexerTekHex, filterObj: anytype) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QsciLexerTekHex, obj: anytype) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QsciLexerTekHex, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn disconnect3(self: QsciLexerTekHex) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QsciLexerTekHex, receiver: anytype) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn dumpObjectTree(self: QsciLexerTekHex) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn dumpObjectInfo(self: QsciLexerTekHex) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QsciLexerTekHex, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QsciLexerTekHex, name: [:0]const u8) QVariant {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QsciLexerTekHex, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QsciLexerTekHex.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerTekHex.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn bindingStorage(self: QsciLexerTekHex) QBindingStorage {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn bindingStorage2(self: QsciLexerTekHex) QBindingStorage {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn destroyed(self: QsciLexerTekHex) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex) callconv(.c) void) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn parent(self: QsciLexerTekHex) QObject {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QsciLexerTekHex, classname: [:0]const u8) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn deleteLater(self: QsciLexerTekHex) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QsciLexerTekHex, interval: i32, timerType: i32) i32 {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QsciLexerTekHex, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QsciLexerTekHex, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QsciLexerTekHex, signal: [:0]const u8) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QsciLexerTekHex, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QsciLexerTekHex, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QsciLexerTekHex, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QsciLexerTekHex, param1: anytype) void {
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lexerId` instead
    ///
    pub const LexerId = lexerId;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn lexerId(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_LexerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLexerId` instead
    ///
    pub const SuperLexerId = superLexerId;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superLexerId(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SuperLexerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLexerId` instead
    ///
    pub const OnLexerId = onLexerId;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLexerId(self: QsciLexerTekHex, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnLexerId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoCompletionFillups` instead
    ///
    pub const AutoCompletionFillups = autoCompletionFillups;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn autoCompletionFillups(self: QsciLexerTekHex) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_AutoCompletionFillups(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superAutoCompletionFillups` instead
    ///
    pub const SuperAutoCompletionFillups = superAutoCompletionFillups;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superAutoCompletionFillups(self: QsciLexerTekHex) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_SuperAutoCompletionFillups(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onAutoCompletionFillups` instead
    ///
    pub const OnAutoCompletionFillups = onAutoCompletionFillups;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onAutoCompletionFillups(self: QsciLexerTekHex, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerTekHex_OnAutoCompletionFillups(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoCompletionWordSeparators` instead
    ///
    pub const AutoCompletionWordSeparators = autoCompletionWordSeparators;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autoCompletionWordSeparators(self: QsciLexerTekHex, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerTekHex_AutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerTekHex.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerTekHex.autoCompletionWordSeparators: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superAutoCompletionWordSeparators` instead
    ///
    pub const SuperAutoCompletionWordSeparators = superAutoCompletionWordSeparators;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superAutoCompletionWordSeparators(self: QsciLexerTekHex, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerTekHex_SuperAutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerTekHex.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerTekHex.autoCompletionWordSeparators: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onAutoCompletionWordSeparators` instead
    ///
    pub const OnAutoCompletionWordSeparators = onAutoCompletionWordSeparators;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onAutoCompletionWordSeparators(self: QsciLexerTekHex, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciLexerTekHex_OnAutoCompletionWordSeparators(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockEnd` instead
    ///
    pub const BlockEnd = blockEnd;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockEnd(self: QsciLexerTekHex, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_BlockEnd(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superBlockEnd` instead
    ///
    pub const SuperBlockEnd = superBlockEnd;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockEnd(self: QsciLexerTekHex, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_SuperBlockEnd(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onBlockEnd` instead
    ///
    pub const OnBlockEnd = onBlockEnd;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockEnd(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerTekHex_OnBlockEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockLookback` instead
    ///
    pub const BlockLookback = blockLookback;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn blockLookback(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_BlockLookback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBlockLookback` instead
    ///
    pub const SuperBlockLookback = superBlockLookback;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superBlockLookback(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SuperBlockLookback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBlockLookback` instead
    ///
    pub const OnBlockLookback = onBlockLookback;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBlockLookback(self: QsciLexerTekHex, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnBlockLookback(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockStart` instead
    ///
    pub const BlockStart = blockStart;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStart(self: QsciLexerTekHex, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_BlockStart(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superBlockStart` instead
    ///
    pub const SuperBlockStart = superBlockStart;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStart(self: QsciLexerTekHex, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_SuperBlockStart(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onBlockStart` instead
    ///
    pub const OnBlockStart = onBlockStart;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStart(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerTekHex_OnBlockStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockStartKeyword` instead
    ///
    pub const BlockStartKeyword = blockStartKeyword;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStartKeyword(self: QsciLexerTekHex, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_BlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superBlockStartKeyword` instead
    ///
    pub const SuperBlockStartKeyword = superBlockStartKeyword;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStartKeyword(self: QsciLexerTekHex, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_SuperBlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onBlockStartKeyword` instead
    ///
    pub const OnBlockStartKeyword = onBlockStartKeyword;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStartKeyword(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerTekHex_OnBlockStartKeyword(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `braceStyle` instead
    ///
    pub const BraceStyle = braceStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn braceStyle(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_BraceStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBraceStyle` instead
    ///
    pub const SuperBraceStyle = superBraceStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superBraceStyle(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SuperBraceStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBraceStyle` instead
    ///
    pub const OnBraceStyle = onBraceStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBraceStyle(self: QsciLexerTekHex, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnBraceStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `caseSensitive` instead
    ///
    pub const CaseSensitive = caseSensitive;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn caseSensitive(self: QsciLexerTekHex) bool {
        return qtc.QsciLexerTekHex_CaseSensitive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCaseSensitive` instead
    ///
    pub const SuperCaseSensitive = superCaseSensitive;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superCaseSensitive(self: QsciLexerTekHex) bool {
        return qtc.QsciLexerTekHex_SuperCaseSensitive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCaseSensitive` instead
    ///
    pub const OnCaseSensitive = onCaseSensitive;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCaseSensitive(self: QsciLexerTekHex, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnCaseSensitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn color(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_Color(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superColor` instead
    ///
    pub const SuperColor = superColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superColor(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperColor(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onColor` instead
    ///
    pub const OnColor = onColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onColor(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) QColor) void {
        qtc.QsciLexerTekHex_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eolFill` instead
    ///
    pub const EolFill = eolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFill(self: QsciLexerTekHex, style: i32) bool {
        return qtc.QsciLexerTekHex_EolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superEolFill` instead
    ///
    pub const SuperEolFill = superEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superEolFill(self: QsciLexerTekHex, style: i32) bool {
        return qtc.QsciLexerTekHex_SuperEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onEolFill` instead
    ///
    pub const OnEolFill = onEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) bool `
    ///
    pub fn onEolFill(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn font(self: QsciLexerTekHex, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerTekHex_Font(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superFont` instead
    ///
    pub const SuperFont = superFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superFont(self: QsciLexerTekHex, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperFont(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onFont` instead
    ///
    pub const OnFont = onFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFont(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) QFont) void {
        qtc.QsciLexerTekHex_OnFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indentationGuideView` instead
    ///
    pub const IndentationGuideView = indentationGuideView;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn indentationGuideView(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_IndentationGuideView(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIndentationGuideView` instead
    ///
    pub const SuperIndentationGuideView = superIndentationGuideView;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superIndentationGuideView(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SuperIndentationGuideView(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIndentationGuideView` instead
    ///
    pub const OnIndentationGuideView = onIndentationGuideView;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onIndentationGuideView(self: QsciLexerTekHex, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnIndentationGuideView(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keywords` instead
    ///
    pub const Keywords = keywords;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` set: i32 `
    ///
    pub fn keywords(self: QsciLexerTekHex, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_Keywords(@ptrCast(self.ptr), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superKeywords` instead
    ///
    pub const SuperKeywords = superKeywords;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` set: i32 `
    ///
    pub fn superKeywords(self: QsciLexerTekHex, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_SuperKeywords(@ptrCast(self.ptr), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onKeywords` instead
    ///
    pub const OnKeywords = onKeywords;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, set: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onKeywords(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerTekHex_OnKeywords(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultStyle` instead
    ///
    pub const DefaultStyle = defaultStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn defaultStyle(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_DefaultStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDefaultStyle` instead
    ///
    pub const SuperDefaultStyle = superDefaultStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superDefaultStyle(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SuperDefaultStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDefaultStyle` instead
    ///
    pub const OnDefaultStyle = onDefaultStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDefaultStyle(self: QsciLexerTekHex, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnDefaultStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paper` instead
    ///
    pub const Paper = paper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn paper(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_Paper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superPaper` instead
    ///
    pub const SuperPaper = superPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superPaper(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperPaper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onPaper` instead
    ///
    pub const OnPaper = onPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPaper(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) QColor) void {
        qtc.QsciLexerTekHex_OnPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultColor2` instead
    ///
    pub const DefaultColor2 = defaultColor2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor2(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_DefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superDefaultColor2` instead
    ///
    pub const SuperDefaultColor2 = superDefaultColor2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultColor2(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperDefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onDefaultColor2` instead
    ///
    pub const OnDefaultColor2 = onDefaultColor2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultColor2(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) QColor) void {
        qtc.QsciLexerTekHex_OnDefaultColor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultEolFill` instead
    ///
    pub const DefaultEolFill = defaultEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultEolFill(self: QsciLexerTekHex, style: i32) bool {
        return qtc.QsciLexerTekHex_DefaultEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superDefaultEolFill` instead
    ///
    pub const SuperDefaultEolFill = superDefaultEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultEolFill(self: QsciLexerTekHex, style: i32) bool {
        return qtc.QsciLexerTekHex_SuperDefaultEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onDefaultEolFill` instead
    ///
    pub const OnDefaultEolFill = onDefaultEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) bool `
    ///
    pub fn onDefaultEolFill(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnDefaultEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultFont2` instead
    ///
    pub const DefaultFont2 = defaultFont2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont2(self: QsciLexerTekHex, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerTekHex_DefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superDefaultFont2` instead
    ///
    pub const SuperDefaultFont2 = superDefaultFont2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultFont2(self: QsciLexerTekHex, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperDefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onDefaultFont2` instead
    ///
    pub const OnDefaultFont2 = onDefaultFont2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultFont2(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) QFont) void {
        qtc.QsciLexerTekHex_OnDefaultFont2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultPaper2` instead
    ///
    pub const DefaultPaper2 = defaultPaper2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper2(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_DefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superDefaultPaper2` instead
    ///
    pub const SuperDefaultPaper2 = superDefaultPaper2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultPaper2(self: QsciLexerTekHex, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperDefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onDefaultPaper2` instead
    ///
    pub const OnDefaultPaper2 = onDefaultPaper2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultPaper2(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) QColor) void {
        qtc.QsciLexerTekHex_OnDefaultPaper2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setEditor` instead
    ///
    pub const SetEditor = setEditor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn setEditor(self: QsciLexerTekHex, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerTekHex_SetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
    }

    /// ### DEPRECATED: Use `superSetEditor` instead
    ///
    pub const SuperSetEditor = superSetEditor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn superSetEditor(self: QsciLexerTekHex, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerTekHex_SuperSetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
    }

    /// ### DEPRECATED: Use `onSetEditor` instead
    ///
    pub const OnSetEditor = onSetEditor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, editor: QsciScintilla) callconv(.c) void `
    ///
    pub fn onSetEditor(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QsciScintilla) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnSetEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `refreshProperties` instead
    ///
    pub const RefreshProperties = refreshProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn refreshProperties(self: QsciLexerTekHex) void {
        qtc.QsciLexerTekHex_RefreshProperties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRefreshProperties` instead
    ///
    pub const SuperRefreshProperties = superRefreshProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superRefreshProperties(self: QsciLexerTekHex) void {
        qtc.QsciLexerTekHex_SuperRefreshProperties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRefreshProperties` instead
    ///
    pub const OnRefreshProperties = onRefreshProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRefreshProperties(self: QsciLexerTekHex, callback: *const fn () callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnRefreshProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `styleBitsNeeded` instead
    ///
    pub const StyleBitsNeeded = styleBitsNeeded;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn styleBitsNeeded(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_StyleBitsNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStyleBitsNeeded` instead
    ///
    pub const SuperStyleBitsNeeded = superStyleBitsNeeded;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superStyleBitsNeeded(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SuperStyleBitsNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStyleBitsNeeded` instead
    ///
    pub const OnStyleBitsNeeded = onStyleBitsNeeded;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onStyleBitsNeeded(self: QsciLexerTekHex, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnStyleBitsNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wordCharacters` instead
    ///
    pub const WordCharacters = wordCharacters;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn wordCharacters(self: QsciLexerTekHex) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_WordCharacters(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superWordCharacters` instead
    ///
    pub const SuperWordCharacters = superWordCharacters;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superWordCharacters(self: QsciLexerTekHex) [:0]const u8 {
        const _ret = qtc.QsciLexerTekHex_SuperWordCharacters(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onWordCharacters` instead
    ///
    pub const OnWordCharacters = onWordCharacters;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onWordCharacters(self: QsciLexerTekHex, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerTekHex_OnWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAutoIndentStyle` instead
    ///
    pub const SetAutoIndentStyle = setAutoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn setAutoIndentStyle(self: QsciLexerTekHex, autoindentstyle: i32) void {
        qtc.QsciLexerTekHex_SetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
    }

    /// ### DEPRECATED: Use `superSetAutoIndentStyle` instead
    ///
    pub const SuperSetAutoIndentStyle = superSetAutoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn superSetAutoIndentStyle(self: QsciLexerTekHex, autoindentstyle: i32) void {
        qtc.QsciLexerTekHex_SuperSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
    }

    /// ### DEPRECATED: Use `onSetAutoIndentStyle` instead
    ///
    pub const OnSetAutoIndentStyle = onSetAutoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, autoindentstyle: i32) callconv(.c) void `
    ///
    pub fn onSetAutoIndentStyle(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, i32) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setColor(self: QsciLexerTekHex, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerTekHex_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetColor` instead
    ///
    pub const SuperSetColor = superSetColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetColor(self: QsciLexerTekHex, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerTekHex_SuperSetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetColor` instead
    ///
    pub const OnSetColor = onSetColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetColor(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setEolFill` instead
    ///
    pub const SetEolFill = setEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn setEolFill(self: QsciLexerTekHex, eoffill: bool, style: i32) void {
        qtc.QsciLexerTekHex_SetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetEolFill` instead
    ///
    pub const SuperSetEolFill = superSetEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetEolFill(self: QsciLexerTekHex, eoffill: bool, style: i32) void {
        qtc.QsciLexerTekHex_SuperSetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetEolFill` instead
    ///
    pub const OnSetEolFill = onSetEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, eoffill: bool, style: i32) callconv(.c) void `
    ///
    pub fn onSetEolFill(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnSetEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn setFont(self: QsciLexerTekHex, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerTekHex_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetFont` instead
    ///
    pub const SuperSetFont = superSetFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetFont(self: QsciLexerTekHex, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerTekHex_SuperSetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetFont` instead
    ///
    pub const OnSetFont = onSetFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onSetFont(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QFont, i32) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnSetFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPaper` instead
    ///
    pub const SetPaper = setPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setPaper(self: QsciLexerTekHex, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerTekHex_SetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetPaper` instead
    ///
    pub const SuperSetPaper = superSetPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetPaper(self: QsciLexerTekHex, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerTekHex_SuperSetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetPaper` instead
    ///
    pub const OnSetPaper = onSetPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetPaper(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnSetPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readProperties` instead
    ///
    pub const ReadProperties = readProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn readProperties(self: QsciLexerTekHex, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerTekHex_ReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `superReadProperties` instead
    ///
    pub const SuperReadProperties = superReadProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superReadProperties(self: QsciLexerTekHex, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerTekHex_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onReadProperties` instead
    ///
    pub const OnReadProperties = onReadProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onReadProperties(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `writeProperties` instead
    ///
    pub const WriteProperties = writeProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn writeProperties(self: QsciLexerTekHex, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerTekHex_WriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `superWriteProperties` instead
    ///
    pub const SuperWriteProperties = superWriteProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superWriteProperties(self: QsciLexerTekHex, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerTekHex_SuperWriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onWriteProperties` instead
    ///
    pub const OnWriteProperties = onWriteProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onWriteProperties(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnWriteProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QsciLexerTekHex, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerTekHex_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QsciLexerTekHex, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerTekHex_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QsciLexerTekHex, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerTekHex_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QsciLexerTekHex, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerTekHex_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QsciLexerTekHex, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerTekHex_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QsciLexerTekHex, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerTekHex_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QTimerEvent) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QsciLexerTekHex, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerTekHex_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QsciLexerTekHex, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerTekHex_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QChildEvent) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QsciLexerTekHex, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerTekHex_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QsciLexerTekHex, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerTekHex_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QEvent) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QsciLexerTekHex, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerTekHex_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QsciLexerTekHex, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerTekHex_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QsciLexerTekHex, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerTekHex_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QsciLexerTekHex, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerTekHex_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerTekHex_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textAsBytes` instead
    ///
    pub const TextAsBytes = textAsBytes;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textAsBytes(self: QsciLexerTekHex, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerTekHex_TextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerTekHex.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superTextAsBytes` instead
    ///
    pub const SuperTextAsBytes = superTextAsBytes;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superTextAsBytes(self: QsciLexerTekHex, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerTekHex_SuperTextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerTekHex.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onTextAsBytes` instead
    ///
    pub const OnTextAsBytes = onTextAsBytes;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn onTextAsBytes(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciLexerTekHex_OnTextAsBytes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesAsText` instead
    ///
    pub const BytesAsText = bytesAsText;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn bytesAsText(self: QsciLexerTekHex, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerTekHex_BytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerTekHex.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superBytesAsText` instead
    ///
    pub const SuperBytesAsText = superBytesAsText;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerTekHex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn superBytesAsText(self: QsciLexerTekHex, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerTekHex_SuperBytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerTekHex.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onBytesAsText` instead
    ///
    pub const OnBytesAsText = onBytesAsText;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBytesAsText(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerTekHex_OnBytesAsText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn sender(self: QsciLexerTekHex) QObject {
        return .{ .ptr = qtc.QsciLexerTekHex_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superSender(self: QsciLexerTekHex) QObject {
        return .{ .ptr = qtc.QsciLexerTekHex_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QsciLexerTekHex, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciLexerTekHex_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn senderSignalIndex(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    pub fn superSenderSignalIndex(self: QsciLexerTekHex) i32 {
        return qtc.QsciLexerTekHex_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QsciLexerTekHex, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QsciLexerTekHex, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerTekHex_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QsciLexerTekHex, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerTekHex_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerTekHex_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QsciLexerTekHex, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerTekHex_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QsciLexerTekHex, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerTekHex_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerTekHex`
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciLexerTekHex_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerTekHex `
    ///
    /// ` callback: *const fn (self: QsciLexerTekHex, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QsciLexerTekHex, callback: *const fn (QsciLexerTekHex, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTekHex.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciLexerTekHex `
    ///
    pub fn delete(self: QsciLexerTekHex) void {
        qtc.QsciLexerTekHex_Delete(@ptrCast(self.ptr));
    }
};
