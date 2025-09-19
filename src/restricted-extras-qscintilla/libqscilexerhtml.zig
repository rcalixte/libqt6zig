const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html
pub const qscilexerhtml = struct {
    /// New constructs a new QsciLexerHTML object.
    ///
    ///
    pub fn New() QtC.QsciLexerHTML {
        return qtc.QsciLexerHTML_new();
    }

    /// New2 constructs a new QsciLexerHTML object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QsciLexerHTML {
        return qtc.QsciLexerHTML_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QsciLexerHTML_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QsciLexerHTML, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerHTML_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QsciLexerHTML, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciLexerHTML, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QsciLexerHTML_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Language(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QsciLexerHTML_Language(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Lexer(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QsciLexerHTML_Lexer(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn AutoCompletionFillups(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QsciLexerHTML_AutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn WordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QsciLexerHTML_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn DefaultColor(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultColor(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn DefaultEolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerHTML_DefaultEolFill(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn DefaultFont(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_DefaultFont(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn DefaultPaper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultPaper(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, set: i32 ```
    pub fn Keywords(self: ?*anyopaque, set: i32) []const u8 {
        const _ret = qtc.QsciLexerHTML_Keywords(@ptrCast(self), @intCast(set));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, style: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciLexerHTML_Description(@ptrCast(self), @intCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn RefreshProperties(self: ?*anyopaque) void {
        qtc.QsciLexerHTML_RefreshProperties(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn CaseSensitiveTags(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_CaseSensitiveTags(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, enabled: bool ```
    pub fn SetDjangoTemplates(self: ?*anyopaque, enabled: bool) void {
        qtc.QsciLexerHTML_SetDjangoTemplates(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn DjangoTemplates(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_DjangoTemplates(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn FoldCompact(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldCompact(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn FoldPreprocessor(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldPreprocessor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, fold: bool ```
    pub fn SetFoldScriptComments(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldScriptComments(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn FoldScriptComments(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldScriptComments(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, fold: bool ```
    pub fn SetFoldScriptHeredocs(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldScriptHeredocs(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn FoldScriptHeredocs(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldScriptHeredocs(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, enabled: bool ```
    pub fn SetMakoTemplates(self: ?*anyopaque, enabled: bool) void {
        qtc.QsciLexerHTML_SetMakoTemplates(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn MakoTemplates(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_MakoTemplates(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, fold: bool ```
    pub fn SetFoldCompact(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldCompact(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, fold: bool) callconv(.c) void ```
    pub fn OnSetFoldCompact(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetFoldCompact(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciLexerHTML, fold: bool ```
    pub fn QBaseSetFoldCompact(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_QBaseSetFoldCompact(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, fold: bool ```
    pub fn SetFoldPreprocessor(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldPreprocessor(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, fold: bool) callconv(.c) void ```
    pub fn OnSetFoldPreprocessor(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetFoldPreprocessor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciLexerHTML, fold: bool ```
    pub fn QBaseSetFoldPreprocessor(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_QBaseSetFoldPreprocessor(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, sens: bool ```
    pub fn SetCaseSensitiveTags(self: ?*anyopaque, sens: bool) void {
        qtc.QsciLexerHTML_SetCaseSensitiveTags(@ptrCast(self), sens);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, sens: bool) callconv(.c) void ```
    pub fn OnSetCaseSensitiveTags(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetCaseSensitiveTags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciLexerHTML, sens: bool ```
    pub fn QBaseSetCaseSensitiveTags(self: ?*anyopaque, sens: bool) void {
        qtc.QsciLexerHTML_QBaseSetCaseSensitiveTags(@ptrCast(self), sens);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn ReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_ReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: [*:0]const u8) callconv(.c) bool ```
    pub fn OnReadProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnReadProperties(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn QBaseReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_QBaseReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn WriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_WriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: [*:0]const u8) callconv(.c) bool ```
    pub fn OnWriteProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnWriteProperties(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn QBaseWriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_QBaseWriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QsciLexerHTML_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QsciLexerHTML_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Apis(self: ?*anyopaque) QtC.QsciAbstractAPIs {
        return qtc.QsciLexer_Apis(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn AutoIndentStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexer_AutoIndentStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Editor(self: ?*anyopaque) QtC.QsciScintilla {
        return qtc.QsciLexer_Editor(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, apis: QtC.QsciAbstractAPIs ```
    pub fn SetAPIs(self: ?*anyopaque, apis: ?*anyopaque) void {
        qtc.QsciLexer_SetAPIs(@ptrCast(self), @ptrCast(apis));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor ```
    pub fn SetDefaultColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciLexer_SetDefaultColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, f: QtC.QFont ```
    pub fn SetDefaultFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QsciLexer_SetDefaultFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor ```
    pub fn SetDefaultPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciLexer_SetDefaultPaper(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings ```
    pub fn ReadSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return qtc.QsciLexer_ReadSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings ```
    pub fn WriteSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return qtc.QsciLexer_WriteSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32 ```
    pub fn ColorChanged(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexer_ColorChanged(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, eolfilled: bool, style: i32 ```
    pub fn EolFillChanged(self: ?*anyopaque, eolfilled: bool, style: i32) void {
        qtc.QsciLexer_EolFillChanged(@ptrCast(self), eolfilled, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, eolfilled: bool, style: i32) callconv(.c) void ```
    pub fn OnEolFillChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_EolFillChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, f: QtC.QFont, style: i32 ```
    pub fn FontChanged(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexer_FontChanged(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, f: QtC.QFont, style: i32) callconv(.c) void ```
    pub fn OnFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_FontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32 ```
    pub fn PaperChanged(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexer_PaperChanged(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void ```
    pub fn OnPaperChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PaperChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, prop: []const u8, val: []const u8 ```
    pub fn PropertyChanged(self: ?*anyopaque, prop: []const u8, val: []const u8) void {
        const prop_Cstring = prop.ptr;
        const val_Cstring = val.ptr;
        qtc.QsciLexer_PropertyChanged(@ptrCast(self), prop_Cstring, val_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void ```
    pub fn OnPropertyChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PropertyChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn ReadSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_ReadSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ``` self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: []const u8 ```
    pub fn WriteSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_WriteSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QsciLexerHTML, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QsciLexerHTML, name: []const u8 ```
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
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QsciLexerHTML, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QsciLexerHTML, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QsciLexerHTML, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QsciLexerHTML, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QsciLexerHTML, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QsciLexerHTML, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qscilexerhtml.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QsciLexerHTML, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QsciLexerHTML, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QsciLexerHTML, obj: QtC.QObject ```
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
    /// ``` self: QtC.QsciLexerHTML, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QsciLexerHTML, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QsciLexerHTML, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QsciLexerHTML, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qscilexerhtml.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscilexerhtml.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QsciLexerHTML, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QsciLexerHTML, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QsciLexerHTML, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QsciLexerHTML, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciLexerHTML, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn LexerId(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_LexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseLexerId(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseLexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) i32 ```
    pub fn OnLexerId(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnLexerId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, allocator: std.mem.Allocator ```
    pub fn AutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerHTML_AutoCompletionWordSeparators(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qscilexerhtml.AutoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscilexerhtml.AutoCompletionWordSeparators: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, allocator: std.mem.Allocator ```
    pub fn QBaseAutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerHTML_QBaseAutoCompletionWordSeparators(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qscilexerhtml.AutoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscilexerhtml.AutoCompletionWordSeparators: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnAutoCompletionWordSeparators(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.QsciLexerHTML_OnAutoCompletionWordSeparators(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: *i32 ```
    pub fn BlockEnd(self: ?*anyopaque, style: *i32) []const u8 {
        const _ret = qtc.QsciLexerHTML_BlockEnd(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: *i32 ```
    pub fn QBaseBlockEnd(self: ?*anyopaque, style: *i32) []const u8 {
        const _ret = qtc.QsciLexerHTML_QBaseBlockEnd(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: *i32) callconv(.c) [*:0]const u8 ```
    pub fn OnBlockEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBlockEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn BlockLookback(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_BlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseBlockLookback(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseBlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) i32 ```
    pub fn OnBlockLookback(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnBlockLookback(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: *i32 ```
    pub fn BlockStart(self: ?*anyopaque, style: *i32) []const u8 {
        const _ret = qtc.QsciLexerHTML_BlockStart(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: *i32 ```
    pub fn QBaseBlockStart(self: ?*anyopaque, style: *i32) []const u8 {
        const _ret = qtc.QsciLexerHTML_QBaseBlockStart(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: *i32) callconv(.c) [*:0]const u8 ```
    pub fn OnBlockStart(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBlockStart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: *i32 ```
    pub fn BlockStartKeyword(self: ?*anyopaque, style: *i32) []const u8 {
        const _ret = qtc.QsciLexerHTML_BlockStartKeyword(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: *i32 ```
    pub fn QBaseBlockStartKeyword(self: ?*anyopaque, style: *i32) []const u8 {
        const _ret = qtc.QsciLexerHTML_QBaseBlockStartKeyword(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: *i32) callconv(.c) [*:0]const u8 ```
    pub fn OnBlockStartKeyword(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBlockStartKeyword(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn BraceStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_BraceStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseBraceStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseBraceStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) i32 ```
    pub fn OnBraceStyle(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnBraceStyle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_CaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseCaseSensitive(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_QBaseCaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) bool ```
    pub fn OnCaseSensitive(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnCaseSensitive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn Color(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_Color(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn QBaseColor(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_QBaseColor(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor ```
    pub fn OnColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn EolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerHTML_EolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn QBaseEolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerHTML_QBaseEolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) bool ```
    pub fn OnEolFill(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnEolFill(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn Font(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_Font(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn QBaseFont(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_QBaseFont(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QFont ```
    pub fn OnFont(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QFont) void {
        qtc.QsciLexerHTML_OnFont(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn IndentationGuideView(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_IndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseIndentationGuideView(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseIndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) i32 ```
    pub fn OnIndentationGuideView(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnIndentationGuideView(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn DefaultStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_DefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseDefaultStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseDefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDefaultStyle(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnDefaultStyle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn Paper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_Paper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn QBasePaper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_QBasePaper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor ```
    pub fn OnPaper(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnPaper(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn DefaultColor2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultColor2(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn QBaseDefaultColor2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_QBaseDefaultColor2(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor ```
    pub fn OnDefaultColor2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnDefaultColor2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn DefaultFont2(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_DefaultFont2(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn QBaseDefaultFont2(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_QBaseDefaultFont2(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QFont ```
    pub fn OnDefaultFont2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QFont) void {
        qtc.QsciLexerHTML_OnDefaultFont2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn DefaultPaper2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultPaper2(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, style: i32 ```
    pub fn QBaseDefaultPaper2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_QBaseDefaultPaper2(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor ```
    pub fn OnDefaultPaper2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnDefaultPaper2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, editor: QtC.QsciScintilla ```
    pub fn SetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QsciLexerHTML_SetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, editor: QtC.QsciScintilla ```
    pub fn QBaseSetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QsciLexerHTML_QBaseSetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, editor: QtC.QsciScintilla) callconv(.c) void ```
    pub fn OnSetEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn StyleBitsNeeded(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_StyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseStyleBitsNeeded(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseStyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) i32 ```
    pub fn OnStyleBitsNeeded(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnStyleBitsNeeded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, autoindentstyle: i32 ```
    pub fn SetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        qtc.QsciLexerHTML_SetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, autoindentstyle: i32 ```
    pub fn QBaseSetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        qtc.QsciLexerHTML_QBaseSetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, autoindentstyle: i32) callconv(.c) void ```
    pub fn OnSetAutoIndentStyle(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetAutoIndentStyle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32 ```
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32 ```
    pub fn QBaseSetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_QBaseSetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void ```
    pub fn OnSetColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetColor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, eoffill: bool, style: i32 ```
    pub fn SetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        qtc.QsciLexerHTML_SetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, eoffill: bool, style: i32 ```
    pub fn QBaseSetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        qtc.QsciLexerHTML_QBaseSetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, eoffill: bool, style: i32) callconv(.c) void ```
    pub fn OnSetEolFill(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetEolFill(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, f: QtC.QFont, style: i32 ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, f: QtC.QFont, style: i32 ```
    pub fn QBaseSetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_QBaseSetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, f: QtC.QFont, style: i32) callconv(.c) void ```
    pub fn OnSetFont(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetFont(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32 ```
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32 ```
    pub fn QBaseSetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_QBaseSetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void ```
    pub fn OnSetPaper(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetPaper(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, text: []const u8, allocator: std.mem.Allocator ```
    pub fn TextAsBytes(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QsciLexerHTML_TextAsBytes(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qscilexerhtml.TextAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, text: []const u8, allocator: std.mem.Allocator ```
    pub fn QBaseTextAsBytes(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QsciLexerHTML_QBaseTextAsBytes(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qscilexerhtml.TextAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, text: [*:0]const u8) callconv(.c) [*:0]u8 ```
    pub fn OnTextAsBytes(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]u8) void {
        qtc.QsciLexerHTML_OnTextAsBytes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, bytes: []const u8, size: i32, allocator: std.mem.Allocator ```
    pub fn BytesAsText(self: ?*anyopaque, bytes: []const u8, size: i32, allocator: std.mem.Allocator) []const u8 {
        const bytes_Cstring = bytes.ptr;
        const _str = qtc.QsciLexerHTML_BytesAsText(@ptrCast(self), bytes_Cstring, @intCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.BytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, bytes: []const u8, size: i32, allocator: std.mem.Allocator ```
    pub fn QBaseBytesAsText(self: ?*anyopaque, bytes: []const u8, size: i32, allocator: std.mem.Allocator) []const u8 {
        const bytes_Cstring = bytes.ptr;
        const _str = qtc.QsciLexerHTML_QBaseBytesAsText(@ptrCast(self), bytes_Cstring, @intCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.BytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 ```
    pub fn OnBytesAsText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBytesAsText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciLexerHTML_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciLexerHTML_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QsciLexerHTML_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerHTML_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerHTML_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QsciLexerHTML, callback: *const fn (self: QtC.QsciLexerHTML, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QsciLexerHTML ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QsciLexerHTML_Delete(@ptrCast(self));
    }
};

pub const enums = struct {
    pub const QsciLexerHTML = enum {
        pub const Default: i32 = 0;
        pub const Tag: i32 = 1;
        pub const UnknownTag: i32 = 2;
        pub const Attribute: i32 = 3;
        pub const UnknownAttribute: i32 = 4;
        pub const HTMLNumber: i32 = 5;
        pub const HTMLDoubleQuotedString: i32 = 6;
        pub const HTMLSingleQuotedString: i32 = 7;
        pub const OtherInTag: i32 = 8;
        pub const HTMLComment: i32 = 9;
        pub const Entity: i32 = 10;
        pub const XMLTagEnd: i32 = 11;
        pub const XMLStart: i32 = 12;
        pub const XMLEnd: i32 = 13;
        pub const Script: i32 = 14;
        pub const ASPAtStart: i32 = 15;
        pub const ASPStart: i32 = 16;
        pub const CDATA: i32 = 17;
        pub const PHPStart: i32 = 18;
        pub const HTMLValue: i32 = 19;
        pub const ASPXCComment: i32 = 20;
        pub const SGMLDefault: i32 = 21;
        pub const SGMLCommand: i32 = 22;
        pub const SGMLParameter: i32 = 23;
        pub const SGMLDoubleQuotedString: i32 = 24;
        pub const SGMLSingleQuotedString: i32 = 25;
        pub const SGMLError: i32 = 26;
        pub const SGMLSpecial: i32 = 27;
        pub const SGMLEntity: i32 = 28;
        pub const SGMLComment: i32 = 29;
        pub const SGMLParameterComment: i32 = 30;
        pub const SGMLBlockDefault: i32 = 31;
        pub const JavaScriptStart: i32 = 40;
        pub const JavaScriptDefault: i32 = 41;
        pub const JavaScriptComment: i32 = 42;
        pub const JavaScriptCommentLine: i32 = 43;
        pub const JavaScriptCommentDoc: i32 = 44;
        pub const JavaScriptNumber: i32 = 45;
        pub const JavaScriptWord: i32 = 46;
        pub const JavaScriptKeyword: i32 = 47;
        pub const JavaScriptDoubleQuotedString: i32 = 48;
        pub const JavaScriptSingleQuotedString: i32 = 49;
        pub const JavaScriptSymbol: i32 = 50;
        pub const JavaScriptUnclosedString: i32 = 51;
        pub const JavaScriptRegex: i32 = 52;
        pub const ASPJavaScriptStart: i32 = 55;
        pub const ASPJavaScriptDefault: i32 = 56;
        pub const ASPJavaScriptComment: i32 = 57;
        pub const ASPJavaScriptCommentLine: i32 = 58;
        pub const ASPJavaScriptCommentDoc: i32 = 59;
        pub const ASPJavaScriptNumber: i32 = 60;
        pub const ASPJavaScriptWord: i32 = 61;
        pub const ASPJavaScriptKeyword: i32 = 62;
        pub const ASPJavaScriptDoubleQuotedString: i32 = 63;
        pub const ASPJavaScriptSingleQuotedString: i32 = 64;
        pub const ASPJavaScriptSymbol: i32 = 65;
        pub const ASPJavaScriptUnclosedString: i32 = 66;
        pub const ASPJavaScriptRegex: i32 = 67;
        pub const VBScriptStart: i32 = 70;
        pub const VBScriptDefault: i32 = 71;
        pub const VBScriptComment: i32 = 72;
        pub const VBScriptNumber: i32 = 73;
        pub const VBScriptKeyword: i32 = 74;
        pub const VBScriptString: i32 = 75;
        pub const VBScriptIdentifier: i32 = 76;
        pub const VBScriptUnclosedString: i32 = 77;
        pub const ASPVBScriptStart: i32 = 80;
        pub const ASPVBScriptDefault: i32 = 81;
        pub const ASPVBScriptComment: i32 = 82;
        pub const ASPVBScriptNumber: i32 = 83;
        pub const ASPVBScriptKeyword: i32 = 84;
        pub const ASPVBScriptString: i32 = 85;
        pub const ASPVBScriptIdentifier: i32 = 86;
        pub const ASPVBScriptUnclosedString: i32 = 87;
        pub const PythonStart: i32 = 90;
        pub const PythonDefault: i32 = 91;
        pub const PythonComment: i32 = 92;
        pub const PythonNumber: i32 = 93;
        pub const PythonDoubleQuotedString: i32 = 94;
        pub const PythonSingleQuotedString: i32 = 95;
        pub const PythonKeyword: i32 = 96;
        pub const PythonTripleSingleQuotedString: i32 = 97;
        pub const PythonTripleDoubleQuotedString: i32 = 98;
        pub const PythonClassName: i32 = 99;
        pub const PythonFunctionMethodName: i32 = 100;
        pub const PythonOperator: i32 = 101;
        pub const PythonIdentifier: i32 = 102;
        pub const ASPPythonStart: i32 = 105;
        pub const ASPPythonDefault: i32 = 106;
        pub const ASPPythonComment: i32 = 107;
        pub const ASPPythonNumber: i32 = 108;
        pub const ASPPythonDoubleQuotedString: i32 = 109;
        pub const ASPPythonSingleQuotedString: i32 = 110;
        pub const ASPPythonKeyword: i32 = 111;
        pub const ASPPythonTripleSingleQuotedString: i32 = 112;
        pub const ASPPythonTripleDoubleQuotedString: i32 = 113;
        pub const ASPPythonClassName: i32 = 114;
        pub const ASPPythonFunctionMethodName: i32 = 115;
        pub const ASPPythonOperator: i32 = 116;
        pub const ASPPythonIdentifier: i32 = 117;
        pub const PHPDefault: i32 = 118;
        pub const PHPDoubleQuotedString: i32 = 119;
        pub const PHPSingleQuotedString: i32 = 120;
        pub const PHPKeyword: i32 = 121;
        pub const PHPNumber: i32 = 122;
        pub const PHPVariable: i32 = 123;
        pub const PHPComment: i32 = 124;
        pub const PHPCommentLine: i32 = 125;
        pub const PHPDoubleQuotedVariable: i32 = 126;
        pub const PHPOperator: i32 = 127;
    };
};
