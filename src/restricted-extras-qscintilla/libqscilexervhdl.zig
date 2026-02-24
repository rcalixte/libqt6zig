const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
pub const qscilexervhdl = struct {
    /// New constructs a new QsciLexerVHDL object.
    ///
    pub fn New() QtC.QsciLexerVHDL {
        return qtc.QsciLexerVHDL_new();
    }

    /// New2 constructs a new QsciLexerVHDL object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QsciLexerVHDL {
        return qtc.QsciLexerVHDL_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QsciLexerVHDL_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QsciLexerVHDL_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QsciLexerVHDL_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerVHDL_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciLexerVHDL_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerVHDL_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexervhdl.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn Language(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_Language(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn Lexer(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_Lexer(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn BraceStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_BraceStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultColor(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_DefaultColor(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultEolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerVHDL_DefaultEolFill(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultFont(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerVHDL_DefaultFont(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultPaper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_DefaultPaper(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` set: i32 `
    ///
    pub fn Keywords(self: ?*anyopaque, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_Keywords(@ptrCast(self), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, style: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciLexerVHDL_Description(@ptrCast(self), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexervhdl.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn RefreshProperties(self: ?*anyopaque) void {
        qtc.QsciLexerVHDL_RefreshProperties(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn FoldComments(self: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_FoldComments(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn FoldCompact(self: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_FoldCompact(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn FoldAtElse(self: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_FoldAtElse(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn FoldAtBegin(self: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_FoldAtBegin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn FoldAtParenthesis(self: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_FoldAtParenthesis(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldComments(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SetFoldComments(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, fold: bool) callconv(.c) void `
    ///
    pub fn OnSetFoldComments(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetFoldComments(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoldComments` instead
    ///
    pub const QBaseSetFoldComments = SuperSetFoldComments;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SuperSetFoldComments(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SuperSetFoldComments(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldCompact(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SetFoldCompact(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, fold: bool) callconv(.c) void `
    ///
    pub fn OnSetFoldCompact(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetFoldCompact(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoldCompact` instead
    ///
    pub const QBaseSetFoldCompact = SuperSetFoldCompact;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SuperSetFoldCompact(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SuperSetFoldCompact(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldAtElse(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SetFoldAtElse(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, fold: bool) callconv(.c) void `
    ///
    pub fn OnSetFoldAtElse(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetFoldAtElse(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoldAtElse` instead
    ///
    pub const QBaseSetFoldAtElse = SuperSetFoldAtElse;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SuperSetFoldAtElse(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SuperSetFoldAtElse(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldAtBegin(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SetFoldAtBegin(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, fold: bool) callconv(.c) void `
    ///
    pub fn OnSetFoldAtBegin(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetFoldAtBegin(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoldAtBegin` instead
    ///
    pub const QBaseSetFoldAtBegin = SuperSetFoldAtBegin;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SuperSetFoldAtBegin(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SuperSetFoldAtBegin(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SetFoldAtParenthesis(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SetFoldAtParenthesis(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, fold: bool) callconv(.c) void `
    ///
    pub fn OnSetFoldAtParenthesis(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetFoldAtParenthesis(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoldAtParenthesis` instead
    ///
    pub const QBaseSetFoldAtParenthesis = SuperSetFoldAtParenthesis;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` fold: bool `
    ///
    pub fn SuperSetFoldAtParenthesis(self: ?*anyopaque, fold: bool) void {
        qtc.QsciLexerVHDL_SuperSetFoldAtParenthesis(@ptrCast(self), fold);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
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
        return qtc.QsciLexerVHDL_ReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, qs: QtC.QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnReadProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerVHDL_OnReadProperties(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadProperties` instead
    ///
    pub const QBaseReadProperties = SuperReadProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
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
        return qtc.QsciLexerVHDL_SuperReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
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
        return qtc.QsciLexerVHDL_WriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, qs: QtC.QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnWriteProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerVHDL_OnWriteProperties(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteProperties` instead
    ///
    pub const QBaseWriteProperties = SuperWriteProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
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
        return qtc.QsciLexerVHDL_SuperWriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexervhdl.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexervhdl.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, c: QtC.QColor, style: i32) callconv(.c) void `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, eolfilled: bool, style: i32) callconv(.c) void `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, f: QtC.QFont, style: i32) callconv(.c) void `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, c: QtC.QColor, style: i32) callconv(.c) void `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexervhdl.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qscilexervhdl.Children: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qscilexervhdl.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscilexervhdl.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL) callconv(.c) void `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn LexerId(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_LexerId(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperLexerId(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SuperLexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLexerId(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnLexerId(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn AutoCompletionFillups(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_AutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `SuperAutoCompletionFillups` instead
    ///
    pub const QBaseAutoCompletionFillups = SuperAutoCompletionFillups;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperAutoCompletionFillups(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_SuperAutoCompletionFillups(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnAutoCompletionFillups(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerVHDL_OnAutoCompletionFillups(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerVHDL_AutoCompletionWordSeparators(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qscilexervhdl.AutoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscilexervhdl.AutoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperAutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerVHDL_SuperAutoCompletionWordSeparators(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qscilexervhdl.AutoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscilexervhdl.AutoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnAutoCompletionWordSeparators(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciLexerVHDL_OnAutoCompletionWordSeparators(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: *i32 `
    ///
    pub fn BlockEnd(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_BlockEnd(@ptrCast(self), @ptrCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: *i32 `
    ///
    pub fn SuperBlockEnd(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_SuperBlockEnd(@ptrCast(self), @ptrCast(style));
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBlockEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerVHDL_OnBlockEnd(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn BlockLookback(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_BlockLookback(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperBlockLookback(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SuperBlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnBlockLookback(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnBlockLookback(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: *i32 `
    ///
    pub fn BlockStart(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_BlockStart(@ptrCast(self), @ptrCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: *i32 `
    ///
    pub fn SuperBlockStart(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_SuperBlockStart(@ptrCast(self), @ptrCast(style));
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBlockStart(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerVHDL_OnBlockStart(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: *i32 `
    ///
    pub fn BlockStartKeyword(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_BlockStartKeyword(@ptrCast(self), @ptrCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: *i32 `
    ///
    pub fn SuperBlockStartKeyword(self: ?*anyopaque, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_SuperBlockStartKeyword(@ptrCast(self), @ptrCast(style));
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBlockStartKeyword(self: ?*anyopaque, callback: *const fn (?*anyopaque, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerVHDL_OnBlockStartKeyword(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_CaseSensitive(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperCaseSensitive(self: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_SuperCaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCaseSensitive(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerVHDL_OnCaseSensitive(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn Color(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_Color(@ptrCast(self), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperColor(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_SuperColor(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerVHDL_OnColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn EolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerVHDL_EolFill(@ptrCast(self), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperEolFill(self: ?*anyopaque, style: i32) bool {
        return qtc.QsciLexerVHDL_SuperEolFill(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: i32) callconv(.c) bool `
    ///
    pub fn OnEolFill(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QsciLexerVHDL_OnEolFill(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn Font(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerVHDL_Font(@ptrCast(self), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperFont(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerVHDL_SuperFont(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: i32) callconv(.c) QtC.QFont `
    ///
    pub fn OnFont(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QFont) void {
        qtc.QsciLexerVHDL_OnFont(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn IndentationGuideView(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_IndentationGuideView(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperIndentationGuideView(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SuperIndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnIndentationGuideView(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnIndentationGuideView(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn DefaultStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_DefaultStyle(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperDefaultStyle(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SuperDefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDefaultStyle(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnDefaultStyle(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn Paper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_Paper(@ptrCast(self), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperPaper(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_SuperPaper(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnPaper(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerVHDL_OnPaper(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultColor2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_DefaultColor2(@ptrCast(self), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperDefaultColor2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_SuperDefaultColor2(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnDefaultColor2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerVHDL_OnDefaultColor2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultFont2(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerVHDL_DefaultFont2(@ptrCast(self), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperDefaultFont2(self: ?*anyopaque, style: i32) QtC.QFont {
        return qtc.QsciLexerVHDL_SuperDefaultFont2(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: i32) callconv(.c) QtC.QFont `
    ///
    pub fn OnDefaultFont2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QFont) void {
        qtc.QsciLexerVHDL_OnDefaultFont2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn DefaultPaper2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_DefaultPaper2(@ptrCast(self), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperDefaultPaper2(self: ?*anyopaque, style: i32) QtC.QColor {
        return qtc.QsciLexerVHDL_SuperDefaultPaper2(@ptrCast(self), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, style: i32) callconv(.c) QtC.QColor `
    ///
    pub fn OnDefaultPaper2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QColor) void {
        qtc.QsciLexerVHDL_OnDefaultPaper2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` editor: QtC.QsciScintilla `
    ///
    pub fn SetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QsciLexerVHDL_SetEditor(@ptrCast(self), @ptrCast(editor));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` editor: QtC.QsciScintilla `
    ///
    pub fn SuperSetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QsciLexerVHDL_SuperSetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, editor: QtC.QsciScintilla) callconv(.c) void `
    ///
    pub fn OnSetEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn StyleBitsNeeded(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_StyleBitsNeeded(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperStyleBitsNeeded(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SuperStyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStyleBitsNeeded(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnStyleBitsNeeded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn WordCharacters(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `SuperWordCharacters` instead
    ///
    pub const QBaseWordCharacters = SuperWordCharacters;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperWordCharacters(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QsciLexerVHDL_SuperWordCharacters(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnWordCharacters(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerVHDL_OnWordCharacters(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn SetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        qtc.QsciLexerVHDL_SetAutoIndentStyle(@ptrCast(self), @bitCast(autoindentstyle));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn SuperSetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        qtc.QsciLexerVHDL_SuperSetAutoIndentStyle(@ptrCast(self), @bitCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, autoindentstyle: i32) callconv(.c) void `
    ///
    pub fn OnSetAutoIndentStyle(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetAutoIndentStyle(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerVHDL_SetColor(@ptrCast(self), @ptrCast(c), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerVHDL_SuperSetColor(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, c: QtC.QColor, style: i32) callconv(.c) void `
    ///
    pub fn OnSetColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn SetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        qtc.QsciLexerVHDL_SetEolFill(@ptrCast(self), eoffill, @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        qtc.QsciLexerVHDL_SuperSetEolFill(@ptrCast(self), eoffill, @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, eoffill: bool, style: i32) callconv(.c) void `
    ///
    pub fn OnSetEolFill(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetEolFill(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` f: QtC.QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexerVHDL_SetFont(@ptrCast(self), @ptrCast(f), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` f: QtC.QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        qtc.QsciLexerVHDL_SuperSetFont(@ptrCast(self), @ptrCast(f), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, f: QtC.QFont, style: i32) callconv(.c) void `
    ///
    pub fn OnSetFont(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetFont(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerVHDL_SetPaper(@ptrCast(self), @ptrCast(c), @bitCast(style));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` c: QtC.QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn SuperSetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        qtc.QsciLexerVHDL_SuperSetPaper(@ptrCast(self), @ptrCast(c), @bitCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, c: QtC.QColor, style: i32) callconv(.c) void `
    ///
    pub fn OnSetPaper(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnSetPaper(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerVHDL_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerVHDL_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerVHDL_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerVHDL_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerVHDL_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerVHDL_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerVHDL_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciLexerVHDL_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerVHDL_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerVHDL_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerVHDL_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciLexerVHDL_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciLexerVHDL_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
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
        var _bytearray: qtc.libqt_string = qtc.QsciLexerVHDL_TextAsBytes(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qscilexervhdl.TextAsBytes: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL `
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
        var _bytearray: qtc.libqt_string = qtc.QsciLexerVHDL_SuperTextAsBytes(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qscilexervhdl.TextAsBytes: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnTextAsBytes(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciLexerVHDL_OnTextAsBytes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BytesAsText(self: ?*anyopaque, bytes: [:0]const u8, size: i32, allocator: std.mem.Allocator) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerVHDL_BytesAsText(@ptrCast(self), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexervhdl.BytesAsText: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperBytesAsText(self: ?*anyopaque, bytes: [:0]const u8, size: i32, allocator: std.mem.Allocator) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerVHDL_SuperBytesAsText(@ptrCast(self), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscilexervhdl.BytesAsText: Memory allocation failed");
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
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBytesAsText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerVHDL_OnBytesAsText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciLexerVHDL_Sender(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciLexerVHDL_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QsciLexerVHDL_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciLexerVHDL_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerVHDL_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerVHDL_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerVHDL_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciLexerVHDL_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL`
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciLexerVHDL_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    /// ` callback: *const fn (self: QtC.QsciLexerVHDL, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QsciLexerVHDL `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QsciLexerVHDL_Delete(@ptrCast(self));
    }
};

pub const enums = struct {
    pub const QsciLexerVHDL = enum(i32) {
        pub const Default: i32 = 0;
        pub const Comment: i32 = 1;
        pub const CommentLine: i32 = 2;
        pub const Number: i32 = 3;
        pub const String: i32 = 4;
        pub const Operator: i32 = 5;
        pub const Identifier: i32 = 6;
        pub const UnclosedString: i32 = 7;
        pub const Keyword: i32 = 8;
        pub const StandardOperator: i32 = 9;
        pub const Attribute: i32 = 10;
        pub const StandardFunction: i32 = 11;
        pub const StandardPackage: i32 = 12;
        pub const StandardType: i32 = 13;
        pub const KeywordSet7: i32 = 14;
        pub const CommentBlock: i32 = 15;
    };
};
