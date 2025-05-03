const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qscilexerpython_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscilexerpython.html
pub const qscilexerpython = struct {
    /// New constructs a new QsciLexerPython object.
    ///
    ///
    pub fn New() ?*C.QsciLexerPython {
        return C.QsciLexerPython_new();
    }

    /// New2 constructs a new QsciLexerPython object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QsciLexerPython {
        return C.QsciLexerPython_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QsciLexerPython_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciLexerPython, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QsciLexerPython_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QsciLexerPython, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciLexerPython_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QsciLexerPython_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerPython, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciLexerPython_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QsciLexerPython_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#language)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn Language(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_Language(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#lexer)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn Lexer(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_Lexer(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#autoCompletionWordSeparators)
    ///
    /// ``` self: ?*C.QsciLexerPython, allocator: std.mem.Allocator ```
    pub fn AutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QsciLexerPython_AutoCompletionWordSeparators(@ptrCast(self));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockLookback)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn BlockLookback(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_BlockLookback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockStart)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn BlockStart(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_BlockStart(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#braceStyle)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn BraceStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_BraceStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultColor)
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn DefaultColor(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_DefaultColor(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultEolFill)
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn DefaultEolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerPython_DefaultEolFill(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultFont)
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn DefaultFont(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerPython_DefaultFont(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultPaper)
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn DefaultPaper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_DefaultPaper(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#indentationGuideView)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn IndentationGuideView(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_IndentationGuideView(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) i32 ```
    pub fn OnIndentationGuideView(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerPython_OnIndentationGuideView(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseIndentationGuideView(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_QBaseIndentationGuideView(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#keywords)
    ///
    /// ``` self: ?*C.QsciLexerPython, set: i32 ```
    pub fn Keywords(self: ?*anyopaque, set: i32) []const u8 {
        const _ret = C.QsciLexerPython_Keywords(@ptrCast(self), @intCast(set));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#description)
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, style: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciLexerPython_Description(@ptrCast(self), @intCast(style));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#refreshProperties)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn RefreshProperties(self: ?*anyopaque) void {
        C.QsciLexerPython_RefreshProperties(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldComments)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn FoldComments(self: ?*anyopaque) bool {
        return C.QsciLexerPython_FoldComments(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldCompact)
    ///
    /// ``` self: ?*C.QsciLexerPython, fold: bool ```
    pub fn SetFoldCompact(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerPython_SetFoldCompact(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldCompact)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn FoldCompact(self: ?*anyopaque) bool {
        return C.QsciLexerPython_FoldCompact(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldQuotes)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn FoldQuotes(self: ?*anyopaque) bool {
        return C.QsciLexerPython_FoldQuotes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#indentationWarning)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn IndentationWarning(self: ?*anyopaque) i64 {
        return C.QsciLexerPython_IndentationWarning(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setHighlightSubidentifiers)
    ///
    /// ``` self: ?*C.QsciLexerPython, enabled: bool ```
    pub fn SetHighlightSubidentifiers(self: ?*anyopaque, enabled: bool) void {
        C.QsciLexerPython_SetHighlightSubidentifiers(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#highlightSubidentifiers)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn HighlightSubidentifiers(self: ?*anyopaque) bool {
        return C.QsciLexerPython_HighlightSubidentifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setStringsOverNewlineAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython, allowed: bool ```
    pub fn SetStringsOverNewlineAllowed(self: ?*anyopaque, allowed: bool) void {
        C.QsciLexerPython_SetStringsOverNewlineAllowed(@ptrCast(self), allowed);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#stringsOverNewlineAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn StringsOverNewlineAllowed(self: ?*anyopaque) bool {
        return C.QsciLexerPython_StringsOverNewlineAllowed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV2UnicodeAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython, allowed: bool ```
    pub fn SetV2UnicodeAllowed(self: ?*anyopaque, allowed: bool) void {
        C.QsciLexerPython_SetV2UnicodeAllowed(@ptrCast(self), allowed);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v2UnicodeAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn V2UnicodeAllowed(self: ?*anyopaque) bool {
        return C.QsciLexerPython_V2UnicodeAllowed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV3BinaryOctalAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython, allowed: bool ```
    pub fn SetV3BinaryOctalAllowed(self: ?*anyopaque, allowed: bool) void {
        C.QsciLexerPython_SetV3BinaryOctalAllowed(@ptrCast(self), allowed);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v3BinaryOctalAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn V3BinaryOctalAllowed(self: ?*anyopaque) bool {
        return C.QsciLexerPython_V3BinaryOctalAllowed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV3BytesAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython, allowed: bool ```
    pub fn SetV3BytesAllowed(self: ?*anyopaque, allowed: bool) void {
        C.QsciLexerPython_SetV3BytesAllowed(@ptrCast(self), allowed);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v3BytesAllowed)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn V3BytesAllowed(self: ?*anyopaque) bool {
        return C.QsciLexerPython_V3BytesAllowed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldComments)
    ///
    /// ``` self: ?*C.QsciLexerPython, fold: bool ```
    pub fn SetFoldComments(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerPython_SetFoldComments(@ptrCast(self), fold);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, bool) callconv(.c) void ```
    pub fn OnSetFoldComments(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerPython_OnSetFoldComments(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerPython, fold: bool ```
    pub fn QBaseSetFoldComments(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerPython_QBaseSetFoldComments(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldQuotes)
    ///
    /// ``` self: ?*C.QsciLexerPython, fold: bool ```
    pub fn SetFoldQuotes(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerPython_SetFoldQuotes(@ptrCast(self), fold);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, bool) callconv(.c) void ```
    pub fn OnSetFoldQuotes(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerPython_OnSetFoldQuotes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerPython, fold: bool ```
    pub fn QBaseSetFoldQuotes(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerPython_QBaseSetFoldQuotes(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setIndentationWarning)
    ///
    /// ``` self: ?*C.QsciLexerPython, warn: qscilexerpython_enums.IndentationWarning ```
    pub fn SetIndentationWarning(self: ?*anyopaque, warn: i64) void {
        C.QsciLexerPython_SetIndentationWarning(@ptrCast(self), @intCast(warn));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, qscilexerpython_enums.IndentationWarning) callconv(.c) void ```
    pub fn OnSetIndentationWarning(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QsciLexerPython_OnSetIndentationWarning(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerPython, warn: qscilexerpython_enums.IndentationWarning ```
    pub fn QBaseSetIndentationWarning(self: ?*anyopaque, warn: i64) void {
        C.QsciLexerPython_QBaseSetIndentationWarning(@ptrCast(self), @intCast(warn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#readProperties)
    ///
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn ReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerPython_ReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QSettings, []const u8) callconv(.c) bool ```
    pub fn OnReadProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) bool) void {
        C.QsciLexerPython_OnReadProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn QBaseReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerPython_QBaseReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#writeProperties)
    ///
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn WriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerPython_WriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QSettings, []const u8) callconv(.c) bool ```
    pub fn OnWriteProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) bool) void {
        C.QsciLexerPython_OnWriteProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn QBaseWriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerPython_QBaseWriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QsciLexerPython_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QsciLexerPython_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockStart)
    ///
    /// ``` self: ?*C.QsciLexerPython, style: ?*i32 ```
    pub fn BlockStart1(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_BlockStart1(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn Apis(self: ?*anyopaque) ?*C.QsciAbstractAPIs {
        return C.QsciLexer_Apis(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn AutoIndentStyle(self: ?*anyopaque) i32 {
        return C.QsciLexer_AutoIndentStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn Editor(self: ?*anyopaque) ?*C.QsciScintilla {
        return C.QsciLexer_Editor(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
    ///
    /// ``` self: ?*C.QsciLexerPython, apis: ?*C.QsciAbstractAPIs ```
    pub fn SetAPIs(self: ?*anyopaque, apis: ?*anyopaque) void {
        C.QsciLexer_SetAPIs(@ptrCast(self), @ptrCast(apis));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
    ///
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor ```
    pub fn SetDefaultColor(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciLexer_SetDefaultColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
    ///
    /// ``` self: ?*C.QsciLexerPython, f: ?*C.QFont ```
    pub fn SetDefaultFont(self: ?*anyopaque, f: ?*anyopaque) void {
        C.QsciLexer_SetDefaultFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
    ///
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor ```
    pub fn SetDefaultPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciLexer_SetDefaultPaper(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
    ///
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings ```
    pub fn ReadSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return C.QsciLexer_ReadSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
    ///
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings ```
    pub fn WriteSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return C.QsciLexer_WriteSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
    ///
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerPython, eolfilled: bool, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerPython, f: ?*C.QFont, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerPython, prop: []const u8, val: []const u8 ```
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
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn ReadSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = @constCast(prefix.ptr);
        return C.QsciLexer_ReadSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
    ///
    /// ``` self: ?*C.QsciLexerPython, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn WriteSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = @constCast(prefix.ptr);
        return C.QsciLexer_WriteSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QsciLexerPython, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciLexerPython, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QsciLexerPython, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QsciLexerPython, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciLexerPython, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QsciLexerPython, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QsciLexerPython, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciLexerPython, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QsciLexerPython, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QsciLexerPython, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QsciLexerPython, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QsciLexerPython, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QsciLexerPython, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QsciLexerPython, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
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
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QsciLexerPython, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciLexerPython, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QsciLexerPython, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciLexerPython, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn LexerId(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_LexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseLexerId(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_QBaseLexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) i32 ```
    pub fn OnLexerId(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerPython_OnLexerId(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn AutoCompletionFillups(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_AutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseAutoCompletionFillups(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_QBaseAutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) []const u8 ```
    pub fn OnAutoCompletionFillups(self: ?*anyopaque, slot: fn () callconv(.c) []const u8) void {
        C.QsciLexerPython_OnAutoCompletionFillups(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: ?*i32 ```
    pub fn BlockEnd(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_BlockEnd(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: ?*i32 ```
    pub fn QBaseBlockEnd(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_QBaseBlockEnd(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*i32) callconv(.c) []const u8 ```
    pub fn OnBlockEnd(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        C.QsciLexerPython_OnBlockEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: ?*i32 ```
    pub fn BlockStartKeyword(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_BlockStartKeyword(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: ?*i32 ```
    pub fn QBaseBlockStartKeyword(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_QBaseBlockStartKeyword(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*i32) callconv(.c) []const u8 ```
    pub fn OnBlockStartKeyword(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        C.QsciLexerPython_OnBlockStartKeyword(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return C.QsciLexerPython_CaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseCaseSensitive(self: ?*anyopaque) bool {
        return C.QsciLexerPython_QBaseCaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) bool ```
    pub fn OnCaseSensitive(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QsciLexerPython_OnCaseSensitive(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn Color(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_Color(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn QBaseColor(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_QBaseColor(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) ?*C.QColor ```
    pub fn OnColor(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerPython_OnColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn EolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerPython_EolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn QBaseEolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerPython_QBaseEolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) bool ```
    pub fn OnEolFill(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QsciLexerPython_OnEolFill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn Font(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerPython_Font(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn QBaseFont(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerPython_QBaseFont(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) ?*C.QFont ```
    pub fn OnFont(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QFont) void {
        C.QsciLexerPython_OnFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn DefaultStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_DefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseDefaultStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_QBaseDefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) i32 ```
    pub fn OnDefaultStyle(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerPython_OnDefaultStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn Paper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_Paper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn QBasePaper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_QBasePaper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) ?*C.QColor ```
    pub fn OnPaper(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerPython_OnPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn DefaultColorWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_DefaultColorWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn QBaseDefaultColorWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_QBaseDefaultColorWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) ?*C.QColor ```
    pub fn OnDefaultColorWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerPython_OnDefaultColorWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn DefaultFontWithStyle(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerPython_DefaultFontWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn QBaseDefaultFontWithStyle(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerPython_QBaseDefaultFontWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) ?*C.QFont ```
    pub fn OnDefaultFontWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QFont) void {
        C.QsciLexerPython_OnDefaultFontWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn DefaultPaperWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_DefaultPaperWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, style: i32 ```
    pub fn QBaseDefaultPaperWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerPython_QBaseDefaultPaperWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) ?*C.QColor ```
    pub fn OnDefaultPaperWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerPython_OnDefaultPaperWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, editor: ?*C.QsciScintilla ```
    pub fn SetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QsciLexerPython_SetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, editor: ?*C.QsciScintilla ```
    pub fn QBaseSetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QsciLexerPython_QBaseSetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QsciScintilla) callconv(.c) void ```
    pub fn OnSetEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerPython_OnSetEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn StyleBitsNeeded(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_StyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseStyleBitsNeeded(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_QBaseStyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) i32 ```
    pub fn OnStyleBitsNeeded(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerPython_OnStyleBitsNeeded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn WordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseWordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerPython_QBaseWordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) []const u8 ```
    pub fn OnWordCharacters(self: ?*anyopaque, slot: fn () callconv(.c) []const u8) void {
        C.QsciLexerPython_OnWordCharacters(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, autoindentstyle: i32 ```
    pub fn SetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        C.QsciLexerPython_SetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, autoindentstyle: i32 ```
    pub fn QBaseSetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        C.QsciLexerPython_QBaseSetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, i32) callconv(.c) void ```
    pub fn OnSetAutoIndentStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerPython_OnSetAutoIndentStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor, style: i32 ```
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerPython_SetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor, style: i32 ```
    pub fn QBaseSetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerPython_QBaseSetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnSetColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerPython_OnSetColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, eoffill: bool, style: i32 ```
    pub fn SetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        C.QsciLexerPython_SetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, eoffill: bool, style: i32 ```
    pub fn QBaseSetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        C.QsciLexerPython_QBaseSetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, bool, i32) callconv(.c) void ```
    pub fn OnSetEolFill(self: ?*anyopaque, slot: fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        C.QsciLexerPython_OnSetEolFill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, f: ?*C.QFont, style: i32 ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        C.QsciLexerPython_SetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, f: ?*C.QFont, style: i32 ```
    pub fn QBaseSetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        C.QsciLexerPython_QBaseSetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QFont, i32) callconv(.c) void ```
    pub fn OnSetFont(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerPython_OnSetFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor, style: i32 ```
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerPython_SetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, c: ?*C.QColor, style: i32 ```
    pub fn QBaseSetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerPython_QBaseSetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnSetPaper(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerPython_OnSetPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerPython_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerPython_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerPython_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerPython_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerPython_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerPython_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerPython_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerPython_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerPython_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerPython_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerPython_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerPython_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerPython_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerPython_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerPython_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerPython_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerPython_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerPython_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerPython_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerPython_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerPython_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciLexerPython_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciLexerPython_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QsciLexerPython_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciLexerPython_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerPython_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciLexerPython_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciLexerPython_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QsciLexerPython_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciLexerPython_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciLexerPython_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerPython, slot: fn (?*C.QsciLexerPython, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerPython_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QsciLexerPython ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QsciLexerPython_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscilexerpython.html#types
pub const enums = struct {
    pub const QsciLexerPython = enum {
        pub const Default: i32 = 0;
        pub const Comment: i32 = 1;
        pub const Number: i32 = 2;
        pub const DoubleQuotedString: i32 = 3;
        pub const SingleQuotedString: i32 = 4;
        pub const Keyword: i32 = 5;
        pub const TripleSingleQuotedString: i32 = 6;
        pub const TripleDoubleQuotedString: i32 = 7;
        pub const ClassName: i32 = 8;
        pub const FunctionMethodName: i32 = 9;
        pub const Operator: i32 = 10;
        pub const Identifier: i32 = 11;
        pub const CommentBlock: i32 = 12;
        pub const UnclosedString: i32 = 13;
        pub const HighlightedIdentifier: i32 = 14;
        pub const Decorator: i32 = 15;
        pub const DoubleQuotedFString: i32 = 16;
        pub const SingleQuotedFString: i32 = 17;
        pub const TripleSingleQuotedFString: i32 = 18;
        pub const TripleDoubleQuotedFString: i32 = 19;
    };

    pub const IndentationWarning = enum {
        pub const NoWarning: i32 = 0;
        pub const Inconsistent: i32 = 1;
        pub const TabsAfterSpaces: i32 = 2;
        pub const Spaces: i32 = 3;
        pub const Tabs: i32 = 4;
    };
};
