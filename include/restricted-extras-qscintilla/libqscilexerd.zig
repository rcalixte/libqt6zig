const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscilexerd.html
pub const qscilexerd = struct {
    /// New constructs a new QsciLexerD object.
    ///
    ///
    pub fn New() ?*C.QsciLexerD {
        return C.QsciLexerD_new();
    }

    /// New2 constructs a new QsciLexerD object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QsciLexerD {
        return C.QsciLexerD_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QsciLexerD_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciLexerD, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QsciLexerD_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QsciLexerD, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciLexerD_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QsciLexerD_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerD, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciLexerD_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QsciLexerD_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#language)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn Language(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_Language(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#lexer)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn Lexer(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_Lexer(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#autoCompletionWordSeparators)
    ///
    /// ``` self: ?*C.QsciLexerD, allocator: std.mem.Allocator ```
    pub fn AutoCompletionWordSeparators(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QsciLexerD_AutoCompletionWordSeparators(@ptrCast(self));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockEnd)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn BlockEnd(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_BlockEnd(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStart)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn BlockStart(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_BlockStart(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStartKeyword)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn BlockStartKeyword(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_BlockStartKeyword(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#braceStyle)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn BraceStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerD_BraceStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#wordCharacters)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn WordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultColor)
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn DefaultColor(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_DefaultColor(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultEolFill)
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn DefaultEolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerD_DefaultEolFill(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultFont)
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn DefaultFont(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerD_DefaultFont(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultPaper)
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn DefaultPaper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_DefaultPaper(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#keywords)
    ///
    /// ``` self: ?*C.QsciLexerD, set: i32 ```
    pub fn Keywords(self: ?*anyopaque, set: i32) []const u8 {
        const _ret = C.QsciLexerD_Keywords(@ptrCast(self), @intCast(set));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#description)
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, style: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciLexerD_Description(@ptrCast(self), @intCast(style));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#refreshProperties)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn RefreshProperties(self: ?*anyopaque) void {
        C.QsciLexerD_RefreshProperties(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#foldAtElse)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn FoldAtElse(self: ?*anyopaque) bool {
        return C.QsciLexerD_FoldAtElse(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#foldComments)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn FoldComments(self: ?*anyopaque) bool {
        return C.QsciLexerD_FoldComments(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#foldCompact)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn FoldCompact(self: ?*anyopaque) bool {
        return C.QsciLexerD_FoldCompact(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#setFoldAtElse)
    ///
    /// ``` self: ?*C.QsciLexerD, fold: bool ```
    pub fn SetFoldAtElse(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerD_SetFoldAtElse(@ptrCast(self), fold);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, bool) callconv(.c) void ```
    pub fn OnSetFoldAtElse(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerD_OnSetFoldAtElse(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerD, fold: bool ```
    pub fn QBaseSetFoldAtElse(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerD_QBaseSetFoldAtElse(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#setFoldComments)
    ///
    /// ``` self: ?*C.QsciLexerD, fold: bool ```
    pub fn SetFoldComments(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerD_SetFoldComments(@ptrCast(self), fold);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, bool) callconv(.c) void ```
    pub fn OnSetFoldComments(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerD_OnSetFoldComments(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerD, fold: bool ```
    pub fn QBaseSetFoldComments(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerD_QBaseSetFoldComments(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#setFoldCompact)
    ///
    /// ``` self: ?*C.QsciLexerD, fold: bool ```
    pub fn SetFoldCompact(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerD_SetFoldCompact(@ptrCast(self), fold);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, bool) callconv(.c) void ```
    pub fn OnSetFoldCompact(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciLexerD_OnSetFoldCompact(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerD, fold: bool ```
    pub fn QBaseSetFoldCompact(self: ?*anyopaque, fold: bool) void {
        C.QsciLexerD_QBaseSetFoldCompact(@ptrCast(self), fold);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#readProperties)
    ///
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn ReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerD_ReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QSettings, []const u8) callconv(.c) bool ```
    pub fn OnReadProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) bool) void {
        C.QsciLexerD_OnReadProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn QBaseReadProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerD_QBaseReadProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#writeProperties)
    ///
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn WriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerD_WriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QSettings, []const u8) callconv(.c) bool ```
    pub fn OnWriteProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) bool) void {
        C.QsciLexerD_OnWriteProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn QBaseWriteProperties(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QsciLexerD_QBaseWriteProperties(@ptrCast(self), @ptrCast(qs), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QsciLexerD_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QsciLexerD_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockEnd)
    ///
    /// ``` self: ?*C.QsciLexerD, style: ?*i32 ```
    pub fn BlockEnd1(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_BlockEnd1(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStart)
    ///
    /// ``` self: ?*C.QsciLexerD, style: ?*i32 ```
    pub fn BlockStart1(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_BlockStart1(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStartKeyword)
    ///
    /// ``` self: ?*C.QsciLexerD, style: ?*i32 ```
    pub fn BlockStartKeyword1(self: ?*anyopaque, style: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_BlockStartKeyword1(@ptrCast(self), @intCast(style));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn Apis(self: ?*anyopaque) ?*C.QsciAbstractAPIs {
        return C.QsciLexer_Apis(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn AutoIndentStyle(self: ?*anyopaque) i32 {
        return C.QsciLexer_AutoIndentStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn Editor(self: ?*anyopaque) ?*C.QsciScintilla {
        return C.QsciLexer_Editor(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
    ///
    /// ``` self: ?*C.QsciLexerD, apis: ?*C.QsciAbstractAPIs ```
    pub fn SetAPIs(self: ?*anyopaque, apis: ?*anyopaque) void {
        C.QsciLexer_SetAPIs(@ptrCast(self), @ptrCast(apis));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
    ///
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor ```
    pub fn SetDefaultColor(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciLexer_SetDefaultColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
    ///
    /// ``` self: ?*C.QsciLexerD, f: ?*C.QFont ```
    pub fn SetDefaultFont(self: ?*anyopaque, f: ?*anyopaque) void {
        C.QsciLexer_SetDefaultFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
    ///
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor ```
    pub fn SetDefaultPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciLexer_SetDefaultPaper(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
    ///
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings ```
    pub fn ReadSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return C.QsciLexer_ReadSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
    ///
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings ```
    pub fn WriteSettings(self: ?*anyopaque, qs: ?*anyopaque) bool {
        return C.QsciLexer_WriteSettings(@ptrCast(self), @ptrCast(qs));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
    ///
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerD, eolfilled: bool, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerD, f: ?*C.QFont, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor, style: i32 ```
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
    /// ``` self: ?*C.QsciLexerD, prop: []const u8, val: []const u8 ```
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
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn ReadSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = @constCast(prefix.ptr);
        return C.QsciLexer_ReadSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
    ///
    /// ``` self: ?*C.QsciLexerD, qs: ?*C.QSettings, prefix: []const u8 ```
    pub fn WriteSettings2(self: ?*anyopaque, qs: ?*anyopaque, prefix: []const u8) bool {
        const prefix_Cstring = @constCast(prefix.ptr);
        return C.QsciLexer_WriteSettings2(@ptrCast(self), @ptrCast(qs), prefix_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QsciLexerD, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciLexerD, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QsciLexerD, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QsciLexerD, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciLexerD, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QsciLexerD, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QsciLexerD, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciLexerD, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QsciLexerD, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QsciLexerD, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QsciLexerD, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QsciLexerD ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QsciLexerD, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QsciLexerD, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QsciLexerD, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciLexerD ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciLexerD ```
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
    /// ``` self: ?*C.QsciLexerD ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QsciLexerD, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciLexerD, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QsciLexerD, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciLexerD, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QsciLexerD ```
    pub fn LexerId(self: ?*anyopaque) i32 {
        return C.QsciLexerD_LexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseLexerId(self: ?*anyopaque) i32 {
        return C.QsciLexerD_QBaseLexerId(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) i32 ```
    pub fn OnLexerId(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerD_OnLexerId(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn AutoCompletionFillups(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_AutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseAutoCompletionFillups(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciLexerD_QBaseAutoCompletionFillups(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) []const u8 ```
    pub fn OnAutoCompletionFillups(self: ?*anyopaque, slot: fn () callconv(.c) []const u8) void {
        C.QsciLexerD_OnAutoCompletionFillups(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn BlockLookback(self: ?*anyopaque) i32 {
        return C.QsciLexerD_BlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseBlockLookback(self: ?*anyopaque) i32 {
        return C.QsciLexerD_QBaseBlockLookback(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) i32 ```
    pub fn OnBlockLookback(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerD_OnBlockLookback(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return C.QsciLexerD_CaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseCaseSensitive(self: ?*anyopaque) bool {
        return C.QsciLexerD_QBaseCaseSensitive(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) bool ```
    pub fn OnCaseSensitive(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QsciLexerD_OnCaseSensitive(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn Color(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_Color(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn QBaseColor(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_QBaseColor(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) ?*C.QColor ```
    pub fn OnColor(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerD_OnColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn EolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerD_EolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn QBaseEolFill(self: ?*anyopaque, style: i32) bool {
        return C.QsciLexerD_QBaseEolFill(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) bool ```
    pub fn OnEolFill(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QsciLexerD_OnEolFill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn Font(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerD_Font(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn QBaseFont(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerD_QBaseFont(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) ?*C.QFont ```
    pub fn OnFont(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QFont) void {
        C.QsciLexerD_OnFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn IndentationGuideView(self: ?*anyopaque) i32 {
        return C.QsciLexerD_IndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseIndentationGuideView(self: ?*anyopaque) i32 {
        return C.QsciLexerD_QBaseIndentationGuideView(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) i32 ```
    pub fn OnIndentationGuideView(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerD_OnIndentationGuideView(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn DefaultStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerD_DefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseDefaultStyle(self: ?*anyopaque) i32 {
        return C.QsciLexerD_QBaseDefaultStyle(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) i32 ```
    pub fn OnDefaultStyle(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerD_OnDefaultStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn Paper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_Paper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn QBasePaper(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_QBasePaper(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) ?*C.QColor ```
    pub fn OnPaper(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerD_OnPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn DefaultColorWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_DefaultColorWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn QBaseDefaultColorWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_QBaseDefaultColorWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) ?*C.QColor ```
    pub fn OnDefaultColorWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerD_OnDefaultColorWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn DefaultFontWithStyle(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerD_DefaultFontWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn QBaseDefaultFontWithStyle(self: ?*anyopaque, style: i32) ?*C.QFont {
        return C.QsciLexerD_QBaseDefaultFontWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) ?*C.QFont ```
    pub fn OnDefaultFontWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QFont) void {
        C.QsciLexerD_OnDefaultFontWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn DefaultPaperWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_DefaultPaperWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, style: i32 ```
    pub fn QBaseDefaultPaperWithStyle(self: ?*anyopaque, style: i32) ?*C.QColor {
        return C.QsciLexerD_QBaseDefaultPaperWithStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) ?*C.QColor ```
    pub fn OnDefaultPaperWithStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QColor) void {
        C.QsciLexerD_OnDefaultPaperWithStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, editor: ?*C.QsciScintilla ```
    pub fn SetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QsciLexerD_SetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, editor: ?*C.QsciScintilla ```
    pub fn QBaseSetEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QsciLexerD_QBaseSetEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QsciScintilla) callconv(.c) void ```
    pub fn OnSetEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerD_OnSetEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn StyleBitsNeeded(self: ?*anyopaque) i32 {
        return C.QsciLexerD_StyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseStyleBitsNeeded(self: ?*anyopaque) i32 {
        return C.QsciLexerD_QBaseStyleBitsNeeded(@ptrCast(self));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) i32 ```
    pub fn OnStyleBitsNeeded(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerD_OnStyleBitsNeeded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, autoindentstyle: i32 ```
    pub fn SetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        C.QsciLexerD_SetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, autoindentstyle: i32 ```
    pub fn QBaseSetAutoIndentStyle(self: ?*anyopaque, autoindentstyle: i32) void {
        C.QsciLexerD_QBaseSetAutoIndentStyle(@ptrCast(self), @intCast(autoindentstyle));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, i32) callconv(.c) void ```
    pub fn OnSetAutoIndentStyle(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerD_OnSetAutoIndentStyle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor, style: i32 ```
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerD_SetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor, style: i32 ```
    pub fn QBaseSetColor(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerD_QBaseSetColor(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnSetColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerD_OnSetColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, eoffill: bool, style: i32 ```
    pub fn SetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        C.QsciLexerD_SetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, eoffill: bool, style: i32 ```
    pub fn QBaseSetEolFill(self: ?*anyopaque, eoffill: bool, style: i32) void {
        C.QsciLexerD_QBaseSetEolFill(@ptrCast(self), eoffill, @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, bool, i32) callconv(.c) void ```
    pub fn OnSetEolFill(self: ?*anyopaque, slot: fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        C.QsciLexerD_OnSetEolFill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, f: ?*C.QFont, style: i32 ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        C.QsciLexerD_SetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, f: ?*C.QFont, style: i32 ```
    pub fn QBaseSetFont(self: ?*anyopaque, f: ?*anyopaque, style: i32) void {
        C.QsciLexerD_QBaseSetFont(@ptrCast(self), @ptrCast(f), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QFont, i32) callconv(.c) void ```
    pub fn OnSetFont(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerD_OnSetFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciLexer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor, style: i32 ```
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerD_SetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, c: ?*C.QColor, style: i32 ```
    pub fn QBaseSetPaper(self: ?*anyopaque, c: ?*anyopaque, style: i32) void {
        C.QsciLexerD_QBaseSetPaper(@ptrCast(self), @ptrCast(c), @intCast(style));
    }

    /// Inherited from QsciLexer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QColor, i32) callconv(.c) void ```
    pub fn OnSetPaper(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        C.QsciLexerD_OnSetPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerD_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerD_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerD_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerD_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QsciLexerD_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerD_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerD_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerD_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerD_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerD_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerD_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerD_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerD_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciLexerD_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerD_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerD_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerD_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerD_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerD_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciLexerD_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciLexerD_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciLexerD_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciLexerD_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QsciLexerD_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciLexerD_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciLexerD_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciLexerD_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciLexerD_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciLexerD_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QsciLexerD_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciLexerD_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciLexerD_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciLexerD, slot: fn (?*C.QsciLexerD, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciLexerD_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QsciLexerD ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QsciLexerD_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscilexerd.html#types
pub const enums = struct {
    pub const QsciLexerD = enum {
        pub const Default: i32 = 0;
        pub const Comment: i32 = 1;
        pub const CommentLine: i32 = 2;
        pub const CommentDoc: i32 = 3;
        pub const CommentNested: i32 = 4;
        pub const Number: i32 = 5;
        pub const Keyword: i32 = 6;
        pub const KeywordSecondary: i32 = 7;
        pub const KeywordDoc: i32 = 8;
        pub const Typedefs: i32 = 9;
        pub const String: i32 = 10;
        pub const UnclosedString: i32 = 11;
        pub const Character: i32 = 12;
        pub const Operator: i32 = 13;
        pub const Identifier: i32 = 14;
        pub const CommentLineDoc: i32 = 15;
        pub const CommentDocKeyword: i32 = 16;
        pub const CommentDocKeywordError: i32 = 17;
        pub const BackquoteString: i32 = 18;
        pub const RawString: i32 = 19;
        pub const KeywordSet5: i32 = 20;
        pub const KeywordSet6: i32 = 21;
        pub const KeywordSet7: i32 = 22;
    };
};
