const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscilexerjava.html
pub const qscilexerjava = struct {
    /// New constructs a new QsciLexerJava object.
    ///
    ///
    pub fn New() ?*C.QsciLexerJava {
        return C.QsciLexerJava_new();
    }

    /// New2 constructs a new QsciLexerJava object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QsciLexerJava {
        return C.QsciLexerJava_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QsciLexerJava_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciLexerJava, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QsciLexerJava_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QsciLexerJava, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciLexerJava_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QsciLexerJava_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerJava, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QsciLexerJava_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjava.html#language)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Language(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_Language(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjava.html#keywords)
    ///
    /// ``` self: ?*C.QsciLexerJava, set: i32 ```
    pub fn Keywords(self: ?*anyopaque, set: i32) []const u8 {
        const _ret = C.QsciLexerJava_Keywords(@ptrCast(self), @intCast(set));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QsciLexerJava_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QsciLexerJava_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultColor)
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn DefaultColor(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerCPP_DefaultColor(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultFont)
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn DefaultFont(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerCPP_DefaultFont(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultPaper)
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn DefaultPaper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerCPP_DefaultPaper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldAtElse)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn FoldAtElse(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_FoldAtElse(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldComments)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn FoldComments(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_FoldComments(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldCompact)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn FoldCompact(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_FoldCompact(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldPreprocessor)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn FoldPreprocessor(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_FoldPreprocessor(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#stylePreprocessor)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn StylePreprocessor(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_StylePreprocessor(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setDollarsAllowed)
    ///
    /// ``` self: ?*C.QsciLexerJava, allowed: bool ```
    pub fn SetDollarsAllowed(self: ?*anyopaque, allowed: bool) void {
        C.QsciLexerCPP_SetDollarsAllowed(@ptrCast(self), allowed);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#dollarsAllowed)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn DollarsAllowed(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_DollarsAllowed(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightTripleQuotedStrings)
    ///
    /// ``` self: ?*C.QsciLexerJava, enabled: bool ```
    pub fn SetHighlightTripleQuotedStrings(self: ?*anyopaque, enabled: bool) void {
        C.QsciLexerCPP_SetHighlightTripleQuotedStrings(@ptrCast(self), enabled);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightTripleQuotedStrings)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn HighlightTripleQuotedStrings(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_HighlightTripleQuotedStrings(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightHashQuotedStrings)
    ///
    /// ``` self: ?*C.QsciLexerJava, enabled: bool ```
    pub fn SetHighlightHashQuotedStrings(self: ?*anyopaque, enabled: bool) void {
        C.QsciLexerCPP_SetHighlightHashQuotedStrings(@ptrCast(self), enabled);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightHashQuotedStrings)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn HighlightHashQuotedStrings(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_HighlightHashQuotedStrings(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightBackQuotedStrings)
    ///
    /// ``` self: ?*C.QsciLexerJava, enabled: bool ```
    pub fn SetHighlightBackQuotedStrings(self: ?*anyopaque, enabled: bool) void {
        C.QsciLexerCPP_SetHighlightBackQuotedStrings(@ptrCast(self), enabled);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightBackQuotedStrings)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn HighlightBackQuotedStrings(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_HighlightBackQuotedStrings(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightEscapeSequences)
    ///
    /// ``` self: ?*C.QsciLexerJava, enabled: bool ```
    pub fn SetHighlightEscapeSequences(self: ?*anyopaque, enabled: bool) void {
        C.QsciLexerCPP_SetHighlightEscapeSequences(@ptrCast(self), enabled);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightEscapeSequences)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn HighlightEscapeSequences(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_HighlightEscapeSequences(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setVerbatimStringEscapeSequencesAllowed)
    ///
    /// ``` self: ?*C.QsciLexerJava, allowed: bool ```
    pub fn SetVerbatimStringEscapeSequencesAllowed(self: ?*anyopaque, allowed: bool) void {
        C.QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(@ptrCast(self), allowed);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#verbatimStringEscapeSequencesAllowed)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn VerbatimStringEscapeSequencesAllowed(self: ?*anyopaque) bool {
        return C.QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(@ptrCast(self));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockEnd)
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn BlockEnd1(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerCPP_BlockEnd1(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStart)
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn BlockStart1(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerCPP_BlockStart1(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStartKeyword)
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn BlockStartKeyword1(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerCPP_BlockStartKeyword1(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Apis(self: ?*anyopaque) ?*C.QsciAbstractAPIs {
        return C.QsciLexer_Apis(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn AutoIndentStyle(self: ?*anyopaque) i32 {
        return C.QsciLexer_AutoIndentStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Editor(self: ?*anyopaque) ?*C.QsciScintilla {
        return C.QsciLexer_Editor(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
    ///
    /// ``` self: ?*C.QsciLexerJava, apis: ?*C.QsciAbstractAPIs ```
    pub fn SetAPIs(self: ?*anyopaque, apis: ?*anyopaque) void {
        C.QsciLexer_SetAPIs(@ptrCast(self), @ptrCast(apis));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor ```
    pub fn SetDefaultColor(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciLexer_SetDefaultColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
    ///
    /// ``` self: ?*C.QsciLexerJava, f: ?*C.QFont ```
    pub fn SetDefaultFont(self: ?*anyopaque, f: ?*anyopaque) void {
        C.QsciLexer_SetDefaultFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor ```
    pub fn SetDefaultPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciLexer_SetDefaultPaper(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings ```
    pub fn ReadSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return C.QsciLexer_ReadSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings ```
    pub fn WriteSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return C.QsciLexer_WriteSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor, style: i32 ```
    pub fn ColorChanged(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexer_ColorChanged(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ``` self: ?*C.QsciLexer, slot: fn (?*C.QsciLexer, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexer_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
    ///
    /// ``` self: ?*C.QsciLexerJava, eolfilled: bool, style: i32 ```
    pub fn EolFillChanged(self: ?*anyopaque, eolfilled: bool, style: i32) void {
        C.QsciLexer_EolFillChanged(@ptrCast(self), eolfilled, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ``` self: ?*C.QsciLexer, slot: fn (?*C.QsciLexer, bool, i32) callconv(.c) void ```
    pub fn OnEolFillChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        C.QsciLexer_Connect_EolFillChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
    ///
    /// ``` self: ?*C.QsciLexerJava, f: ?*C.QFont, style: i32 ```
    pub fn FontChanged(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        C.QsciLexer_FontChanged(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ``` self: ?*C.QsciLexer, slot: fn (?*C.QsciLexer, ?*C.QFont, i32) callconv(.c) void ```
    pub fn OnFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexer_Connect_FontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor, style: i32 ```
    pub fn PaperChanged(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexer_PaperChanged(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ``` self: ?*C.QsciLexer, slot: fn (?*C.QsciLexer, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnPaperChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexer_Connect_PaperChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
    ///
    /// ``` self: ?*C.QsciLexerJava, prop: []const u8, val: []const u8 ```
    pub fn PropertyChanged(self: ?*anyopaque, prop: []const u8, val: []const u8) void {
        const prop_Cstring = @constCast(prop.ptr);
        const val_Cstring = @constCast(val.ptr);
        C.QsciLexer_PropertyChanged(@ptrCast(self), prop_Cstring, val_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// ``` self: ?*C.QsciLexer, slot: fn (?*C.QsciLexer, []const u8, []const u8) callconv(.c) void ```
    pub fn OnPropertyChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, []const u8) callconv(.c) void) void {
        C.QsciLexer_Connect_PropertyChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn ReadSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = @constCast(prefix.ptr);
        return C.QsciLexer_ReadSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn WriteSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = @constCast(prefix.ptr);
        return C.QsciLexer_WriteSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QsciLexerJava, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QsciLexerJava, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QsciLexerJava, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QsciLexerJava, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciLexerJava, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QsciLexerJava, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QsciLexerJava, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QsciLexerJava, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QsciLexerJava, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QsciLexerJava, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QsciLexerJava, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QsciLexerJava, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QsciLexerJava, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QsciLexerJava, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QsciLexerJava, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciLexerJava, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QsciLexerJava, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciLexerJava, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldAtElse)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn SetFoldAtElse(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_SetFoldAtElse(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn QBaseSetFoldAtElse(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_QBaseSetFoldAtElse(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, bool) callconv(.c) void ```
    pub fn OnSetFoldAtElse(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerJava_OnSetFoldAtElse(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldComments)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn SetFoldComments(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_SetFoldComments(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn QBaseSetFoldComments(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_QBaseSetFoldComments(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, bool) callconv(.c) void ```
    pub fn OnSetFoldComments(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerJava_OnSetFoldComments(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldCompact)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn SetFoldCompact(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_SetFoldCompact(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn QBaseSetFoldCompact(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_QBaseSetFoldCompact(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, bool) callconv(.c) void ```
    pub fn OnSetFoldCompact(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerJava_OnSetFoldCompact(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldPreprocessor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn SetFoldPreprocessor(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_SetFoldPreprocessor(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, fold: bool ```
    pub fn QBaseSetFoldPreprocessor(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerJava_QBaseSetFoldPreprocessor(@ptrCast(self), fold);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, bool) callconv(.c) void ```
    pub fn OnSetFoldPreprocessor(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerJava_OnSetFoldPreprocessor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexerCPP
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setStylePreprocessor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: bool ```
    pub fn SetStylePreprocessor(self: ?*anyopaque, style: bool) void {
        C.QsciLexerJava_SetStylePreprocessor(@ptrCast(self), style);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: bool ```
    pub fn QBaseSetStylePreprocessor(self: ?*anyopaque, style: bool) void {
        C.QsciLexerJava_QBaseSetStylePreprocessor(@ptrCast(self), style);
    }

    /// Inherited from QsciLexerCPP
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, bool) callconv(.c) void ```
    pub fn OnSetStylePreprocessor(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerJava_OnSetStylePreprocessor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Lexer(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_Lexer(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseLexer(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_QBaseLexer(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) []const u8 ```
    pub fn OnLexer(self: ?*anyopaque, slot: fn () callconv(.c) []const u8) void {
        C.QsciLexerJava_OnLexer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn LexerId(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_LexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseLexerId(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseLexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) i32 ```
    pub fn OnLexerId(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerJava_OnLexerId(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn AutoCompletionFillups(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_AutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseAutoCompletionFillups(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_QBaseAutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) []const u8 ```
    pub fn OnAutoCompletionFillups(self: ?*anyopaque, slot: fn () callconv(.c) []const u8) void {
        C.QsciLexerJava_OnAutoCompletionFillups(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, allocator: std.mem.Allocator ```
    pub fn AutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QsciLexerJava_AutoCompletionWordSeparators(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, allocator: std.mem.Allocator ```
    pub fn QBaseAutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QsciLexerJava_QBaseAutoCompletionWordSeparators(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnAutoCompletionWordSeparators(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        C.QsciLexerJava_OnAutoCompletionWordSeparators(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn BlockEnd(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_BlockEnd(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn QBaseBlockEnd(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_QBaseBlockEnd(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*i32) callconv(.c) []const u8 ```
    pub fn OnBlockEnd(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        C.QsciLexerJava_OnBlockEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn BlockLookback(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_BlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseBlockLookback(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseBlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) i32 ```
    pub fn OnBlockLookback(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerJava_OnBlockLookback(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn BlockStart(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_BlockStart(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn QBaseBlockStart(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_QBaseBlockStart(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*i32) callconv(.c) []const u8 ```
    pub fn OnBlockStart(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        C.QsciLexerJava_OnBlockStart(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn BlockStartKeyword(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_BlockStartKeyword(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: ?*i32 ```
    pub fn QBaseBlockStartKeyword(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_QBaseBlockStartKeyword(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*i32) callconv(.c) []const u8 ```
    pub fn OnBlockStartKeyword(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        C.QsciLexerJava_OnBlockStartKeyword(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn BraceStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_BraceStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseBraceStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseBraceStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) i32 ```
    pub fn OnBraceStyle(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerJava_OnBraceStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return C.QsciLexerJava_CaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseCaseSensitive(self: ?*anyopaque) bool {
        return C.QsciLexerJava_QBaseCaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) bool ```
    pub fn OnCaseSensitive(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QsciLexerJava_OnCaseSensitive(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn Color(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_Color(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBaseColor(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_QBaseColor(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) ?*C.QColor ```
    pub fn OnColor(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerJava_OnColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn EolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerJava_EolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBaseEolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerJava_QBaseEolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) bool ```
    pub fn OnEolFill(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QsciLexerJava_OnEolFill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn Font(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerJava_Font(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBaseFont(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerJava_QBaseFont(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) ?*C.QFont ```
    pub fn OnFont(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QFont) void {
        C.QsciLexerJava_OnFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn IndentationGuideView(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_IndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseIndentationGuideView(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseIndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) i32 ```
    pub fn OnIndentationGuideView(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerJava_OnIndentationGuideView(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn DefaultStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_DefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseDefaultStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseDefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) i32 ```
    pub fn OnDefaultStyle(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerJava_OnDefaultStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, style: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciLexerJava_Description(@ptrCast(self), @intCast(style));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32, allocator: std.mem.Allocator ```
    pub fn QBaseDescription(self: ?*anyopaque, style: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciLexerJava_QBaseDescription(@ptrCast(self), @intCast(style));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) []const u8 ```
    pub fn OnDescription(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) []const u8) void {
        C.QsciLexerJava_OnDescription(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn Paper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_Paper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBasePaper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_QBasePaper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) ?*C.QColor ```
    pub fn OnPaper(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerJava_OnPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn DefaultColorWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_DefaultColorWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBaseDefaultColorWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_QBaseDefaultColorWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) ?*C.QColor ```
    pub fn OnDefaultColorWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerJava_OnDefaultColorWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn DefaultEolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerJava_DefaultEolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBaseDefaultEolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerJava_QBaseDefaultEolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) bool ```
    pub fn OnDefaultEolFill(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QsciLexerJava_OnDefaultEolFill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn DefaultFontWithStyle(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerJava_DefaultFontWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBaseDefaultFontWithStyle(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerJava_QBaseDefaultFontWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) ?*C.QFont ```
    pub fn OnDefaultFontWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QFont) void {
        C.QsciLexerJava_OnDefaultFontWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn DefaultPaperWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_DefaultPaperWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, style: i32 ```
    pub fn QBaseDefaultPaperWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerJava_QBaseDefaultPaperWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) ?*C.QColor ```
    pub fn OnDefaultPaperWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerJava_OnDefaultPaperWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, editor: ?*C.QsciScintilla ```
    pub fn SetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QsciLexerJava_SetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, editor: ?*C.QsciScintilla ```
    pub fn QBaseSetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QsciLexerJava_QBaseSetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QsciScintilla) callconv(.c) void ```
    pub fn OnSetEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerJava_OnSetEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn RefreshProperties(self: ?*anyopaque) void {
        C.QsciLexerJava_RefreshProperties(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseRefreshProperties(self: ?*anyopaque) void {
        C.QsciLexerJava_QBaseRefreshProperties(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) void ```
    pub fn OnRefreshProperties(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciLexerJava_OnRefreshProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn StyleBitsNeeded(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_StyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseStyleBitsNeeded(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseStyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) i32 ```
    pub fn OnStyleBitsNeeded(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerJava_OnStyleBitsNeeded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn WordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseWordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerJava_QBaseWordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) []const u8 ```
    pub fn OnWordCharacters(self: ?*anyopaque, slot: fn () callconv(.c) []const u8) void {
        C.QsciLexerJava_OnWordCharacters(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, autoindentstyle: i32 ```
    pub fn SetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        C.QsciLexerJava_SetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, autoindentstyle: i32 ```
    pub fn QBaseSetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        C.QsciLexerJava_QBaseSetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, i32) callconv(.c) void ```
    pub fn OnSetAutoIndentStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerJava_OnSetAutoIndentStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor, style: i32 ```
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerJava_SetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor, style: i32 ```
    pub fn QBaseSetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerJava_QBaseSetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnSetColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerJava_OnSetColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, eoffill: bool, style: i32 ```
    pub fn SetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        C.QsciLexerJava_SetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, eoffill: bool, style: i32 ```
    pub fn QBaseSetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        C.QsciLexerJava_QBaseSetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, bool, i32) callconv(.c) void ```
    pub fn OnSetEolFill(self: ?*anyopaque, slot: fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        C.QsciLexerJava_OnSetEolFill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, f: ?*C.QFont, style: i32 ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        C.QsciLexerJava_SetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, f: ?*C.QFont, style: i32 ```
    pub fn QBaseSetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        C.QsciLexerJava_QBaseSetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QFont, i32) callconv(.c) void ```
    pub fn OnSetFont(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerJava_OnSetFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor, style: i32 ```
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerJava_SetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, c: ?*C.QColor, style: i32 ```
    pub fn QBaseSetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerJava_QBaseSetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnSetPaper(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerJava_OnSetPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn ReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerJava_ReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn QBaseReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerJava_QBaseReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QSettings, []const u8) callconv(.c) bool ```
    pub fn OnReadProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) bool) void {
        C.QsciLexerJava_OnReadProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn WriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerJava_WriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn QBaseWriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerJava_QBaseWriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QSettings, []const u8) callconv(.c) bool ```
    pub fn OnWriteProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) bool) void {
        C.QsciLexerJava_OnWriteProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerJava_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerJava_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerJava_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerJava_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerJava_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerJava_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerJava_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerJava_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerJava_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerJava_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerJava_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerJava_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerJava_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerJava_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerJava_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerJava_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerJava_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerJava_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerJava_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerJava_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerJava_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciLexerJava_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciLexerJava_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QsciLexerJava_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciLexerJava_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerJava_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciLexerJava_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciLexerJava_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QsciLexerJava_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciLexerJava_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciLexerJava_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerJava, slot: fn (?*C.QsciLexerJava, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerJava_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QsciLexerJava ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QsciLexerJava_Delete(@ptrCast(self));
    }
};
