const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
pub const qscilexerhtml = struct {
    /// New constructs a new QsciLexerHTML object.
    ///
    pub fn New() QtC.QsciLexerHTML {
        return qtc.QsciLexerHTML_new();
    }

    /// New2 constructs a new QsciLexerHTML object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QsciLexerHTML {
        return qtc.QsciLexerHTML_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QsciLexerHTML_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QsciLexerHTML_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QsciLexerHTML_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerHTML_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciLexerHTML_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerHTML_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerHTML_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Language(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_Language(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Lexer(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_Lexer(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn AutoCompletionFillups(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_AutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn WordCharacters(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultColor(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultColor(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultEolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerHTML_DefaultEolFill(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultFont(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_DefaultFont(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultPaper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultPaper(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` set: i32 `
    ///
    pub fn Keywords(self: ?*anyopaque, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_Keywords(@ptrCast(self), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, style: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciLexerHTML_Description(@ptrCast(self), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn RefreshProperties(self: ?*anyopaque) void {
        qtc.QsciLexerHTML_RefreshProperties(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn CaseSensitiveTags(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_CaseSensitiveTags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDjangoTemplates(self: ?*anyopaque, enabled: bool) void {
        qtc.QsciLexerHTML_SetDjangoTemplates(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn DjangoTemplates(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_DjangoTemplates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn FoldCompact(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldCompact(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn FoldPreprocessor(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldPreprocessor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldScriptComments(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldScriptComments(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn FoldScriptComments(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldScriptComments(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldScriptHeredocs(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldScriptHeredocs(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn FoldScriptHeredocs(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_FoldScriptHeredocs(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetMakoTemplates(self: ?*anyopaque, enabled: bool) void {
        qtc.QsciLexerHTML_SetMakoTemplates(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn MakoTemplates(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_MakoTemplates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldCompact(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldCompact(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, fold: bool) callconv(.c) void `
    ///
    pub fn OnSetFoldCompact(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetFoldCompact(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoldCompact` instead
    ///
    pub const QBaseSetFoldCompact = SuperSetFoldCompact;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` fold: bool `
    ///
    pub fn SuperSetFoldCompact(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SuperSetFoldCompact(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldPreprocessor(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SetFoldPreprocessor(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, fold: bool) callconv(.c) void `
    ///
    pub fn OnSetFoldPreprocessor(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetFoldPreprocessor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoldPreprocessor` instead
    ///
    pub const QBaseSetFoldPreprocessor = SuperSetFoldPreprocessor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` fold: bool `
    ///
    pub fn SuperSetFoldPreprocessor(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerHTML_SuperSetFoldPreprocessor(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` sens: bool `
    ///
    pub fn SetCaseSensitiveTags(self: ?*anyopaque, sens: bool) void {
        qtc.QsciLexerHTML_SetCaseSensitiveTags(@ptrCast(self), sens);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, sens: bool) callconv(.c) void `
    ///
    pub fn OnSetCaseSensitiveTags(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetCaseSensitiveTags(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaseSensitiveTags` instead
    ///
    pub const QBaseSetCaseSensitiveTags = SuperSetCaseSensitiveTags;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` sens: bool `
    ///
    pub fn SuperSetCaseSensitiveTags(self: ?*anyopaque, sens: bool) void {
        qtc.QsciLexerHTML_SuperSetCaseSensitiveTags(@ptrCast(self), sens);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn ReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_ReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnReadProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnReadProperties(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadProperties` instead
    ///
    pub const QBaseReadProperties = SuperReadProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SuperReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_SuperReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn WriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_WriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, qs: QtC.QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnWriteProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnWriteProperties(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteProperties` instead
    ///
    pub const QBaseWriteProperties = SuperWriteProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SuperWriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerHTML_SuperWriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Apis(self: ?*anyopaque) QtC.QsciAbstractAPIs {
        return qtc.QsciLexer_Apis(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn AutoIndentStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexer_AutoIndentStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Editor(self: ?*anyopaque) QtC.QsciScintilla {
        return qtc.QsciLexer_Editor(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` apis: QtC.QsciAbstractAPIs `
    ///
    pub fn SetAPIs(self: ?*anyopaque, apis: ?*anyopaque) void {
        qtc.QsciLexer_SetAPIs(@ptrCast(self), @ptrCast(apis));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    pub fn SetDefaultColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciLexer_SetDefaultColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` f: QtC.QFont `
    ///
    pub fn SetDefaultFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QsciLexer_SetDefaultFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    pub fn SetDefaultPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciLexer_SetDefaultPaper(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    pub fn ReadSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return qtc.QsciLexer_ReadSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    pub fn WriteSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return qtc.QsciLexer_WriteSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn ColorChanged(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexer_ColorChanged(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_ColorChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` eolfilled: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn EolFillChanged(self: ?*anyopaque, eolfilled: bool, style: i32) void {
        qtc.QsciLexer_EolFillChanged(@ptrCast(self), eolfilled, @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, eolfilled: bool, style: i32) callconv(.c) void `
    ///
    pub fn OnEolFillChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_EolFillChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` f: QtC.QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn FontChanged(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexer_FontChanged(@ptrCast(self), @ptrCast(f), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, f: QtC.QFont, style: i32) callconv(.c) void `
    ///
    pub fn OnFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_FontChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn PaperChanged(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexer_PaperChanged(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void `
    ///
    pub fn OnPaperChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PaperChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` prop: [:0]const u8 `
    ///
    /// ` val: [:0]const u8 `
    ///
    pub fn PropertyChanged(self: ?*anyopaque, prop: [:0]const u8, val: [:0]const u8) void {
        const prop_Cstring = prop.ptr;
        const val_Cstring = val.ptr;
        qtc.QsciLexer_PropertyChanged(@ptrCast(self), prop_Cstring, val_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPropertyChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PropertyChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn ReadSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: [:0]const u8) bool {
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_ReadSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` qs: QtC.QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn WriteSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: [:0]const u8) bool {
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_WriteSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn LexerId(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_LexerId(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperLexerId` instead
    ///
    pub const QBaseLexerId = SuperLexerId;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperLexerId(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperLexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLexerId(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnLexerId(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerHTML_AutoCompletionWordSeparators(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### DEPRECATED: Use `SuperAutoCompletionWordSeparators` instead
    ///
    pub const QBaseAutoCompletionWordSeparators = SuperAutoCompletionWordSeparators;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperAutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerHTML_SuperAutoCompletionWordSeparators(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnAutoCompletionWordSeparators(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciLexerHTML_OnAutoCompletionWordSeparators(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: *i32 `
    ///
    pub fn BlockEnd(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_BlockEnd(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `SuperBlockEnd` instead
    ///
    pub const QBaseBlockEnd = SuperBlockEnd;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: *i32 `
    ///
    pub fn SuperBlockEnd(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_SuperBlockEnd(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBlockEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBlockEnd(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn BlockLookback(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_BlockLookback(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBlockLookback` instead
    ///
    pub const QBaseBlockLookback = SuperBlockLookback;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperBlockLookback(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperBlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnBlockLookback(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnBlockLookback(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: *i32 `
    ///
    pub fn BlockStart(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_BlockStart(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `SuperBlockStart` instead
    ///
    pub const QBaseBlockStart = SuperBlockStart;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: *i32 `
    ///
    pub fn SuperBlockStart(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_SuperBlockStart(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBlockStart(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBlockStart(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: *i32 `
    ///
    pub fn BlockStartKeyword(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_BlockStartKeyword(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `SuperBlockStartKeyword` instead
    ///
    pub const QBaseBlockStartKeyword = SuperBlockStartKeyword;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: *i32 `
    ///
    pub fn SuperBlockStartKeyword(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerHTML_SuperBlockStartKeyword(@ptrCast(self), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBlockStartKeyword(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBlockStartKeyword(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn BraceStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_BraceStyle(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBraceStyle` instead
    ///
    pub const QBaseBraceStyle = SuperBraceStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperBraceStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperBraceStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnBraceStyle(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnBraceStyle(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_CaseSensitive(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperCaseSensitive` instead
    ///
    pub const QBaseCaseSensitive = SuperCaseSensitive;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperCaseSensitive(self: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_SuperCaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCaseSensitive(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnCaseSensitive(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn Color(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_Color(@ptrCast(self), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperColor` instead
    ///
    pub const QBaseColor = SuperColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperColor(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_SuperColor(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn EolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerHTML_EolFill(@ptrCast(self), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperEolFill` instead
    ///
    pub const QBaseEolFill = SuperEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperEolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerHTML_SuperEolFill(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) bool `
    ///
    pub fn OnEolFill(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnEolFill(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn Font(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_Font(@ptrCast(self), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperFont` instead
    ///
    pub const QBaseFont = SuperFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperFont(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_SuperFont(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QFont `
    ///
    pub fn OnFont(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QFont) void {
        qtc.QsciLexerHTML_OnFont(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn IndentationGuideView(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_IndentationGuideView(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIndentationGuideView` instead
    ///
    pub const QBaseIndentationGuideView = SuperIndentationGuideView;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperIndentationGuideView(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperIndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnIndentationGuideView(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnIndentationGuideView(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn DefaultStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_DefaultStyle(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDefaultStyle` instead
    ///
    pub const QBaseDefaultStyle = SuperDefaultStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperDefaultStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperDefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDefaultStyle(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnDefaultStyle(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn Paper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_Paper(@ptrCast(self), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperPaper` instead
    ///
    pub const QBasePaper = SuperPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperPaper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_SuperPaper(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnPaper(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnPaper(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultColor2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultColor2(@ptrCast(self), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperDefaultColor2` instead
    ///
    pub const QBaseDefaultColor2 = SuperDefaultColor2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperDefaultColor2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_SuperDefaultColor2(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnDefaultColor2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnDefaultColor2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultFont2(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_DefaultFont2(@ptrCast(self), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperDefaultFont2` instead
    ///
    pub const QBaseDefaultFont2 = SuperDefaultFont2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperDefaultFont2(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerHTML_SuperDefaultFont2(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QFont `
    ///
    pub fn OnDefaultFont2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QFont) void {
        qtc.QsciLexerHTML_OnDefaultFont2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultPaper2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_DefaultPaper2(@ptrCast(self), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperDefaultPaper2` instead
    ///
    pub const QBaseDefaultPaper2 = SuperDefaultPaper2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperDefaultPaper2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerHTML_SuperDefaultPaper2(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnDefaultPaper2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerHTML_OnDefaultPaper2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` editor: QtC.QsciScintilla `
    ///
    pub fn SetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QsciLexerHTML_SetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// ### DEPRECATED: Use `SuperSetEditor` instead
    ///
    pub const QBaseSetEditor = SuperSetEditor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` editor: QtC.QsciScintilla `
    ///
    pub fn SuperSetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QsciLexerHTML_SuperSetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, editor: QtC.QsciScintilla) callconv(.c) void `
    ///
    pub fn OnSetEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn StyleBitsNeeded(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_StyleBitsNeeded(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperStyleBitsNeeded` instead
    ///
    pub const QBaseStyleBitsNeeded = SuperStyleBitsNeeded;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperStyleBitsNeeded(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperStyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStyleBitsNeeded(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnStyleBitsNeeded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn SetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        qtc.QsciLexerHTML_SetAutoIndentStyle(@ptrCast(self), @bitCast(autoindentstyle));
    }

    /// ### DEPRECATED: Use `SuperSetAutoIndentStyle` instead
    ///
    pub const QBaseSetAutoIndentStyle = SuperSetAutoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn SuperSetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        qtc.QsciLexerHTML_SuperSetAutoIndentStyle(@ptrCast(self), @bitCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, autoindentstyle: i32) callconv(.c) void `
    ///
    pub fn OnSetAutoIndentStyle(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetAutoIndentStyle(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SetColor(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperSetColor` instead
    ///
    pub const QBaseSetColor = SuperSetColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SuperSetColor(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void `
    ///
    pub fn OnSetColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn SetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        qtc.QsciLexerHTML_SetEolFill(@ptrCast(self), eoffill, @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperSetEolFill` instead
    ///
    pub const QBaseSetEolFill = SuperSetEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        qtc.QsciLexerHTML_SuperSetEolFill(@ptrCast(self), eoffill, @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, eoffill: bool, style: i32) callconv(.c) void `
    ///
    pub fn OnSetEolFill(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetEolFill(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` f: QtC.QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SetFont(@ptrCast(self), @ptrCast(f), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperSetFont` instead
    ///
    pub const QBaseSetFont = SuperSetFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` f: QtC.QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SuperSetFont(@ptrCast(self), @ptrCast(f), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, f: QtC.QFont, style: i32) callconv(.c) void `
    ///
    pub fn OnSetFont(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetFont(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SetPaper(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// ### DEPRECATED: Use `SuperSetPaper` instead
    ///
    pub const QBaseSetPaper = SuperSetPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerHTML_SuperSetPaper(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, c: QtC.QColor, style: i32) callconv(.c) void `
    ///
    pub fn OnSetPaper(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnSetPaper(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerHTML_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerHTML_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerHTML_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` text: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextAsBytes(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerHTML_TextAsBytes(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qscilexerhtml.TextAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperTextAsBytes` instead
    ///
    pub const QBaseTextAsBytes = SuperTextAsBytes;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` text: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperTextAsBytes(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerHTML_SuperTextAsBytes(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qscilexerhtml.TextAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnTextAsBytes(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciLexerHTML_OnTextAsBytes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BytesAsText(self: ?*anyopaque, bytes: [:0]const u8, size: i32, allocator: std.mem.Allocator) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerHTML_BytesAsText(@ptrCast(self), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.BytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperBytesAsText` instead
    ///
    pub const QBaseBytesAsText = SuperBytesAsText;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperBytesAsText(self: ?*anyopaque, bytes: [:0]const u8, size: i32, allocator: std.mem.Allocator) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerHTML_SuperBytesAsText(@ptrCast(self), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexerhtml.BytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBytesAsText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerHTML_OnBytesAsText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciLexerHTML_Sender(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciLexerHTML_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QsciLexerHTML_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciLexerHTML_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerHTML_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerHTML_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerHTML_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciLexerHTML_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerHTML_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerHTML, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QsciLexerHTML `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QsciLexerHTML_Delete(@ptrCast(self));
    }
};

pub const enums = struct {
    pub const QsciLexerHTML = enum(i32) {
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
