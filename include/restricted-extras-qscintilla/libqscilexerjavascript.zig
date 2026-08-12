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

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
pub const QsciLexerJavaScript = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciLexerJavaScript,

    pub const _is_QsciLexerJavaScript = {};
    pub const _is_QsciLexerCPP = {};
    pub const _is_QsciLexer = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciLexerJavaScript object in C++ memory
    ///
    pub fn new() QsciLexerJavaScript {
        return .{ .ptr = qtc.QsciLexerJavaScript_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciLexerJavaScript object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QsciLexerJavaScript {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QsciLexerJavaScript_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn metaObject(self: QsciLexerJavaScript) QMetaObject {
        return .{ .ptr = qtc.QsciLexerJavaScript_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciLexerJavaScript_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superMetaObject(self: QsciLexerJavaScript) QMetaObject {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QsciLexerJavaScript, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerJavaScript_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciLexerJavaScript_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QsciLexerJavaScript, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerJavaScript_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QsciLexerJavaScript, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerJavaScript_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QsciLexerJavaScript, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerJavaScript_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerJavaScript.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn language(self: QsciLexerJavaScript) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_Language(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `defaultColor` instead
    ///
    pub const DefaultColor = defaultColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_DefaultColor(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultEolFill` instead
    ///
    pub const DefaultEolFill = defaultEolFill;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultEolFill(self: QsciLexerJavaScript, style: i32) bool {
        return qtc.QsciLexerJavaScript_DefaultEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `defaultFont` instead
    ///
    pub const DefaultFont = defaultFont;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont(self: QsciLexerJavaScript, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerJavaScript_DefaultFont(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultPaper` instead
    ///
    pub const DefaultPaper = defaultPaper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_DefaultPaper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `keywords` instead
    ///
    pub const Keywords = keywords;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` set: i32 `
    ///
    pub fn keywords(self: QsciLexerJavaScript, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_Keywords(@ptrCast(self.ptr), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` style: i32 `
    ///
    pub fn description(self: QsciLexerJavaScript, allocator: std.mem.Allocator, style: i32) []const u8 {
        var _str = qtc.QsciLexerJavaScript_Description(@ptrCast(self.ptr), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerJavaScript.description: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerJavaScript.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerJavaScript.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `foldAtElse` instead
    ///
    pub const FoldAtElse = foldAtElse;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn foldAtElse(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_FoldAtElse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldComments` instead
    ///
    pub const FoldComments = foldComments;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn foldComments(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_FoldComments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldCompact` instead
    ///
    pub const FoldCompact = foldCompact;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn foldCompact(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_FoldCompact(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldPreprocessor` instead
    ///
    pub const FoldPreprocessor = foldPreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn foldPreprocessor(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_FoldPreprocessor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stylePreprocessor` instead
    ///
    pub const StylePreprocessor = stylePreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn stylePreprocessor(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_StylePreprocessor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDollarsAllowed` instead
    ///
    pub const SetDollarsAllowed = setDollarsAllowed;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allowed: bool `
    ///
    pub fn setDollarsAllowed(self: QsciLexerJavaScript, allowed: bool) void {
        qtc.QsciLexerCPP_SetDollarsAllowed(@ptrCast(self.ptr), allowed);
    }

    /// ### DEPRECATED: Use `dollarsAllowed` instead
    ///
    pub const DollarsAllowed = dollarsAllowed;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn dollarsAllowed(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_DollarsAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightTripleQuotedStrings` instead
    ///
    pub const SetHighlightTripleQuotedStrings = setHighlightTripleQuotedStrings;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHighlightTripleQuotedStrings(self: QsciLexerJavaScript, enabled: bool) void {
        qtc.QsciLexerCPP_SetHighlightTripleQuotedStrings(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `highlightTripleQuotedStrings` instead
    ///
    pub const HighlightTripleQuotedStrings = highlightTripleQuotedStrings;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn highlightTripleQuotedStrings(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_HighlightTripleQuotedStrings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightHashQuotedStrings` instead
    ///
    pub const SetHighlightHashQuotedStrings = setHighlightHashQuotedStrings;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHighlightHashQuotedStrings(self: QsciLexerJavaScript, enabled: bool) void {
        qtc.QsciLexerCPP_SetHighlightHashQuotedStrings(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `highlightHashQuotedStrings` instead
    ///
    pub const HighlightHashQuotedStrings = highlightHashQuotedStrings;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn highlightHashQuotedStrings(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_HighlightHashQuotedStrings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightBackQuotedStrings` instead
    ///
    pub const SetHighlightBackQuotedStrings = setHighlightBackQuotedStrings;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHighlightBackQuotedStrings(self: QsciLexerJavaScript, enabled: bool) void {
        qtc.QsciLexerCPP_SetHighlightBackQuotedStrings(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `highlightBackQuotedStrings` instead
    ///
    pub const HighlightBackQuotedStrings = highlightBackQuotedStrings;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn highlightBackQuotedStrings(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_HighlightBackQuotedStrings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightEscapeSequences` instead
    ///
    pub const SetHighlightEscapeSequences = setHighlightEscapeSequences;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHighlightEscapeSequences(self: QsciLexerJavaScript, enabled: bool) void {
        qtc.QsciLexerCPP_SetHighlightEscapeSequences(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `highlightEscapeSequences` instead
    ///
    pub const HighlightEscapeSequences = highlightEscapeSequences;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn highlightEscapeSequences(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_HighlightEscapeSequences(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerbatimStringEscapeSequencesAllowed` instead
    ///
    pub const SetVerbatimStringEscapeSequencesAllowed = setVerbatimStringEscapeSequencesAllowed;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allowed: bool `
    ///
    pub fn setVerbatimStringEscapeSequencesAllowed(self: QsciLexerJavaScript, allowed: bool) void {
        qtc.QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(@ptrCast(self.ptr), allowed);
    }

    /// ### DEPRECATED: Use `verbatimStringEscapeSequencesAllowed` instead
    ///
    pub const VerbatimStringEscapeSequencesAllowed = verbatimStringEscapeSequencesAllowed;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn verbatimStringEscapeSequencesAllowed(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockEnd1` instead
    ///
    pub const BlockEnd1 = blockEnd1;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockEnd1(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCPP_BlockEnd1(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `blockStart1` instead
    ///
    pub const BlockStart1 = blockStart1;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStart1(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCPP_BlockStart1(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `blockStartKeyword1` instead
    ///
    pub const BlockStartKeyword1 = blockStartKeyword1;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStartKeyword1(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCPP_BlockStartKeyword1(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn apis(self: QsciLexerJavaScript) QsciAbstractAPIs {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn autoIndentStyle(self: QsciLexerJavaScript) i32 {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn editor(self: QsciLexerJavaScript) QsciScintilla {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _apis: QsciAbstractAPIs `
    ///
    pub fn setAPIs(self: QsciLexerJavaScript, _apis: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultColor(self: QsciLexerJavaScript, c: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` f: QFont `
    ///
    pub fn setDefaultFont(self: QsciLexerJavaScript, f: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultPaper(self: QsciLexerJavaScript, c: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    pub fn readSettings(self: QsciLexerJavaScript, qs: anytype) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    pub fn writeSettings(self: QsciLexerJavaScript, qs: anytype) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn colorChanged(self: QsciLexerJavaScript, c: anytype, style: i32) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QColor, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` eolfilled: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFillChanged(self: QsciLexerJavaScript, eolfilled: bool, style: i32) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, eolfilled: bool, style: i32) callconv(.c) void `
    ///
    pub fn onEolFillChanged(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, bool, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn fontChanged(self: QsciLexerJavaScript, f: anytype, style: i32) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QFont, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn paperChanged(self: QsciLexerJavaScript, c: anytype, style: i32) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onPaperChanged(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QColor, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` prop: [:0]const u8 `
    ///
    /// ` val: [:0]const u8 `
    ///
    pub fn propertyChanged(self: QsciLexerJavaScript, prop: [:0]const u8, val: [:0]const u8) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPropertyChanged(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn readSettings2(self: QsciLexerJavaScript, qs: anytype, prefix: [:0]const u8) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn writeSettings2(self: QsciLexerJavaScript, qs: anytype, prefix: [:0]const u8) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QsciLexerJavaScript, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerJavaScript.objectName: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QsciLexerJavaScript, name: []const u8) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn isWidgetType(self: QsciLexerJavaScript) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn isWindowType(self: QsciLexerJavaScript) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn isQuickItemType(self: QsciLexerJavaScript) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn signalsBlocked(self: QsciLexerJavaScript) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QsciLexerJavaScript, b: bool) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn thread(self: QsciLexerJavaScript) QThread {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QsciLexerJavaScript, _thread: anytype) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QsciLexerJavaScript, interval: i32) i32 {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QsciLexerJavaScript, time: i64) i32 {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QsciLexerJavaScript, id: i32) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QsciLexerJavaScript, id: i32) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QsciLexerJavaScript, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QsciLexerJavaScript.children: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QsciLexerJavaScript, _parent: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QsciLexerJavaScript, filterObj: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QsciLexerJavaScript, obj: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QsciLexerJavaScript, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn disconnect3(self: QsciLexerJavaScript) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QsciLexerJavaScript, receiver: anytype) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn dumpObjectTree(self: QsciLexerJavaScript) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn dumpObjectInfo(self: QsciLexerJavaScript) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QsciLexerJavaScript, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QsciLexerJavaScript, name: [:0]const u8) QVariant {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QsciLexerJavaScript, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QsciLexerJavaScript.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerJavaScript.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn bindingStorage(self: QsciLexerJavaScript) QBindingStorage {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn bindingStorage2(self: QsciLexerJavaScript) QBindingStorage {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn destroyed(self: QsciLexerJavaScript) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript) callconv(.c) void) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn parent(self: QsciLexerJavaScript) QObject {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QsciLexerJavaScript, classname: [:0]const u8) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn deleteLater(self: QsciLexerJavaScript) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QsciLexerJavaScript, interval: i32, timerType: i32) i32 {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QsciLexerJavaScript, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QsciLexerJavaScript, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QsciLexerJavaScript, signal: [:0]const u8) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QsciLexerJavaScript, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QsciLexerJavaScript, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QsciLexerJavaScript, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QsciLexerJavaScript, param1: anytype) void {
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFoldAtElse` instead
    ///
    pub const SetFoldAtElse = setFoldAtElse;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldAtElse(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SetFoldAtElse(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `superSetFoldAtElse` instead
    ///
    pub const SuperSetFoldAtElse = superSetFoldAtElse;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldAtElse(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SuperSetFoldAtElse(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldAtElse` instead
    ///
    pub const OnSetFoldAtElse = onSetFoldAtElse;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldAtElse(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, bool) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetFoldAtElse(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFoldComments` instead
    ///
    pub const SetFoldComments = setFoldComments;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldComments(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SetFoldComments(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `superSetFoldComments` instead
    ///
    pub const SuperSetFoldComments = superSetFoldComments;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldComments(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SuperSetFoldComments(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldComments` instead
    ///
    pub const OnSetFoldComments = onSetFoldComments;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldComments(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, bool) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetFoldComments(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFoldCompact` instead
    ///
    pub const SetFoldCompact = setFoldCompact;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldCompact(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SetFoldCompact(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `superSetFoldCompact` instead
    ///
    pub const SuperSetFoldCompact = superSetFoldCompact;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldCompact(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SuperSetFoldCompact(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldCompact` instead
    ///
    pub const OnSetFoldCompact = onSetFoldCompact;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldCompact(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, bool) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetFoldCompact(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFoldPreprocessor` instead
    ///
    pub const SetFoldPreprocessor = setFoldPreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldPreprocessor(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SetFoldPreprocessor(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `superSetFoldPreprocessor` instead
    ///
    pub const SuperSetFoldPreprocessor = superSetFoldPreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldPreprocessor(self: QsciLexerJavaScript, fold: bool) void {
        qtc.QsciLexerJavaScript_SuperSetFoldPreprocessor(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldPreprocessor` instead
    ///
    pub const OnSetFoldPreprocessor = onSetFoldPreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldPreprocessor(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, bool) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetFoldPreprocessor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setStylePreprocessor` instead
    ///
    pub const SetStylePreprocessor = setStylePreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: bool `
    ///
    pub fn setStylePreprocessor(self: QsciLexerJavaScript, style: bool) void {
        qtc.QsciLexerJavaScript_SetStylePreprocessor(@ptrCast(self.ptr), style);
    }

    /// ### DEPRECATED: Use `superSetStylePreprocessor` instead
    ///
    pub const SuperSetStylePreprocessor = superSetStylePreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: bool `
    ///
    pub fn superSetStylePreprocessor(self: QsciLexerJavaScript, style: bool) void {
        qtc.QsciLexerJavaScript_SuperSetStylePreprocessor(@ptrCast(self.ptr), style);
    }

    /// ### DEPRECATED: Use `onSetStylePreprocessor` instead
    ///
    pub const OnSetStylePreprocessor = onSetStylePreprocessor;

    /// Inherited from QsciLexerCPP
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: bool) callconv(.c) void `
    ///
    pub fn onSetStylePreprocessor(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, bool) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetStylePreprocessor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lexer` instead
    ///
    pub const Lexer = lexer;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn lexer(self: QsciLexerJavaScript) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_Lexer(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superLexer` instead
    ///
    pub const SuperLexer = superLexer;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superLexer(self: QsciLexerJavaScript) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_SuperLexer(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onLexer` instead
    ///
    pub const OnLexer = onLexer;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLexer(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnLexer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn lexerId(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_LexerId(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superLexerId(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SuperLexerId(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLexerId(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnLexerId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn autoCompletionFillups(self: QsciLexerJavaScript) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_AutoCompletionFillups(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superAutoCompletionFillups(self: QsciLexerJavaScript) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_SuperAutoCompletionFillups(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onAutoCompletionFillups(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnAutoCompletionFillups(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autoCompletionWordSeparators(self: QsciLexerJavaScript, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerJavaScript_AutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerJavaScript.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerJavaScript.autoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superAutoCompletionWordSeparators(self: QsciLexerJavaScript, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerJavaScript_SuperAutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerJavaScript.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerJavaScript.autoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onAutoCompletionWordSeparators(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnAutoCompletionWordSeparators(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockEnd(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_BlockEnd(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockEnd(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_SuperBlockEnd(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockEnd(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnBlockEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn blockLookback(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_BlockLookback(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superBlockLookback(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SuperBlockLookback(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBlockLookback(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnBlockLookback(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStart(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_BlockStart(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStart(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_SuperBlockStart(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStart(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnBlockStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStartKeyword(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_BlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStartKeyword(self: QsciLexerJavaScript, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_SuperBlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStartKeyword(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnBlockStartKeyword(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn braceStyle(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_BraceStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superBraceStyle(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SuperBraceStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBraceStyle(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnBraceStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn caseSensitive(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerJavaScript_CaseSensitive(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superCaseSensitive(self: QsciLexerJavaScript) bool {
        return qtc.QsciLexerJavaScript_SuperCaseSensitive(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCaseSensitive(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerJavaScript_OnCaseSensitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn color(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_Color(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn superColor(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperColor(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onColor(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) QColor) void {
        qtc.QsciLexerJavaScript_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFill(self: QsciLexerJavaScript, style: i32) bool {
        return qtc.QsciLexerJavaScript_EolFill(@ptrCast(self.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn superEolFill(self: QsciLexerJavaScript, style: i32) bool {
        return qtc.QsciLexerJavaScript_SuperEolFill(@ptrCast(self.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: i32) callconv(.c) bool `
    ///
    pub fn onEolFill(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) bool) void {
        qtc.QsciLexerJavaScript_OnEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn font(self: QsciLexerJavaScript, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerJavaScript_Font(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn superFont(self: QsciLexerJavaScript, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperFont(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFont(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) QFont) void {
        qtc.QsciLexerJavaScript_OnFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn indentationGuideView(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_IndentationGuideView(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superIndentationGuideView(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SuperIndentationGuideView(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onIndentationGuideView(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnIndentationGuideView(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn defaultStyle(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_DefaultStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superDefaultStyle(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SuperDefaultStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDefaultStyle(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnDefaultStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn paper(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_Paper(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn superPaper(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperPaper(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPaper(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) QColor) void {
        qtc.QsciLexerJavaScript_OnPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor2(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_DefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultColor2(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperDefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultColor2(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) QColor) void {
        qtc.QsciLexerJavaScript_OnDefaultColor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont2(self: QsciLexerJavaScript, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerJavaScript_DefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultFont2(self: QsciLexerJavaScript, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperDefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultFont2(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) QFont) void {
        qtc.QsciLexerJavaScript_OnDefaultFont2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper2(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_DefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultPaper2(self: QsciLexerJavaScript, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperDefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultPaper2(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) QColor) void {
        qtc.QsciLexerJavaScript_OnDefaultPaper2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn setEditor(self: QsciLexerJavaScript, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerJavaScript_SetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn superSetEditor(self: QsciLexerJavaScript, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerJavaScript_SuperSetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, editor: QsciScintilla) callconv(.c) void `
    ///
    pub fn onSetEditor(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QsciScintilla) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn refreshProperties(self: QsciLexerJavaScript) void {
        qtc.QsciLexerJavaScript_RefreshProperties(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superRefreshProperties(self: QsciLexerJavaScript) void {
        qtc.QsciLexerJavaScript_SuperRefreshProperties(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRefreshProperties(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnRefreshProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn styleBitsNeeded(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_StyleBitsNeeded(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superStyleBitsNeeded(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SuperStyleBitsNeeded(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onStyleBitsNeeded(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnStyleBitsNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn wordCharacters(self: QsciLexerJavaScript) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_WordCharacters(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superWordCharacters(self: QsciLexerJavaScript) [:0]const u8 {
        const _ret = qtc.QsciLexerJavaScript_SuperWordCharacters(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onWordCharacters(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn setAutoIndentStyle(self: QsciLexerJavaScript, autoindentstyle: i32) void {
        qtc.QsciLexerJavaScript_SetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn superSetAutoIndentStyle(self: QsciLexerJavaScript, autoindentstyle: i32) void {
        qtc.QsciLexerJavaScript_SuperSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, autoindentstyle: i32) callconv(.c) void `
    ///
    pub fn onSetAutoIndentStyle(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, i32) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setColor(self: QsciLexerJavaScript, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerJavaScript_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetColor(self: QsciLexerJavaScript, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerJavaScript_SuperSetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetColor(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn setEolFill(self: QsciLexerJavaScript, eoffill: bool, style: i32) void {
        qtc.QsciLexerJavaScript_SetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetEolFill(self: QsciLexerJavaScript, eoffill: bool, style: i32) void {
        qtc.QsciLexerJavaScript_SuperSetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, eoffill: bool, style: i32) callconv(.c) void `
    ///
    pub fn onSetEolFill(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn setFont(self: QsciLexerJavaScript, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerJavaScript_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetFont(self: QsciLexerJavaScript, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerJavaScript_SuperSetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onSetFont(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QFont, i32) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setPaper(self: QsciLexerJavaScript, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerJavaScript_SetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetPaper(self: QsciLexerJavaScript, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerJavaScript_SuperSetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetPaper(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnSetPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn readProperties(self: QsciLexerJavaScript, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerJavaScript_ReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superReadProperties(self: QsciLexerJavaScript, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerJavaScript_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onReadProperties(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerJavaScript_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn writeProperties(self: QsciLexerJavaScript, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerJavaScript_WriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superWriteProperties(self: QsciLexerJavaScript, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerJavaScript_SuperWriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onWriteProperties(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerJavaScript_OnWriteProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QsciLexerJavaScript, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerJavaScript_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QsciLexerJavaScript, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerJavaScript_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerJavaScript_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QsciLexerJavaScript, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerJavaScript_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QsciLexerJavaScript, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerJavaScript_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerJavaScript_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QsciLexerJavaScript, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerJavaScript_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QsciLexerJavaScript, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerJavaScript_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QTimerEvent) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QsciLexerJavaScript, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerJavaScript_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QsciLexerJavaScript, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerJavaScript_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QChildEvent) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QsciLexerJavaScript, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerJavaScript_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QsciLexerJavaScript, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerJavaScript_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QEvent) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QsciLexerJavaScript, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerJavaScript_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QsciLexerJavaScript, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerJavaScript_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QsciLexerJavaScript, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerJavaScript_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QsciLexerJavaScript, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerJavaScript_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerJavaScript_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textAsBytes(self: QsciLexerJavaScript, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerJavaScript_TextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerJavaScript.textAsBytes: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superTextAsBytes(self: QsciLexerJavaScript, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerJavaScript_SuperTextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerJavaScript.textAsBytes: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn onTextAsBytes(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciLexerJavaScript_OnTextAsBytes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn bytesAsText(self: QsciLexerJavaScript, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerJavaScript_BytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerJavaScript.bytesAsText: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn superBytesAsText(self: QsciLexerJavaScript, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerJavaScript_SuperBytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerJavaScript.bytesAsText: Memory allocation failed");
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBytesAsText(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerJavaScript_OnBytesAsText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn sender(self: QsciLexerJavaScript) QObject {
        return .{ .ptr = qtc.QsciLexerJavaScript_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superSender(self: QsciLexerJavaScript) QObject {
        return .{ .ptr = qtc.QsciLexerJavaScript_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciLexerJavaScript_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn senderSignalIndex(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn superSenderSignalIndex(self: QsciLexerJavaScript) i32 {
        return qtc.QsciLexerJavaScript_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QsciLexerJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QsciLexerJavaScript, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerJavaScript_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QsciLexerJavaScript, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerJavaScript_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerJavaScript_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QsciLexerJavaScript, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerJavaScript_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QsciLexerJavaScript, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerJavaScript_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerJavaScript`
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciLexerJavaScript_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerJavaScript `
    ///
    /// ` callback: *const fn (self: QsciLexerJavaScript, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QsciLexerJavaScript, callback: *const fn (QsciLexerJavaScript, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciLexerJavaScript `
    ///
    pub fn delete(self: QsciLexerJavaScript) void {
        qtc.QsciLexerJavaScript_Delete(@ptrCast(self.ptr));
    }
};
