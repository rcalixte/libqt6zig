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

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
pub const QsciLexerXML = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciLexerXML,

    pub const _is_QsciLexerXML = {};
    pub const _is_QsciLexerHTML = {};
    pub const _is_QsciLexer = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciLexerXML object in C++ memory
    ///
    pub fn new() QsciLexerXML {
        return .{ .ptr = qtc.QsciLexerXML_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciLexerXML object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QsciLexerXML {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QsciLexerXML_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn metaObject(self: QsciLexerXML) QMetaObject {
        return .{ .ptr = qtc.QsciLexerXML_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QsciLexerXML, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciLexerXML_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superMetaObject(self: QsciLexerXML) QMetaObject {
        return .{ .ptr = qtc.QsciLexerXML_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QsciLexerXML, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerXML_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QsciLexerXML, callback: *const fn (QsciLexerXML, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciLexerXML_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QsciLexerXML, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerXML_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QsciLexerXML, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerXML_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerXML_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QsciLexerXML, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerXML_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn language(self: QsciLexerXML) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_Language(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `lexer` instead
    ///
    pub const Lexer = lexer;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn lexer(self: QsciLexerXML) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_Lexer(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `defaultColor` instead
    ///
    pub const DefaultColor = defaultColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_DefaultColor(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultEolFill` instead
    ///
    pub const DefaultEolFill = defaultEolFill;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultEolFill(self: QsciLexerXML, style: i32) bool {
        return qtc.QsciLexerXML_DefaultEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `defaultFont` instead
    ///
    pub const DefaultFont = defaultFont;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont(self: QsciLexerXML, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerXML_DefaultFont(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultPaper` instead
    ///
    pub const DefaultPaper = defaultPaper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_DefaultPaper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `keywords` instead
    ///
    pub const Keywords = keywords;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` set: i32 `
    ///
    pub fn keywords(self: QsciLexerXML, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_Keywords(@ptrCast(self.ptr), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `refreshProperties` instead
    ///
    pub const RefreshProperties = refreshProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn refreshProperties(self: QsciLexerXML) void {
        qtc.QsciLexerXML_RefreshProperties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScriptsStyled` instead
    ///
    pub const SetScriptsStyled = setScriptsStyled;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` styled: bool `
    ///
    pub fn setScriptsStyled(self: QsciLexerXML, styled: bool) void {
        qtc.QsciLexerXML_SetScriptsStyled(@ptrCast(self.ptr), styled);
    }

    /// ### DEPRECATED: Use `scriptsStyled` instead
    ///
    pub const ScriptsStyled = scriptsStyled;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn scriptsStyled(self: QsciLexerXML) bool {
        return qtc.QsciLexerXML_ScriptsStyled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readProperties` instead
    ///
    pub const ReadProperties = readProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn readProperties(self: QsciLexerXML, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerXML_ReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onReadProperties` instead
    ///
    pub const OnReadProperties = onReadProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onReadProperties(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerXML_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadProperties` instead
    ///
    pub const SuperReadProperties = superReadProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superReadProperties(self: QsciLexerXML, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerXML_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `writeProperties` instead
    ///
    pub const WriteProperties = writeProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn writeProperties(self: QsciLexerXML, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerXML_WriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onWriteProperties` instead
    ///
    pub const OnWriteProperties = onWriteProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onWriteProperties(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerXML_OnWriteProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteProperties` instead
    ///
    pub const SuperWriteProperties = superWriteProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superWriteProperties(self: QsciLexerXML, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerXML_SuperWriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `caseSensitiveTags` instead
    ///
    pub const CaseSensitiveTags = caseSensitiveTags;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn caseSensitiveTags(self: QsciLexerXML) bool {
        return qtc.QsciLexerHTML_CaseSensitiveTags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDjangoTemplates` instead
    ///
    pub const SetDjangoTemplates = setDjangoTemplates;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` enabled: bool `
    ///
    pub fn setDjangoTemplates(self: QsciLexerXML, enabled: bool) void {
        qtc.QsciLexerHTML_SetDjangoTemplates(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `djangoTemplates` instead
    ///
    pub const DjangoTemplates = djangoTemplates;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn djangoTemplates(self: QsciLexerXML) bool {
        return qtc.QsciLexerHTML_DjangoTemplates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldCompact` instead
    ///
    pub const FoldCompact = foldCompact;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn foldCompact(self: QsciLexerXML) bool {
        return qtc.QsciLexerHTML_FoldCompact(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldPreprocessor` instead
    ///
    pub const FoldPreprocessor = foldPreprocessor;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn foldPreprocessor(self: QsciLexerXML) bool {
        return qtc.QsciLexerHTML_FoldPreprocessor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFoldScriptComments` instead
    ///
    pub const SetFoldScriptComments = setFoldScriptComments;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldScriptComments(self: QsciLexerXML, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldScriptComments(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `foldScriptComments` instead
    ///
    pub const FoldScriptComments = foldScriptComments;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn foldScriptComments(self: QsciLexerXML) bool {
        return qtc.QsciLexerHTML_FoldScriptComments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFoldScriptHeredocs` instead
    ///
    pub const SetFoldScriptHeredocs = setFoldScriptHeredocs;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldScriptHeredocs(self: QsciLexerXML, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldScriptHeredocs(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `foldScriptHeredocs` instead
    ///
    pub const FoldScriptHeredocs = foldScriptHeredocs;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn foldScriptHeredocs(self: QsciLexerXML) bool {
        return qtc.QsciLexerHTML_FoldScriptHeredocs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMakoTemplates` instead
    ///
    pub const SetMakoTemplates = setMakoTemplates;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` enabled: bool `
    ///
    pub fn setMakoTemplates(self: QsciLexerXML, enabled: bool) void {
        qtc.QsciLexerHTML_SetMakoTemplates(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `makoTemplates` instead
    ///
    pub const MakoTemplates = makoTemplates;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn makoTemplates(self: QsciLexerXML) bool {
        return qtc.QsciLexerHTML_MakoTemplates(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn apis(self: QsciLexerXML) QsciAbstractAPIs {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn autoIndentStyle(self: QsciLexerXML) i32 {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn editor(self: QsciLexerXML) QsciScintilla {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _apis: QsciAbstractAPIs `
    ///
    pub fn setAPIs(self: QsciLexerXML, _apis: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultColor(self: QsciLexerXML, c: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` f: QFont `
    ///
    pub fn setDefaultFont(self: QsciLexerXML, f: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultPaper(self: QsciLexerXML, c: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    pub fn readSettings(self: QsciLexerXML, qs: anytype) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    pub fn writeSettings(self: QsciLexerXML, qs: anytype) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn colorChanged(self: QsciLexerXML, c: anytype, style: i32) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QColor, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` eolfilled: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFillChanged(self: QsciLexerXML, eolfilled: bool, style: i32) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, eolfilled: bool, style: i32) callconv(.c) void `
    ///
    pub fn onEolFillChanged(self: QsciLexerXML, callback: *const fn (QsciLexerXML, bool, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn fontChanged(self: QsciLexerXML, f: anytype, style: i32) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QFont, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn paperChanged(self: QsciLexerXML, c: anytype, style: i32) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onPaperChanged(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QColor, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` prop: [:0]const u8 `
    ///
    /// ` val: [:0]const u8 `
    ///
    pub fn propertyChanged(self: QsciLexerXML, prop: [:0]const u8, val: [:0]const u8) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPropertyChanged(self: QsciLexerXML, callback: *const fn (QsciLexerXML, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn readSettings2(self: QsciLexerXML, qs: anytype, prefix: [:0]const u8) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn writeSettings2(self: QsciLexerXML, qs: anytype, prefix: [:0]const u8) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QsciLexerXML, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.objectName: Memory allocation failed");
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
    /// ` self: QsciLexerXML `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QsciLexerXML, name: []const u8) void {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn isWidgetType(self: QsciLexerXML) bool {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn isWindowType(self: QsciLexerXML) bool {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn isQuickItemType(self: QsciLexerXML) bool {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn signalsBlocked(self: QsciLexerXML) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QsciLexerXML, b: bool) bool {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn thread(self: QsciLexerXML) QThread {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QsciLexerXML, _thread: anytype) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QsciLexerXML, interval: i32) i32 {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QsciLexerXML, time: i64) i32 {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QsciLexerXML, id: i32) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QsciLexerXML, id: i32) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QsciLexerXML, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QsciLexerXML.children: Memory allocation failed");
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QsciLexerXML, _parent: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QsciLexerXML, filterObj: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QsciLexerXML, obj: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QsciLexerXML, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn disconnect3(self: QsciLexerXML) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QsciLexerXML, receiver: anytype) bool {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn dumpObjectTree(self: QsciLexerXML) void {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn dumpObjectInfo(self: QsciLexerXML) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QsciLexerXML, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QsciLexerXML, name: [:0]const u8) QVariant {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QsciLexerXML, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QsciLexerXML.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerXML.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciLexerXML `
    ///
    pub fn bindingStorage(self: QsciLexerXML) QBindingStorage {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn bindingStorage2(self: QsciLexerXML) QBindingStorage {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn destroyed(self: QsciLexerXML) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QsciLexerXML, callback: *const fn (QsciLexerXML) callconv(.c) void) void {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn parent(self: QsciLexerXML) QObject {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QsciLexerXML, classname: [:0]const u8) bool {
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
    /// ` self: QsciLexerXML `
    ///
    pub fn deleteLater(self: QsciLexerXML) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QsciLexerXML, interval: i32, timerType: i32) i32 {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QsciLexerXML, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QsciLexerXML, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QsciLexerXML, signal: [:0]const u8) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QsciLexerXML, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QsciLexerXML, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QsciLexerXML, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QsciLexerXML, param1: anytype) void {
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFoldCompact` instead
    ///
    pub const SetFoldCompact = setFoldCompact;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldCompact(self: QsciLexerXML, fold: bool) void {
        qtc.QsciLexerXML_SetFoldCompact(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `superSetFoldCompact` instead
    ///
    pub const SuperSetFoldCompact = superSetFoldCompact;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldCompact(self: QsciLexerXML, fold: bool) void {
        qtc.QsciLexerXML_SuperSetFoldCompact(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldCompact` instead
    ///
    pub const OnSetFoldCompact = onSetFoldCompact;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldCompact(self: QsciLexerXML, callback: *const fn (QsciLexerXML, bool) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetFoldCompact(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFoldPreprocessor` instead
    ///
    pub const SetFoldPreprocessor = setFoldPreprocessor;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldPreprocessor(self: QsciLexerXML, fold: bool) void {
        qtc.QsciLexerXML_SetFoldPreprocessor(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `superSetFoldPreprocessor` instead
    ///
    pub const SuperSetFoldPreprocessor = superSetFoldPreprocessor;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldPreprocessor(self: QsciLexerXML, fold: bool) void {
        qtc.QsciLexerXML_SuperSetFoldPreprocessor(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldPreprocessor` instead
    ///
    pub const OnSetFoldPreprocessor = onSetFoldPreprocessor;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldPreprocessor(self: QsciLexerXML, callback: *const fn (QsciLexerXML, bool) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetFoldPreprocessor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCaseSensitiveTags` instead
    ///
    pub const SetCaseSensitiveTags = setCaseSensitiveTags;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` sens: bool `
    ///
    pub fn setCaseSensitiveTags(self: QsciLexerXML, sens: bool) void {
        qtc.QsciLexerXML_SetCaseSensitiveTags(@ptrCast(self.ptr), sens);
    }

    /// ### DEPRECATED: Use `superSetCaseSensitiveTags` instead
    ///
    pub const SuperSetCaseSensitiveTags = superSetCaseSensitiveTags;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` sens: bool `
    ///
    pub fn superSetCaseSensitiveTags(self: QsciLexerXML, sens: bool) void {
        qtc.QsciLexerXML_SuperSetCaseSensitiveTags(@ptrCast(self.ptr), sens);
    }

    /// ### DEPRECATED: Use `onSetCaseSensitiveTags` instead
    ///
    pub const OnSetCaseSensitiveTags = onSetCaseSensitiveTags;

    /// Inherited from QsciLexerHTML
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, sens: bool) callconv(.c) void `
    ///
    pub fn onSetCaseSensitiveTags(self: QsciLexerXML, callback: *const fn (QsciLexerXML, bool) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetCaseSensitiveTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn lexerId(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_LexerId(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superLexerId(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SuperLexerId(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLexerId(self: QsciLexerXML, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerXML_OnLexerId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn autoCompletionFillups(self: QsciLexerXML) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_AutoCompletionFillups(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superAutoCompletionFillups(self: QsciLexerXML) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_SuperAutoCompletionFillups(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onAutoCompletionFillups(self: QsciLexerXML, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerXML_OnAutoCompletionFillups(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autoCompletionWordSeparators(self: QsciLexerXML, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerXML_AutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerXML.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerXML.autoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superAutoCompletionWordSeparators(self: QsciLexerXML, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerXML_SuperAutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerXML.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerXML.autoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onAutoCompletionWordSeparators(self: QsciLexerXML, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciLexerXML_OnAutoCompletionWordSeparators(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockEnd(self: QsciLexerXML, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_BlockEnd(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockEnd(self: QsciLexerXML, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_SuperBlockEnd(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockEnd(self: QsciLexerXML, callback: *const fn (QsciLexerXML, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerXML_OnBlockEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn blockLookback(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_BlockLookback(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superBlockLookback(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SuperBlockLookback(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBlockLookback(self: QsciLexerXML, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerXML_OnBlockLookback(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStart(self: QsciLexerXML, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_BlockStart(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStart(self: QsciLexerXML, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_SuperBlockStart(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStart(self: QsciLexerXML, callback: *const fn (QsciLexerXML, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerXML_OnBlockStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStartKeyword(self: QsciLexerXML, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_BlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStartKeyword(self: QsciLexerXML, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_SuperBlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStartKeyword(self: QsciLexerXML, callback: *const fn (QsciLexerXML, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerXML_OnBlockStartKeyword(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn braceStyle(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_BraceStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superBraceStyle(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SuperBraceStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBraceStyle(self: QsciLexerXML, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerXML_OnBraceStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn caseSensitive(self: QsciLexerXML) bool {
        return qtc.QsciLexerXML_CaseSensitive(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superCaseSensitive(self: QsciLexerXML) bool {
        return qtc.QsciLexerXML_SuperCaseSensitive(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCaseSensitive(self: QsciLexerXML, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerXML_OnCaseSensitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn color(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_Color(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn superColor(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_SuperColor(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onColor(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) QColor) void {
        qtc.QsciLexerXML_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFill(self: QsciLexerXML, style: i32) bool {
        return qtc.QsciLexerXML_EolFill(@ptrCast(self.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn superEolFill(self: QsciLexerXML, style: i32) bool {
        return qtc.QsciLexerXML_SuperEolFill(@ptrCast(self.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) bool `
    ///
    pub fn onEolFill(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) bool) void {
        qtc.QsciLexerXML_OnEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn font(self: QsciLexerXML, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerXML_Font(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn superFont(self: QsciLexerXML, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerXML_SuperFont(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFont(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) QFont) void {
        qtc.QsciLexerXML_OnFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn indentationGuideView(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_IndentationGuideView(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superIndentationGuideView(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SuperIndentationGuideView(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onIndentationGuideView(self: QsciLexerXML, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerXML_OnIndentationGuideView(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn defaultStyle(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_DefaultStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superDefaultStyle(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SuperDefaultStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDefaultStyle(self: QsciLexerXML, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerXML_OnDefaultStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` style: i32 `
    ///
    pub fn description(self: QsciLexerXML, allocator: std.mem.Allocator, style: i32) []const u8 {
        var _str = qtc.QsciLexerXML_Description(@ptrCast(self.ptr), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superDescription` instead
    ///
    pub const SuperDescription = superDescription;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` style: i32 `
    ///
    pub fn superDescription(self: QsciLexerXML, allocator: std.mem.Allocator, style: i32) []const u8 {
        var _str = qtc.QsciLexerXML_SuperDescription(@ptrCast(self.ptr), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onDescription` instead
    ///
    pub const OnDescription = onDescription;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onDescription(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerXML_OnDescription(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn paper(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_Paper(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn superPaper(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_SuperPaper(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPaper(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) QColor) void {
        qtc.QsciLexerXML_OnPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor2(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_DefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultColor2(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_SuperDefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultColor2(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) QColor) void {
        qtc.QsciLexerXML_OnDefaultColor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont2(self: QsciLexerXML, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerXML_DefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultFont2(self: QsciLexerXML, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerXML_SuperDefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultFont2(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) QFont) void {
        qtc.QsciLexerXML_OnDefaultFont2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper2(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_DefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultPaper2(self: QsciLexerXML, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerXML_SuperDefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultPaper2(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) QColor) void {
        qtc.QsciLexerXML_OnDefaultPaper2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn setEditor(self: QsciLexerXML, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerXML_SetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn superSetEditor(self: QsciLexerXML, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerXML_SuperSetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, editor: QsciScintilla) callconv(.c) void `
    ///
    pub fn onSetEditor(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QsciScintilla) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn styleBitsNeeded(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_StyleBitsNeeded(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superStyleBitsNeeded(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SuperStyleBitsNeeded(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onStyleBitsNeeded(self: QsciLexerXML, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerXML_OnStyleBitsNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn wordCharacters(self: QsciLexerXML) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_WordCharacters(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superWordCharacters(self: QsciLexerXML) [:0]const u8 {
        const _ret = qtc.QsciLexerXML_SuperWordCharacters(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onWordCharacters(self: QsciLexerXML, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerXML_OnWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn setAutoIndentStyle(self: QsciLexerXML, autoindentstyle: i32) void {
        qtc.QsciLexerXML_SetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn superSetAutoIndentStyle(self: QsciLexerXML, autoindentstyle: i32) void {
        qtc.QsciLexerXML_SuperSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, autoindentstyle: i32) callconv(.c) void `
    ///
    pub fn onSetAutoIndentStyle(self: QsciLexerXML, callback: *const fn (QsciLexerXML, i32) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setColor(self: QsciLexerXML, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerXML_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetColor(self: QsciLexerXML, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerXML_SuperSetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetColor(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn setEolFill(self: QsciLexerXML, eoffill: bool, style: i32) void {
        qtc.QsciLexerXML_SetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetEolFill(self: QsciLexerXML, eoffill: bool, style: i32) void {
        qtc.QsciLexerXML_SuperSetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, eoffill: bool, style: i32) callconv(.c) void `
    ///
    pub fn onSetEolFill(self: QsciLexerXML, callback: *const fn (QsciLexerXML, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn setFont(self: QsciLexerXML, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerXML_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetFont(self: QsciLexerXML, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerXML_SuperSetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onSetFont(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QFont, i32) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setPaper(self: QsciLexerXML, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerXML_SetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetPaper(self: QsciLexerXML, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerXML_SuperSetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetPaper(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerXML_OnSetPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QsciLexerXML, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerXML_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QsciLexerXML, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerXML_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerXML_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QsciLexerXML, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerXML_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QsciLexerXML, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerXML_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerXML_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QsciLexerXML, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerXML_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QsciLexerXML, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerXML_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QTimerEvent) callconv(.c) void) void {
        qtc.QsciLexerXML_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QsciLexerXML, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerXML_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QsciLexerXML, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerXML_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QChildEvent) callconv(.c) void) void {
        qtc.QsciLexerXML_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QsciLexerXML, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerXML_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QsciLexerXML, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerXML_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QEvent) callconv(.c) void) void {
        qtc.QsciLexerXML_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QsciLexerXML, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerXML_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QsciLexerXML, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerXML_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerXML_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QsciLexerXML, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerXML_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QsciLexerXML, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerXML_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerXML_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textAsBytes(self: QsciLexerXML, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerXML_TextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerXML.textAsBytes: Memory allocation failed");
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superTextAsBytes(self: QsciLexerXML, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerXML_SuperTextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerXML.textAsBytes: Memory allocation failed");
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn onTextAsBytes(self: QsciLexerXML, callback: *const fn (QsciLexerXML, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciLexerXML_OnTextAsBytes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn bytesAsText(self: QsciLexerXML, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerXML_BytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.bytesAsText: Memory allocation failed");
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
    /// ` self: QsciLexerXML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn superBytesAsText(self: QsciLexerXML, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerXML_SuperBytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerXML.bytesAsText: Memory allocation failed");
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBytesAsText(self: QsciLexerXML, callback: *const fn (QsciLexerXML, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerXML_OnBytesAsText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn sender(self: QsciLexerXML) QObject {
        return .{ .ptr = qtc.QsciLexerXML_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superSender(self: QsciLexerXML) QObject {
        return .{ .ptr = qtc.QsciLexerXML_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QsciLexerXML, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciLexerXML_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn senderSignalIndex(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    pub fn superSenderSignalIndex(self: QsciLexerXML) i32 {
        return qtc.QsciLexerXML_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QsciLexerXML, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerXML_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QsciLexerXML, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerXML_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QsciLexerXML, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerXML_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QsciLexerXML, callback: *const fn (QsciLexerXML, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerXML_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QsciLexerXML, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerXML_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QsciLexerXML, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerXML_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerXML`
    ///
    /// ` callback: *const fn (self: QsciLexerXML, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QsciLexerXML, callback: *const fn (QsciLexerXML, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciLexerXML_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerXML `
    ///
    /// ` callback: *const fn (self: QsciLexerXML, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QsciLexerXML, callback: *const fn (QsciLexerXML, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciLexerXML `
    ///
    pub fn delete(self: QsciLexerXML) void {
        qtc.QsciLexerXML_Delete(@ptrCast(self.ptr));
    }
};
