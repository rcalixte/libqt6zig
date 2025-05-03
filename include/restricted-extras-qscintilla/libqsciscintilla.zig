const C = @import("qt6c");
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsciscintilla_enums = enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsciscintilla.html
pub const qsciscintilla = struct {
    /// New constructs a new QsciScintilla object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QsciScintilla {
        return C.QsciScintilla_new(@ptrCast(parent));
    }

    /// New2 constructs a new QsciScintilla object.
    ///
    ///
    pub fn New2() ?*C.QsciScintilla {
        return C.QsciScintilla_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QsciScintilla_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciScintilla, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QsciScintilla_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QsciScintilla, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciScintilla_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QsciScintilla_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QsciScintilla_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QsciScintilla_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#apiContext)
    ///
    /// ``` self: ?*C.QsciScintilla, pos: i32, context_start: ?*i32, last_word_start: ?*i32, allocator: std.mem.Allocator ```
    pub fn ApiContext(self: ?*anyopaque, pos: i32, context_start: ?*anyopaque, last_word_start: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QsciScintilla_ApiContext(@ptrCast(self), @intCast(pos), @intCast(context_start), @intCast(last_word_start));
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

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, ?*i32, ?*i32) callconv(.c) [][]const u8 ```
    pub fn OnApiContext(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) [][]const u8) void {
        C.QsciScintilla_OnApiContext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, pos: i32, context_start: ?*i32, last_word_start: ?*i32, allocator: std.mem.Allocator ```
    pub fn QBaseApiContext(self: ?*anyopaque, pos: i32, context_start: ?*anyopaque, last_word_start: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QsciScintilla_QBaseApiContext(@ptrCast(self), @intCast(pos), @intCast(context_start), @intCast(last_word_start));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#annotate)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, text: []const u8, style: i32 ```
    pub fn Annotate(self: ?*anyopaque, line: i32, text: []const u8, style: i32) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_Annotate(@ptrCast(self), @intCast(line), text_str, @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#annotate)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, text: []const u8, style: ?*C.QsciStyle ```
    pub fn Annotate2(self: ?*anyopaque, line: i32, text: []const u8, style: ?*anyopaque) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_Annotate2(@ptrCast(self), @intCast(line), text_str, @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#annotate)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, text: ?*C.QsciStyledText ```
    pub fn Annotate3(self: ?*anyopaque, line: i32, text: ?*anyopaque) void {
        C.QsciScintilla_Annotate3(@ptrCast(self), @intCast(line), @ptrCast(text));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#annotation)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, allocator: std.mem.Allocator ```
    pub fn Annotation(self: ?*anyopaque, line: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciScintilla_Annotation(@ptrCast(self), @intCast(line));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#annotationDisplay)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AnnotationDisplay(self: ?*anyopaque) i64 {
        return C.QsciScintilla_AnnotationDisplay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearAnnotations)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ClearAnnotations(self: ?*anyopaque) void {
        C.QsciScintilla_ClearAnnotations(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompletionCaseSensitivity)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompletionCaseSensitivity(self: ?*anyopaque) bool {
        return C.QsciScintilla_AutoCompletionCaseSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompletionFillupsEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompletionFillupsEnabled(self: ?*anyopaque) bool {
        return C.QsciScintilla_AutoCompletionFillupsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompletionReplaceWord)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompletionReplaceWord(self: ?*anyopaque) bool {
        return C.QsciScintilla_AutoCompletionReplaceWord(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompletionShowSingle)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompletionShowSingle(self: ?*anyopaque) bool {
        return C.QsciScintilla_AutoCompletionShowSingle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompletionSource)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompletionSource(self: ?*anyopaque) i64 {
        return C.QsciScintilla_AutoCompletionSource(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompletionThreshold)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompletionThreshold(self: ?*anyopaque) i32 {
        return C.QsciScintilla_AutoCompletionThreshold(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompletionUseSingle)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompletionUseSingle(self: ?*anyopaque) i64 {
        return C.QsciScintilla_AutoCompletionUseSingle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoIndent)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoIndent(self: ?*anyopaque) bool {
        return C.QsciScintilla_AutoIndent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#backspaceUnindents)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BackspaceUnindents(self: ?*anyopaque) bool {
        return C.QsciScintilla_BackspaceUnindents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#beginUndoAction)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BeginUndoAction(self: ?*anyopaque) void {
        C.QsciScintilla_BeginUndoAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#braceMatching)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BraceMatching(self: ?*anyopaque) i64 {
        return C.QsciScintilla_BraceMatching(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#bytes)
    ///
    /// ``` self: ?*C.QsciScintilla, start: i32, end: i32, allocator: std.mem.Allocator ```
    pub fn Bytes(self: ?*anyopaque, start: i32, end: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QsciScintilla_Bytes(@ptrCast(self), @intCast(start), @intCast(end));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#callTipsPosition)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CallTipsPosition(self: ?*anyopaque) i64 {
        return C.QsciScintilla_CallTipsPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#callTipsStyle)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CallTipsStyle(self: ?*anyopaque) i64 {
        return C.QsciScintilla_CallTipsStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#callTipsVisible)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CallTipsVisible(self: ?*anyopaque) i32 {
        return C.QsciScintilla_CallTipsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#cancelFind)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CancelFind(self: ?*anyopaque) void {
        C.QsciScintilla_CancelFind(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#cancelList)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CancelList(self: ?*anyopaque) void {
        C.QsciScintilla_CancelList(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#caseSensitive)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return C.QsciScintilla_CaseSensitive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearFolds)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ClearFolds(self: ?*anyopaque) void {
        C.QsciScintilla_ClearFolds(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearIndicatorRange)
    ///
    /// ``` self: ?*C.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32 ```
    pub fn ClearIndicatorRange(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        C.QsciScintilla_ClearIndicatorRange(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearRegisteredImages)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ClearRegisteredImages(self: ?*anyopaque) void {
        C.QsciScintilla_ClearRegisteredImages(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#color)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Color(self: ?*anyopaque) ?*C.QColor {
        return C.QsciScintilla_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#contractedFolds)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn ContractedFolds(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: C.struct_libqt_list = C.QsciScintilla_ContractedFolds(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#convertEols)
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.EolMode ```
    pub fn ConvertEols(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_ConvertEols(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#createStandardContextMenu)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CreateStandardContextMenu(self: ?*anyopaque) ?*C.QMenu {
        return C.QsciScintilla_CreateStandardContextMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#document)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Document(self: ?*anyopaque) ?*C.QsciDocument {
        return C.QsciScintilla_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#endUndoAction)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EndUndoAction(self: ?*anyopaque) void {
        C.QsciScintilla_EndUndoAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#edgeColor)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EdgeColor(self: ?*anyopaque) ?*C.QColor {
        return C.QsciScintilla_EdgeColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#edgeColumn)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EdgeColumn(self: ?*anyopaque) i32 {
        return C.QsciScintilla_EdgeColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#edgeMode)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EdgeMode(self: ?*anyopaque) i64 {
        return C.QsciScintilla_EdgeMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setFont)
    ///
    /// ``` self: ?*C.QsciScintilla, f: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        C.QsciScintilla_SetFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#eolMode)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EolMode(self: ?*anyopaque) i64 {
        return C.QsciScintilla_EolMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#eolVisibility)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EolVisibility(self: ?*anyopaque) bool {
        return C.QsciScintilla_EolVisibility(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#extraAscent)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ExtraAscent(self: ?*anyopaque) i32 {
        return C.QsciScintilla_ExtraAscent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#extraDescent)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ExtraDescent(self: ?*anyopaque) i32 {
        return C.QsciScintilla_ExtraDescent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#fillIndicatorRange)
    ///
    /// ``` self: ?*C.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32 ```
    pub fn FillIndicatorRange(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        C.QsciScintilla_FillIndicatorRange(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#findFirst)
    ///
    /// ``` self: ?*C.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool ```
    pub fn FindFirst(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = C.struct_libqt_string{
            .len = expr.len,
            .data = @constCast(expr.ptr),
        };
        return C.QsciScintilla_FindFirst(@ptrCast(self), expr_str, re, cs, wo, wrap, forward, @intCast(line), @intCast(index), show, posix, cxx11);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8, bool, bool, bool, bool, bool, i32, i32, bool, bool, bool) callconv(.c) bool ```
    pub fn OnFindFirst(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, bool, bool, bool, bool, bool, i32, i32, bool, bool, bool) callconv(.c) bool) void {
        C.QsciScintilla_OnFindFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool ```
    pub fn QBaseFindFirst(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = C.struct_libqt_string{
            .len = expr.len,
            .data = @constCast(expr.ptr),
        };
        return C.QsciScintilla_QBaseFindFirst(@ptrCast(self), expr_str, re, cs, wo, wrap, forward, @intCast(line), @intCast(index), show, posix, cxx11);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#findFirstInSelection)
    ///
    /// ``` self: ?*C.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool ```
    pub fn FindFirstInSelection(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = C.struct_libqt_string{
            .len = expr.len,
            .data = @constCast(expr.ptr),
        };
        return C.QsciScintilla_FindFirstInSelection(@ptrCast(self), expr_str, re, cs, wo, forward, show, posix, cxx11);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8, bool, bool, bool, bool, bool, bool, bool) callconv(.c) bool ```
    pub fn OnFindFirstInSelection(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, bool, bool, bool, bool, bool, bool, bool) callconv(.c) bool) void {
        C.QsciScintilla_OnFindFirstInSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool ```
    pub fn QBaseFindFirstInSelection(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = C.struct_libqt_string{
            .len = expr.len,
            .data = @constCast(expr.ptr),
        };
        return C.QsciScintilla_QBaseFindFirstInSelection(@ptrCast(self), expr_str, re, cs, wo, forward, show, posix, cxx11);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#findNext)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FindNext(self: ?*anyopaque) bool {
        return C.QsciScintilla_FindNext(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnFindNext(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QsciScintilla_OnFindNext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseFindNext(self: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseFindNext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#findMatchingBrace)
    ///
    /// ``` self: ?*C.QsciScintilla, brace: ?*i64, other: ?*i64, mode: qsciscintilla_enums.BraceMatch ```
    pub fn FindMatchingBrace(self: ?*anyopaque, brace: ?*anyopaque, other: ?*anyopaque, mode: i64) bool {
        return C.QsciScintilla_FindMatchingBrace(@ptrCast(self), @intCast(brace), @intCast(other), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#firstVisibleLine)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FirstVisibleLine(self: ?*anyopaque) i32 {
        return C.QsciScintilla_FirstVisibleLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#folding)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Folding(self: ?*anyopaque) i64 {
        return C.QsciScintilla_Folding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#getCursorPosition)
    ///
    /// ``` self: ?*C.QsciScintilla, line: ?*i32, index: ?*i32 ```
    pub fn GetCursorPosition(self: ?*anyopaque, line: ?*anyopaque, index: ?*anyopaque) void {
        C.QsciScintilla_GetCursorPosition(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#getSelection)
    ///
    /// ``` self: ?*C.QsciScintilla, lineFrom: ?*i32, indexFrom: ?*i32, lineTo: ?*i32, indexTo: ?*i32 ```
    pub fn GetSelection(self: ?*anyopaque, lineFrom: ?*anyopaque, indexFrom: ?*anyopaque, lineTo: ?*anyopaque, indexTo: ?*anyopaque) void {
        C.QsciScintilla_GetSelection(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#hasSelectedText)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HasSelectedText(self: ?*anyopaque) bool {
        return C.QsciScintilla_HasSelectedText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indentation)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn Indentation(self: ?*anyopaque, line: i32) i32 {
        return C.QsciScintilla_Indentation(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indentationGuides)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IndentationGuides(self: ?*anyopaque) bool {
        return C.QsciScintilla_IndentationGuides(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indentationsUseTabs)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IndentationsUseTabs(self: ?*anyopaque) bool {
        return C.QsciScintilla_IndentationsUseTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indentationWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IndentationWidth(self: ?*anyopaque) i32 {
        return C.QsciScintilla_IndentationWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indicatorDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle ```
    pub fn IndicatorDefine(self: ?*anyopaque, style: i64) i32 {
        return C.QsciScintilla_IndicatorDefine(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indicatorDrawUnder)
    ///
    /// ``` self: ?*C.QsciScintilla, indicatorNumber: i32 ```
    pub fn IndicatorDrawUnder(self: ?*anyopaque, indicatorNumber: i32) bool {
        return C.QsciScintilla_IndicatorDrawUnder(@ptrCast(self), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isCallTipActive)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsCallTipActive(self: ?*anyopaque) bool {
        return C.QsciScintilla_IsCallTipActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isListActive)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsListActive(self: ?*anyopaque) bool {
        return C.QsciScintilla_IsListActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isModified)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsModified(self: ?*anyopaque) bool {
        return C.QsciScintilla_IsModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isReadOnly)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return C.QsciScintilla_IsReadOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isRedoAvailable)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsRedoAvailable(self: ?*anyopaque) bool {
        return C.QsciScintilla_IsRedoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isUndoAvailable)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsUndoAvailable(self: ?*anyopaque) bool {
        return C.QsciScintilla_IsUndoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isUtf8)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsUtf8(self: ?*anyopaque) bool {
        return C.QsciScintilla_IsUtf8(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#isWordCharacter)
    ///
    /// ``` self: ?*C.QsciScintilla, ch: i8 ```
    pub fn IsWordCharacter(self: ?*anyopaque, ch: i8) bool {
        return C.QsciScintilla_IsWordCharacter(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#lineAt)
    ///
    /// ``` self: ?*C.QsciScintilla, point: ?*C.QPoint ```
    pub fn LineAt(self: ?*anyopaque, point: ?*anyopaque) i32 {
        return C.QsciScintilla_LineAt(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#lineIndexFromPosition)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, line: ?*i32, index: ?*i32 ```
    pub fn LineIndexFromPosition(self: ?*anyopaque, position: i32, line: ?*anyopaque, index: ?*anyopaque) void {
        C.QsciScintilla_LineIndexFromPosition(@ptrCast(self), @intCast(position), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#lineLength)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn LineLength(self: ?*anyopaque, line: i32) i32 {
        return C.QsciScintilla_LineLength(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#lines)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Lines(self: ?*anyopaque) i32 {
        return C.QsciScintilla_Lines(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#length)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Length(self: ?*anyopaque) i32 {
        return C.QsciScintilla_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#lexer)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Lexer(self: ?*anyopaque) ?*C.QsciLexer {
        return C.QsciScintilla_Lexer(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32 ```
    pub fn MarginBackgroundColor(self: ?*anyopaque, margin: i32) ?*C.QColor {
        return C.QsciScintilla_MarginBackgroundColor(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginLineNumbers)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32 ```
    pub fn MarginLineNumbers(self: ?*anyopaque, margin: i32) bool {
        return C.QsciScintilla_MarginLineNumbers(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginMarkerMask)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32 ```
    pub fn MarginMarkerMask(self: ?*anyopaque, margin: i32) i32 {
        return C.QsciScintilla_MarginMarkerMask(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginOptions)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MarginOptions(self: ?*anyopaque) i32 {
        return C.QsciScintilla_MarginOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginSensitivity)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32 ```
    pub fn MarginSensitivity(self: ?*anyopaque, margin: i32) bool {
        return C.QsciScintilla_MarginSensitivity(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginType)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32 ```
    pub fn MarginType(self: ?*anyopaque, margin: i32) i64 {
        return C.QsciScintilla_MarginType(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32 ```
    pub fn MarginWidth(self: ?*anyopaque, margin: i32) i32 {
        return C.QsciScintilla_MarginWidth(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#margins)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Margins(self: ?*anyopaque) i32 {
        return C.QsciScintilla_Margins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, sym: qsciscintilla_enums.MarkerSymbol ```
    pub fn MarkerDefine(self: ?*anyopaque, sym: i64) i32 {
        return C.QsciScintilla_MarkerDefine(@ptrCast(self), @intCast(sym));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, ch: i8 ```
    pub fn MarkerDefineWithCh(self: ?*anyopaque, ch: i8) i32 {
        return C.QsciScintilla_MarkerDefineWithCh(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, pm: ?*C.QPixmap ```
    pub fn MarkerDefineWithPm(self: ?*anyopaque, pm: ?*anyopaque) i32 {
        return C.QsciScintilla_MarkerDefineWithPm(@ptrCast(self), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, im: ?*C.QImage ```
    pub fn MarkerDefineWithIm(self: ?*anyopaque, im: ?*anyopaque) i32 {
        return C.QsciScintilla_MarkerDefineWithIm(@ptrCast(self), @ptrCast(im));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerAdd)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32, markerNumber: i32 ```
    pub fn MarkerAdd(self: ?*anyopaque, linenr: i32, markerNumber: i32) i32 {
        return C.QsciScintilla_MarkerAdd(@ptrCast(self), @intCast(linenr), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markersAtLine)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32 ```
    pub fn MarkersAtLine(self: ?*anyopaque, linenr: i32) u32 {
        return C.QsciScintilla_MarkersAtLine(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDelete)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32 ```
    pub fn MarkerDelete(self: ?*anyopaque, linenr: i32) void {
        C.QsciScintilla_MarkerDelete(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDeleteAll)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MarkerDeleteAll(self: ?*anyopaque) void {
        C.QsciScintilla_MarkerDeleteAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDeleteHandle)
    ///
    /// ``` self: ?*C.QsciScintilla, mhandle: i32 ```
    pub fn MarkerDeleteHandle(self: ?*anyopaque, mhandle: i32) void {
        C.QsciScintilla_MarkerDeleteHandle(@ptrCast(self), @intCast(mhandle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerLine)
    ///
    /// ``` self: ?*C.QsciScintilla, mhandle: i32 ```
    pub fn MarkerLine(self: ?*anyopaque, mhandle: i32) i32 {
        return C.QsciScintilla_MarkerLine(@ptrCast(self), @intCast(mhandle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerFindNext)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32, mask: u32 ```
    pub fn MarkerFindNext(self: ?*anyopaque, linenr: i32, mask: u32) i32 {
        return C.QsciScintilla_MarkerFindNext(@ptrCast(self), @intCast(linenr), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerFindPrevious)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32, mask: u32 ```
    pub fn MarkerFindPrevious(self: ?*anyopaque, linenr: i32, mask: u32) i32 {
        return C.QsciScintilla_MarkerFindPrevious(@ptrCast(self), @intCast(linenr), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#overwriteMode)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn OverwriteMode(self: ?*anyopaque) bool {
        return C.QsciScintilla_OverwriteMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#paper)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Paper(self: ?*anyopaque) ?*C.QColor {
        return C.QsciScintilla_Paper(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#positionFromLineIndex)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, index: i32 ```
    pub fn PositionFromLineIndex(self: ?*anyopaque, line: i32, index: i32) i32 {
        return C.QsciScintilla_PositionFromLineIndex(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#read)
    ///
    /// ``` self: ?*C.QsciScintilla, io: ?*C.QIODevice ```
    pub fn Read(self: ?*anyopaque, io: ?*anyopaque) bool {
        return C.QsciScintilla_Read(@ptrCast(self), @ptrCast(io));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#recolor)
    ///
    /// ``` self: ?*C.QsciScintilla, start: i32, end: i32 ```
    pub fn Recolor(self: ?*anyopaque, start: i32, end: i32) void {
        C.QsciScintilla_Recolor(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) void ```
    pub fn OnRecolor(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnRecolor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, start: i32, end: i32 ```
    pub fn QBaseRecolor(self: ?*anyopaque, start: i32, end: i32) void {
        C.QsciScintilla_QBaseRecolor(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#registerImage)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32, pm: ?*C.QPixmap ```
    pub fn RegisterImage(self: ?*anyopaque, id: i32, pm: ?*anyopaque) void {
        C.QsciScintilla_RegisterImage(@ptrCast(self), @intCast(id), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#registerImage)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32, im: ?*C.QImage ```
    pub fn RegisterImage2(self: ?*anyopaque, id: i32, im: ?*anyopaque) void {
        C.QsciScintilla_RegisterImage2(@ptrCast(self), @intCast(id), @ptrCast(im));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#replace)
    ///
    /// ``` self: ?*C.QsciScintilla, replaceStr: []const u8 ```
    pub fn Replace(self: ?*anyopaque, replaceStr: []const u8) void {
        const replaceStr_str = C.struct_libqt_string{
            .len = replaceStr.len,
            .data = @constCast(replaceStr.ptr),
        };
        C.QsciScintilla_Replace(@ptrCast(self), replaceStr_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8) callconv(.c) void ```
    pub fn OnReplace(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QsciScintilla_OnReplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, replaceStr: []const u8 ```
    pub fn QBaseReplace(self: ?*anyopaque, replaceStr: []const u8) void {
        const replaceStr_str = C.struct_libqt_string{
            .len = replaceStr.len,
            .data = @constCast(replaceStr.ptr),
        };
        C.QsciScintilla_QBaseReplace(@ptrCast(self), replaceStr_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#resetFoldMarginColors)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ResetFoldMarginColors(self: ?*anyopaque) void {
        C.QsciScintilla_ResetFoldMarginColors(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#resetHotspotBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ResetHotspotBackgroundColor(self: ?*anyopaque) void {
        C.QsciScintilla_ResetHotspotBackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#resetHotspotForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ResetHotspotForegroundColor(self: ?*anyopaque) void {
        C.QsciScintilla_ResetHotspotForegroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#scrollWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ScrollWidth(self: ?*anyopaque) i32 {
        return C.QsciScintilla_ScrollWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#scrollWidthTracking)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ScrollWidthTracking(self: ?*anyopaque) bool {
        return C.QsciScintilla_ScrollWidthTracking(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setFoldMarginColors)
    ///
    /// ``` self: ?*C.QsciScintilla, fore: ?*C.QColor, back: ?*C.QColor ```
    pub fn SetFoldMarginColors(self: ?*anyopaque, fore: ?*anyopaque, back: ?*anyopaque) void {
        C.QsciScintilla_SetFoldMarginColors(@ptrCast(self), @ptrCast(fore), @ptrCast(back));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAnnotationDisplay)
    ///
    /// ``` self: ?*C.QsciScintilla, display: qsciscintilla_enums.AnnotationDisplay ```
    pub fn SetAnnotationDisplay(self: ?*anyopaque, display: i64) void {
        C.QsciScintilla_SetAnnotationDisplay(@ptrCast(self), @intCast(display));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionFillupsEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla, enabled: bool ```
    pub fn SetAutoCompletionFillupsEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QsciScintilla_SetAutoCompletionFillupsEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionFillups)
    ///
    /// ``` self: ?*C.QsciScintilla, fillups: []const u8 ```
    pub fn SetAutoCompletionFillups(self: ?*anyopaque, fillups: []const u8) void {
        const fillups_Cstring = @constCast(fillups.ptr);
        C.QsciScintilla_SetAutoCompletionFillups(@ptrCast(self), fillups_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionWordSeparators)
    ///
    /// ``` self: ?*C.QsciScintilla, separators: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetAutoCompletionWordSeparators(self: ?*anyopaque, separators: [][]const u8, allocator: std.mem.Allocator) void {
        var separators_arr = allocator.alloc(C.struct_libqt_string, separators.len) catch @panic("Memory allocation failed");
        defer allocator.free(separators_arr);
        for (separators, 0..separators.len) |item, _i| {
            separators_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const separators_list = C.struct_libqt_list{
            .len = separators.len,
            .data = separators_arr.ptr,
        };
        C.QsciScintilla_SetAutoCompletionWordSeparators(@ptrCast(self), separators_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCallTipsBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetCallTipsBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetCallTipsBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCallTipsForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetCallTipsForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetCallTipsForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCallTipsHighlightColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetCallTipsHighlightColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetCallTipsHighlightColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCallTipsPosition)
    ///
    /// ``` self: ?*C.QsciScintilla, position: qsciscintilla_enums.CallTipsPosition ```
    pub fn SetCallTipsPosition(self: ?*anyopaque, position: i64) void {
        C.QsciScintilla_SetCallTipsPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCallTipsStyle)
    ///
    /// ``` self: ?*C.QsciScintilla, style: qsciscintilla_enums.CallTipsStyle ```
    pub fn SetCallTipsStyle(self: ?*anyopaque, style: i64) void {
        C.QsciScintilla_SetCallTipsStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCallTipsVisible)
    ///
    /// ``` self: ?*C.QsciScintilla, nr: i32 ```
    pub fn SetCallTipsVisible(self: ?*anyopaque, nr: i32) void {
        C.QsciScintilla_SetCallTipsVisible(@ptrCast(self), @intCast(nr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setContractedFolds)
    ///
    /// ``` self: ?*C.QsciScintilla, folds: []i32 ```
    pub fn SetContractedFolds(self: ?*anyopaque, folds: []i32) void {
        const folds_list = C.struct_libqt_list{
            .len = folds.len,
            .data = folds.ptr,
        };
        C.QsciScintilla_SetContractedFolds(@ptrCast(self), folds_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setDocument)
    ///
    /// ``` self: ?*C.QsciScintilla, document: ?*C.QsciDocument ```
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        C.QsciScintilla_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#addEdgeColumn)
    ///
    /// ``` self: ?*C.QsciScintilla, colnr: i32, col: ?*C.QColor ```
    pub fn AddEdgeColumn(self: ?*anyopaque, colnr: i32, col: ?*anyopaque) void {
        C.QsciScintilla_AddEdgeColumn(@ptrCast(self), @intCast(colnr), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearEdgeColumns)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ClearEdgeColumns(self: ?*anyopaque) void {
        C.QsciScintilla_ClearEdgeColumns(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setEdgeColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetEdgeColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetEdgeColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setEdgeColumn)
    ///
    /// ``` self: ?*C.QsciScintilla, colnr: i32 ```
    pub fn SetEdgeColumn(self: ?*anyopaque, colnr: i32) void {
        C.QsciScintilla_SetEdgeColumn(@ptrCast(self), @intCast(colnr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setEdgeMode)
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.EdgeMode ```
    pub fn SetEdgeMode(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_SetEdgeMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setFirstVisibleLine)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32 ```
    pub fn SetFirstVisibleLine(self: ?*anyopaque, linenr: i32) void {
        C.QsciScintilla_SetFirstVisibleLine(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorDrawUnder)
    ///
    /// ``` self: ?*C.QsciScintilla, under: bool ```
    pub fn SetIndicatorDrawUnder(self: ?*anyopaque, under: bool) void {
        C.QsciScintilla_SetIndicatorDrawUnder(@ptrCast(self), under);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetIndicatorForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetIndicatorForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorHoverForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetIndicatorHoverForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetIndicatorHoverForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorHoverStyle)
    ///
    /// ``` self: ?*C.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle ```
    pub fn SetIndicatorHoverStyle(self: ?*anyopaque, style: i64) void {
        C.QsciScintilla_SetIndicatorHoverStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorOutlineColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetIndicatorOutlineColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetIndicatorOutlineColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, col: ?*C.QColor ```
    pub fn SetMarginBackgroundColor(self: ?*anyopaque, margin: i32, col: ?*anyopaque) void {
        C.QsciScintilla_SetMarginBackgroundColor(@ptrCast(self), @intCast(margin), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginOptions)
    ///
    /// ``` self: ?*C.QsciScintilla, options: i32 ```
    pub fn SetMarginOptions(self: ?*anyopaque, options: i32) void {
        C.QsciScintilla_SetMarginOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginText)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, text: []const u8, style: i32 ```
    pub fn SetMarginText(self: ?*anyopaque, line: i32, text: []const u8, style: i32) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_SetMarginText(@ptrCast(self), @intCast(line), text_str, @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginText)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, text: []const u8, style: ?*C.QsciStyle ```
    pub fn SetMarginText2(self: ?*anyopaque, line: i32, text: []const u8, style: ?*anyopaque) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_SetMarginText2(@ptrCast(self), @intCast(line), text_str, @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginText)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, text: ?*C.QsciStyledText ```
    pub fn SetMarginText3(self: ?*anyopaque, line: i32, text: ?*anyopaque) void {
        C.QsciScintilla_SetMarginText3(@ptrCast(self), @intCast(line), @ptrCast(text));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginType)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, typeVal: qsciscintilla_enums.MarginType ```
    pub fn SetMarginType(self: ?*anyopaque, margin: i32, typeVal: i64) void {
        C.QsciScintilla_SetMarginType(@ptrCast(self), @intCast(margin), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearMarginText)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ClearMarginText(self: ?*anyopaque) void {
        C.QsciScintilla_ClearMarginText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMargins)
    ///
    /// ``` self: ?*C.QsciScintilla, margins: i32 ```
    pub fn SetMargins(self: ?*anyopaque, margins: i32) void {
        C.QsciScintilla_SetMargins(@ptrCast(self), @intCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarkerBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetMarkerBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetMarkerBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarkerForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetMarkerForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetMarkerForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMatchedBraceBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetMatchedBraceBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetMatchedBraceBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMatchedBraceForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetMatchedBraceForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetMatchedBraceForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMatchedBraceIndicator)
    ///
    /// ``` self: ?*C.QsciScintilla, indicatorNumber: i32 ```
    pub fn SetMatchedBraceIndicator(self: ?*anyopaque, indicatorNumber: i32) void {
        C.QsciScintilla_SetMatchedBraceIndicator(@ptrCast(self), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#resetMatchedBraceIndicator)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ResetMatchedBraceIndicator(self: ?*anyopaque) void {
        C.QsciScintilla_ResetMatchedBraceIndicator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setScrollWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, pixelWidth: i32 ```
    pub fn SetScrollWidth(self: ?*anyopaque, pixelWidth: i32) void {
        C.QsciScintilla_SetScrollWidth(@ptrCast(self), @intCast(pixelWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setScrollWidthTracking)
    ///
    /// ``` self: ?*C.QsciScintilla, enabled: bool ```
    pub fn SetScrollWidthTracking(self: ?*anyopaque, enabled: bool) void {
        C.QsciScintilla_SetScrollWidthTracking(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setTabDrawMode)
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.TabDrawMode ```
    pub fn SetTabDrawMode(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_SetTabDrawMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setUnmatchedBraceBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetUnmatchedBraceBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetUnmatchedBraceBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setUnmatchedBraceForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetUnmatchedBraceForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetUnmatchedBraceForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setUnmatchedBraceIndicator)
    ///
    /// ``` self: ?*C.QsciScintilla, indicatorNumber: i32 ```
    pub fn SetUnmatchedBraceIndicator(self: ?*anyopaque, indicatorNumber: i32) void {
        C.QsciScintilla_SetUnmatchedBraceIndicator(@ptrCast(self), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#resetUnmatchedBraceIndicator)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ResetUnmatchedBraceIndicator(self: ?*anyopaque) void {
        C.QsciScintilla_ResetUnmatchedBraceIndicator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWrapVisualFlags)
    ///
    /// ``` self: ?*C.QsciScintilla, endFlag: qsciscintilla_enums.WrapVisualFlag ```
    pub fn SetWrapVisualFlags(self: ?*anyopaque, endFlag: i64) void {
        C.QsciScintilla_SetWrapVisualFlags(@ptrCast(self), @intCast(endFlag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#selectedText)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn SelectedText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciScintilla_SelectedText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#selectionToEol)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SelectionToEol(self: ?*anyopaque) bool {
        return C.QsciScintilla_SelectionToEol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setHotspotBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetHotspotBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetHotspotBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setHotspotForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetHotspotForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetHotspotForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setHotspotUnderline)
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn SetHotspotUnderline(self: ?*anyopaque, enable: bool) void {
        C.QsciScintilla_SetHotspotUnderline(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setHotspotWrap)
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn SetHotspotWrap(self: ?*anyopaque, enable: bool) void {
        C.QsciScintilla_SetHotspotWrap(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setSelectionToEol)
    ///
    /// ``` self: ?*C.QsciScintilla, filled: bool ```
    pub fn SetSelectionToEol(self: ?*anyopaque, filled: bool) void {
        C.QsciScintilla_SetSelectionToEol(@ptrCast(self), filled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setExtraAscent)
    ///
    /// ``` self: ?*C.QsciScintilla, extra: i32 ```
    pub fn SetExtraAscent(self: ?*anyopaque, extra: i32) void {
        C.QsciScintilla_SetExtraAscent(@ptrCast(self), @intCast(extra));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setExtraDescent)
    ///
    /// ``` self: ?*C.QsciScintilla, extra: i32 ```
    pub fn SetExtraDescent(self: ?*anyopaque, extra: i32) void {
        C.QsciScintilla_SetExtraDescent(@ptrCast(self), @intCast(extra));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setOverwriteMode)
    ///
    /// ``` self: ?*C.QsciScintilla, overwrite: bool ```
    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        C.QsciScintilla_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWhitespaceBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetWhitespaceBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetWhitespaceBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWhitespaceForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetWhitespaceForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetWhitespaceForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWhitespaceSize)
    ///
    /// ``` self: ?*C.QsciScintilla, size: i32 ```
    pub fn SetWhitespaceSize(self: ?*anyopaque, size: i32) void {
        C.QsciScintilla_SetWhitespaceSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWrapIndentMode)
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.WrapIndentMode ```
    pub fn SetWrapIndentMode(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_SetWrapIndentMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#showUserList)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32, list: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ShowUserList(self: ?*anyopaque, id: i32, list: [][]const u8, allocator: std.mem.Allocator) void {
        var list_arr = allocator.alloc(C.struct_libqt_string, list.len) catch @panic("Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |item, _i| {
            list_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const list_list = C.struct_libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        C.QsciScintilla_ShowUserList(@ptrCast(self), @intCast(id), list_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#standardCommands)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn StandardCommands(self: ?*anyopaque) ?*C.QsciCommandSet {
        return C.QsciScintilla_StandardCommands(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#tabDrawMode)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn TabDrawMode(self: ?*anyopaque) i64 {
        return C.QsciScintilla_TabDrawMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#tabIndents)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn TabIndents(self: ?*anyopaque) bool {
        return C.QsciScintilla_TabIndents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#tabWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn TabWidth(self: ?*anyopaque) i32 {
        return C.QsciScintilla_TabWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#text)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciScintilla_Text(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#text)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, allocator: std.mem.Allocator ```
    pub fn TextWithLine(self: ?*anyopaque, line: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciScintilla_TextWithLine(@ptrCast(self), @intCast(line));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#text)
    ///
    /// ``` self: ?*C.QsciScintilla, start: i32, end: i32, allocator: std.mem.Allocator ```
    pub fn Text2(self: ?*anyopaque, start: i32, end: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciScintilla_Text2(@ptrCast(self), @intCast(start), @intCast(end));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#textHeight)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32 ```
    pub fn TextHeight(self: ?*anyopaque, linenr: i32) i32 {
        return C.QsciScintilla_TextHeight(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#whitespaceSize)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WhitespaceSize(self: ?*anyopaque) i32 {
        return C.QsciScintilla_WhitespaceSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#whitespaceVisibility)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WhitespaceVisibility(self: ?*anyopaque) i64 {
        return C.QsciScintilla_WhitespaceVisibility(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#wordAtLineIndex)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, index: i32, allocator: std.mem.Allocator ```
    pub fn WordAtLineIndex(self: ?*anyopaque, line: i32, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciScintilla_WordAtLineIndex(@ptrCast(self), @intCast(line), @intCast(index));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#wordAtPoint)
    ///
    /// ``` self: ?*C.QsciScintilla, point: ?*C.QPoint, allocator: std.mem.Allocator ```
    pub fn WordAtPoint(self: ?*anyopaque, point: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QsciScintilla_WordAtPoint(@ptrCast(self), @ptrCast(point));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#wordCharacters)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = C.QsciScintilla_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#wrapMode)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WrapMode(self: ?*anyopaque) i64 {
        return C.QsciScintilla_WrapMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#wrapIndentMode)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WrapIndentMode(self: ?*anyopaque) i64 {
        return C.QsciScintilla_WrapIndentMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#write)
    ///
    /// ``` self: ?*C.QsciScintilla, io: ?*C.QIODevice ```
    pub fn Write(self: ?*anyopaque, io: ?*anyopaque) bool {
        return C.QsciScintilla_Write(@ptrCast(self), @ptrCast(io));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#append)
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn Append(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_Append(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8) callconv(.c) void ```
    pub fn OnAppend(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QsciScintilla_OnAppend(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn QBaseAppend(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_QBaseAppend(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompleteFromAll)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompleteFromAll(self: ?*anyopaque) void {
        C.QsciScintilla_AutoCompleteFromAll(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnAutoCompleteFromAll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnAutoCompleteFromAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseAutoCompleteFromAll(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseAutoCompleteFromAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompleteFromAPIs)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompleteFromAPIs(self: ?*anyopaque) void {
        C.QsciScintilla_AutoCompleteFromAPIs(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnAutoCompleteFromAPIs(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnAutoCompleteFromAPIs(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseAutoCompleteFromAPIs(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseAutoCompleteFromAPIs(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#autoCompleteFromDocument)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoCompleteFromDocument(self: ?*anyopaque) void {
        C.QsciScintilla_AutoCompleteFromDocument(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnAutoCompleteFromDocument(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnAutoCompleteFromDocument(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseAutoCompleteFromDocument(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseAutoCompleteFromDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#callTip)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CallTip(self: ?*anyopaque) void {
        C.QsciScintilla_CallTip(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCallTip(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnCallTip(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseCallTip(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseCallTip(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clear)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QsciScintilla_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnClear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#copy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Copy(self: ?*anyopaque) void {
        C.QsciScintilla_Copy(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCopy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnCopy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseCopy(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseCopy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#cut)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Cut(self: ?*anyopaque) void {
        C.QsciScintilla_Cut(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCut(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnCut(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseCut(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseCut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#ensureCursorVisible)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EnsureCursorVisible(self: ?*anyopaque) void {
        C.QsciScintilla_EnsureCursorVisible(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnEnsureCursorVisible(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnEnsureCursorVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseEnsureCursorVisible(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseEnsureCursorVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#ensureLineVisible)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn EnsureLineVisible(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_EnsureLineVisible(@ptrCast(self), @intCast(line));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnEnsureLineVisible(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnEnsureLineVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn QBaseEnsureLineVisible(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_QBaseEnsureLineVisible(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#foldAll)
    ///
    /// ``` self: ?*C.QsciScintilla, children: bool ```
    pub fn FoldAll(self: ?*anyopaque, children: bool) void {
        C.QsciScintilla_FoldAll(@ptrCast(self), children);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnFoldAll(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnFoldAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, children: bool ```
    pub fn QBaseFoldAll(self: ?*anyopaque, children: bool) void {
        C.QsciScintilla_QBaseFoldAll(@ptrCast(self), children);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#foldLine)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn FoldLine(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_FoldLine(@ptrCast(self), @intCast(line));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnFoldLine(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnFoldLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn QBaseFoldLine(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_QBaseFoldLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indent)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn Indent(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_Indent(@ptrCast(self), @intCast(line));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnIndent(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnIndent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn QBaseIndent(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_QBaseIndent(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#insert)
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn Insert(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_Insert(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8) callconv(.c) void ```
    pub fn OnInsert(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QsciScintilla_OnInsert(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn QBaseInsert(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_QBaseInsert(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#insertAt)
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8, line: i32, index: i32 ```
    pub fn InsertAt(self: ?*anyopaque, text: []const u8, line: i32, index: i32) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_InsertAt(@ptrCast(self), text_str, @intCast(line), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8, i32, i32) callconv(.c) void ```
    pub fn OnInsertAt(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnInsertAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8, line: i32, index: i32 ```
    pub fn QBaseInsertAt(self: ?*anyopaque, text: []const u8, line: i32, index: i32) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_QBaseInsertAt(@ptrCast(self), text_str, @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#moveToMatchingBrace)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MoveToMatchingBrace(self: ?*anyopaque) void {
        C.QsciScintilla_MoveToMatchingBrace(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnMoveToMatchingBrace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnMoveToMatchingBrace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseMoveToMatchingBrace(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseMoveToMatchingBrace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#paste)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Paste(self: ?*anyopaque) void {
        C.QsciScintilla_Paste(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnPaste(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnPaste(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBasePaste(self: ?*anyopaque) void {
        C.QsciScintilla_QBasePaste(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#redo)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Redo(self: ?*anyopaque) void {
        C.QsciScintilla_Redo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnRedo(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnRedo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseRedo(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseRedo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#removeSelectedText)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn RemoveSelectedText(self: ?*anyopaque) void {
        C.QsciScintilla_RemoveSelectedText(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnRemoveSelectedText(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnRemoveSelectedText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseRemoveSelectedText(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseRemoveSelectedText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#replaceSelectedText)
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn ReplaceSelectedText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_ReplaceSelectedText(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8) callconv(.c) void ```
    pub fn OnReplaceSelectedText(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QsciScintilla_OnReplaceSelectedText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn QBaseReplaceSelectedText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_QBaseReplaceSelectedText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#resetSelectionBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ResetSelectionBackgroundColor(self: ?*anyopaque) void {
        C.QsciScintilla_ResetSelectionBackgroundColor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnResetSelectionBackgroundColor(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnResetSelectionBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseResetSelectionBackgroundColor(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseResetSelectionBackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#resetSelectionForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ResetSelectionForegroundColor(self: ?*anyopaque) void {
        C.QsciScintilla_ResetSelectionForegroundColor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnResetSelectionForegroundColor(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnResetSelectionForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseResetSelectionForegroundColor(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseResetSelectionForegroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#selectAll)
    ///
    /// ``` self: ?*C.QsciScintilla, selectVal: bool ```
    pub fn SelectAll(self: ?*anyopaque, selectVal: bool) void {
        C.QsciScintilla_SelectAll(@ptrCast(self), selectVal);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSelectAll(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSelectAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, selectVal: bool ```
    pub fn QBaseSelectAll(self: ?*anyopaque, selectVal: bool) void {
        C.QsciScintilla_QBaseSelectAll(@ptrCast(self), selectVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#selectToMatchingBrace)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SelectToMatchingBrace(self: ?*anyopaque) void {
        C.QsciScintilla_SelectToMatchingBrace(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnSelectToMatchingBrace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnSelectToMatchingBrace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseSelectToMatchingBrace(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseSelectToMatchingBrace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionCaseSensitivity)
    ///
    /// ``` self: ?*C.QsciScintilla, cs: bool ```
    pub fn SetAutoCompletionCaseSensitivity(self: ?*anyopaque, cs: bool) void {
        C.QsciScintilla_SetAutoCompletionCaseSensitivity(@ptrCast(self), cs);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetAutoCompletionCaseSensitivity(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetAutoCompletionCaseSensitivity(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, cs: bool ```
    pub fn QBaseSetAutoCompletionCaseSensitivity(self: ?*anyopaque, cs: bool) void {
        C.QsciScintilla_QBaseSetAutoCompletionCaseSensitivity(@ptrCast(self), cs);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionReplaceWord)
    ///
    /// ``` self: ?*C.QsciScintilla, replace: bool ```
    pub fn SetAutoCompletionReplaceWord(self: ?*anyopaque, replace: bool) void {
        C.QsciScintilla_SetAutoCompletionReplaceWord(@ptrCast(self), replace);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetAutoCompletionReplaceWord(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetAutoCompletionReplaceWord(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, replace: bool ```
    pub fn QBaseSetAutoCompletionReplaceWord(self: ?*anyopaque, replace: bool) void {
        C.QsciScintilla_QBaseSetAutoCompletionReplaceWord(@ptrCast(self), replace);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionShowSingle)
    ///
    /// ``` self: ?*C.QsciScintilla, single: bool ```
    pub fn SetAutoCompletionShowSingle(self: ?*anyopaque, single: bool) void {
        C.QsciScintilla_SetAutoCompletionShowSingle(@ptrCast(self), single);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetAutoCompletionShowSingle(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetAutoCompletionShowSingle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, single: bool ```
    pub fn QBaseSetAutoCompletionShowSingle(self: ?*anyopaque, single: bool) void {
        C.QsciScintilla_QBaseSetAutoCompletionShowSingle(@ptrCast(self), single);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionSource)
    ///
    /// ``` self: ?*C.QsciScintilla, source: qsciscintilla_enums.AutoCompletionSource ```
    pub fn SetAutoCompletionSource(self: ?*anyopaque, source: i64) void {
        C.QsciScintilla_SetAutoCompletionSource(@ptrCast(self), @intCast(source));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qsciscintilla_enums.AutoCompletionSource) callconv(.c) void ```
    pub fn OnSetAutoCompletionSource(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QsciScintilla_OnSetAutoCompletionSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, source: qsciscintilla_enums.AutoCompletionSource ```
    pub fn QBaseSetAutoCompletionSource(self: ?*anyopaque, source: i64) void {
        C.QsciScintilla_QBaseSetAutoCompletionSource(@ptrCast(self), @intCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionThreshold)
    ///
    /// ``` self: ?*C.QsciScintilla, thresh: i32 ```
    pub fn SetAutoCompletionThreshold(self: ?*anyopaque, thresh: i32) void {
        C.QsciScintilla_SetAutoCompletionThreshold(@ptrCast(self), @intCast(thresh));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnSetAutoCompletionThreshold(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetAutoCompletionThreshold(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, thresh: i32 ```
    pub fn QBaseSetAutoCompletionThreshold(self: ?*anyopaque, thresh: i32) void {
        C.QsciScintilla_QBaseSetAutoCompletionThreshold(@ptrCast(self), @intCast(thresh));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoCompletionUseSingle)
    ///
    /// ``` self: ?*C.QsciScintilla, single: qsciscintilla_enums.AutoCompletionUseSingle ```
    pub fn SetAutoCompletionUseSingle(self: ?*anyopaque, single: i64) void {
        C.QsciScintilla_SetAutoCompletionUseSingle(@ptrCast(self), @intCast(single));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qsciscintilla_enums.AutoCompletionUseSingle) callconv(.c) void ```
    pub fn OnSetAutoCompletionUseSingle(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QsciScintilla_OnSetAutoCompletionUseSingle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, single: qsciscintilla_enums.AutoCompletionUseSingle ```
    pub fn QBaseSetAutoCompletionUseSingle(self: ?*anyopaque, single: i64) void {
        C.QsciScintilla_QBaseSetAutoCompletionUseSingle(@ptrCast(self), @intCast(single));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setAutoIndent)
    ///
    /// ``` self: ?*C.QsciScintilla, autoindent: bool ```
    pub fn SetAutoIndent(self: ?*anyopaque, autoindent: bool) void {
        C.QsciScintilla_SetAutoIndent(@ptrCast(self), autoindent);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetAutoIndent(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetAutoIndent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, autoindent: bool ```
    pub fn QBaseSetAutoIndent(self: ?*anyopaque, autoindent: bool) void {
        C.QsciScintilla_QBaseSetAutoIndent(@ptrCast(self), autoindent);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setBraceMatching)
    ///
    /// ``` self: ?*C.QsciScintilla, bm: qsciscintilla_enums.BraceMatch ```
    pub fn SetBraceMatching(self: ?*anyopaque, bm: i64) void {
        C.QsciScintilla_SetBraceMatching(@ptrCast(self), @intCast(bm));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qsciscintilla_enums.BraceMatch) callconv(.c) void ```
    pub fn OnSetBraceMatching(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QsciScintilla_OnSetBraceMatching(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, bm: qsciscintilla_enums.BraceMatch ```
    pub fn QBaseSetBraceMatching(self: ?*anyopaque, bm: i64) void {
        C.QsciScintilla_QBaseSetBraceMatching(@ptrCast(self), @intCast(bm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setBackspaceUnindents)
    ///
    /// ``` self: ?*C.QsciScintilla, unindent: bool ```
    pub fn SetBackspaceUnindents(self: ?*anyopaque, unindent: bool) void {
        C.QsciScintilla_SetBackspaceUnindents(@ptrCast(self), unindent);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetBackspaceUnindents(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetBackspaceUnindents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, unindent: bool ```
    pub fn QBaseSetBackspaceUnindents(self: ?*anyopaque, unindent: bool) void {
        C.QsciScintilla_QBaseSetBackspaceUnindents(@ptrCast(self), unindent);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCaretForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetCaretForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetCaretForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetCaretForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetCaretForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetCaretForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetCaretForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCaretLineBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetCaretLineBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetCaretLineBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetCaretLineBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetCaretLineBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetCaretLineBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetCaretLineBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCaretLineFrameWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn SetCaretLineFrameWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_SetCaretLineFrameWidth(@ptrCast(self), @intCast(width));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnSetCaretLineFrameWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetCaretLineFrameWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn QBaseSetCaretLineFrameWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_QBaseSetCaretLineFrameWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCaretLineVisible)
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn SetCaretLineVisible(self: ?*anyopaque, enable: bool) void {
        C.QsciScintilla_SetCaretLineVisible(@ptrCast(self), enable);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetCaretLineVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetCaretLineVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn QBaseSetCaretLineVisible(self: ?*anyopaque, enable: bool) void {
        C.QsciScintilla_QBaseSetCaretLineVisible(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCaretWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn SetCaretWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_SetCaretWidth(@ptrCast(self), @intCast(width));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnSetCaretWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetCaretWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn QBaseSetCaretWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_QBaseSetCaretWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setColor)
    ///
    /// ``` self: ?*C.QsciScintilla, c: ?*C.QColor ```
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciScintilla_SetColor(@ptrCast(self), @ptrCast(c));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, c: ?*C.QColor ```
    pub fn QBaseSetColor(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetColor(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setCursorPosition)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, index: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, line: i32, index: i32) void {
        C.QsciScintilla_SetCursorPosition(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) void ```
    pub fn OnSetCursorPosition(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetCursorPosition(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, index: i32 ```
    pub fn QBaseSetCursorPosition(self: ?*anyopaque, line: i32, index: i32) void {
        C.QsciScintilla_QBaseSetCursorPosition(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setEolMode)
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.EolMode ```
    pub fn SetEolMode(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_SetEolMode(@ptrCast(self), @intCast(mode));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qsciscintilla_enums.EolMode) callconv(.c) void ```
    pub fn OnSetEolMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QsciScintilla_OnSetEolMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.EolMode ```
    pub fn QBaseSetEolMode(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_QBaseSetEolMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setEolVisibility)
    ///
    /// ``` self: ?*C.QsciScintilla, visible: bool ```
    pub fn SetEolVisibility(self: ?*anyopaque, visible: bool) void {
        C.QsciScintilla_SetEolVisibility(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetEolVisibility(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetEolVisibility(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, visible: bool ```
    pub fn QBaseSetEolVisibility(self: ?*anyopaque, visible: bool) void {
        C.QsciScintilla_QBaseSetEolVisibility(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setFolding)
    ///
    /// ``` self: ?*C.QsciScintilla, fold: qsciscintilla_enums.FoldStyle, margin: i32 ```
    pub fn SetFolding(self: ?*anyopaque, fold: i64, margin: i32) void {
        C.QsciScintilla_SetFolding(@ptrCast(self), @intCast(fold), @intCast(margin));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qsciscintilla_enums.FoldStyle, i32) callconv(.c) void ```
    pub fn OnSetFolding(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetFolding(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, fold: qsciscintilla_enums.FoldStyle, margin: i32 ```
    pub fn QBaseSetFolding(self: ?*anyopaque, fold: i64, margin: i32) void {
        C.QsciScintilla_QBaseSetFolding(@ptrCast(self), @intCast(fold), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndentation)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, indentation: i32 ```
    pub fn SetIndentation(self: ?*anyopaque, line: i32, indentation: i32) void {
        C.QsciScintilla_SetIndentation(@ptrCast(self), @intCast(line), @intCast(indentation));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) void ```
    pub fn OnSetIndentation(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetIndentation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, indentation: i32 ```
    pub fn QBaseSetIndentation(self: ?*anyopaque, line: i32, indentation: i32) void {
        C.QsciScintilla_QBaseSetIndentation(@ptrCast(self), @intCast(line), @intCast(indentation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndentationGuides)
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn SetIndentationGuides(self: ?*anyopaque, enable: bool) void {
        C.QsciScintilla_SetIndentationGuides(@ptrCast(self), enable);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetIndentationGuides(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetIndentationGuides(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn QBaseSetIndentationGuides(self: ?*anyopaque, enable: bool) void {
        C.QsciScintilla_QBaseSetIndentationGuides(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndentationGuidesBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetIndentationGuidesBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetIndentationGuidesBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetIndentationGuidesBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetIndentationGuidesBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetIndentationGuidesBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetIndentationGuidesBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndentationGuidesForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetIndentationGuidesForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetIndentationGuidesForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetIndentationGuidesForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetIndentationGuidesForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetIndentationGuidesForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetIndentationGuidesForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndentationsUseTabs)
    ///
    /// ``` self: ?*C.QsciScintilla, tabs: bool ```
    pub fn SetIndentationsUseTabs(self: ?*anyopaque, tabs: bool) void {
        C.QsciScintilla_SetIndentationsUseTabs(@ptrCast(self), tabs);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetIndentationsUseTabs(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetIndentationsUseTabs(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, tabs: bool ```
    pub fn QBaseSetIndentationsUseTabs(self: ?*anyopaque, tabs: bool) void {
        C.QsciScintilla_QBaseSetIndentationsUseTabs(@ptrCast(self), tabs);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndentationWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn SetIndentationWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_SetIndentationWidth(@ptrCast(self), @intCast(width));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnSetIndentationWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetIndentationWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn QBaseSetIndentationWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_QBaseSetIndentationWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setLexer)
    ///
    /// ``` self: ?*C.QsciScintilla, lexer: ?*C.QsciLexer ```
    pub fn SetLexer(self: ?*anyopaque, lexer: ?*anyopaque) void {
        C.QsciScintilla_SetLexer(@ptrCast(self), @ptrCast(lexer));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QsciLexer) callconv(.c) void ```
    pub fn OnSetLexer(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetLexer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, lexer: ?*C.QsciLexer ```
    pub fn QBaseSetLexer(self: ?*anyopaque, lexer: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetLexer(@ptrCast(self), @ptrCast(lexer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginsBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetMarginsBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetMarginsBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetMarginsBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginsBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetMarginsBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetMarginsBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginsFont)
    ///
    /// ``` self: ?*C.QsciScintilla, f: ?*C.QFont ```
    pub fn SetMarginsFont(self: ?*anyopaque, f: ?*anyopaque) void {
        C.QsciScintilla_SetMarginsFont(@ptrCast(self), @ptrCast(f));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QFont) callconv(.c) void ```
    pub fn OnSetMarginsFont(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginsFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, f: ?*C.QFont ```
    pub fn QBaseSetMarginsFont(self: ?*anyopaque, f: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetMarginsFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginsForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetMarginsForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetMarginsForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetMarginsForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginsForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetMarginsForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetMarginsForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginLineNumbers)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, lnrs: bool ```
    pub fn SetMarginLineNumbers(self: ?*anyopaque, margin: i32, lnrs: bool) void {
        C.QsciScintilla_SetMarginLineNumbers(@ptrCast(self), @intCast(margin), lnrs);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, bool) callconv(.c) void ```
    pub fn OnSetMarginLineNumbers(self: ?*anyopaque, slot: fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginLineNumbers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, lnrs: bool ```
    pub fn QBaseSetMarginLineNumbers(self: ?*anyopaque, margin: i32, lnrs: bool) void {
        C.QsciScintilla_QBaseSetMarginLineNumbers(@ptrCast(self), @intCast(margin), lnrs);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginMarkerMask)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, mask: i32 ```
    pub fn SetMarginMarkerMask(self: ?*anyopaque, margin: i32, mask: i32) void {
        C.QsciScintilla_SetMarginMarkerMask(@ptrCast(self), @intCast(margin), @intCast(mask));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) void ```
    pub fn OnSetMarginMarkerMask(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginMarkerMask(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, mask: i32 ```
    pub fn QBaseSetMarginMarkerMask(self: ?*anyopaque, margin: i32, mask: i32) void {
        C.QsciScintilla_QBaseSetMarginMarkerMask(@ptrCast(self), @intCast(margin), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginSensitivity)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, sens: bool ```
    pub fn SetMarginSensitivity(self: ?*anyopaque, margin: i32, sens: bool) void {
        C.QsciScintilla_SetMarginSensitivity(@ptrCast(self), @intCast(margin), sens);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, bool) callconv(.c) void ```
    pub fn OnSetMarginSensitivity(self: ?*anyopaque, slot: fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginSensitivity(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, sens: bool ```
    pub fn QBaseSetMarginSensitivity(self: ?*anyopaque, margin: i32, sens: bool) void {
        C.QsciScintilla_QBaseSetMarginSensitivity(@ptrCast(self), @intCast(margin), sens);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, width: i32 ```
    pub fn SetMarginWidth(self: ?*anyopaque, margin: i32, width: i32) void {
        C.QsciScintilla_SetMarginWidth(@ptrCast(self), @intCast(margin), @intCast(width));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) void ```
    pub fn OnSetMarginWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, width: i32 ```
    pub fn QBaseSetMarginWidth(self: ?*anyopaque, margin: i32, width: i32) void {
        C.QsciScintilla_QBaseSetMarginWidth(@ptrCast(self), @intCast(margin), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarginWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, s: []const u8 ```
    pub fn SetMarginWidth2(self: ?*anyopaque, margin: i32, s: []const u8) void {
        const s_str = C.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };
        C.QsciScintilla_SetMarginWidth2(@ptrCast(self), @intCast(margin), s_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, []const u8) callconv(.c) void ```
    pub fn OnSetMarginWidth2(self: ?*anyopaque, slot: fn (?*anyopaque, i32, []const u8) callconv(.c) void) void {
        C.QsciScintilla_OnSetMarginWidth2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, s: []const u8 ```
    pub fn QBaseSetMarginWidth2(self: ?*anyopaque, margin: i32, s: []const u8) void {
        const s_str = C.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };
        C.QsciScintilla_QBaseSetMarginWidth2(@ptrCast(self), @intCast(margin), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setModified)
    ///
    /// ``` self: ?*C.QsciScintilla, m: bool ```
    pub fn SetModified(self: ?*anyopaque, m: bool) void {
        C.QsciScintilla_SetModified(@ptrCast(self), m);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetModified(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetModified(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, m: bool ```
    pub fn QBaseSetModified(self: ?*anyopaque, m: bool) void {
        C.QsciScintilla_QBaseSetModified(@ptrCast(self), m);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setPaper)
    ///
    /// ``` self: ?*C.QsciScintilla, c: ?*C.QColor ```
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciScintilla_SetPaper(@ptrCast(self), @ptrCast(c));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetPaper(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, c: ?*C.QColor ```
    pub fn QBaseSetPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetPaper(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setReadOnly)
    ///
    /// ``` self: ?*C.QsciScintilla, ro: bool ```
    pub fn SetReadOnly(self: ?*anyopaque, ro: bool) void {
        C.QsciScintilla_SetReadOnly(@ptrCast(self), ro);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetReadOnly(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetReadOnly(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, ro: bool ```
    pub fn QBaseSetReadOnly(self: ?*anyopaque, ro: bool) void {
        C.QsciScintilla_QBaseSetReadOnly(@ptrCast(self), ro);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setSelection)
    ///
    /// ``` self: ?*C.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32 ```
    pub fn SetSelection(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        C.QsciScintilla_SetSelection(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32, i32, i32) callconv(.c) void ```
    pub fn OnSetSelection(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32 ```
    pub fn QBaseSetSelection(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        C.QsciScintilla_QBaseSetSelection(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setSelectionBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetSelectionBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetSelectionBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetSelectionBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetSelectionBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetSelectionBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetSelectionBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setSelectionForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn SetSelectionForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_SetSelectionForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QColor) callconv(.c) void ```
    pub fn OnSetSelectionForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetSelectionForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor ```
    pub fn QBaseSetSelectionForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetSelectionForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setTabIndents)
    ///
    /// ``` self: ?*C.QsciScintilla, indent: bool ```
    pub fn SetTabIndents(self: ?*anyopaque, indent: bool) void {
        C.QsciScintilla_SetTabIndents(@ptrCast(self), indent);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetTabIndents(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetTabIndents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, indent: bool ```
    pub fn QBaseSetTabIndents(self: ?*anyopaque, indent: bool) void {
        C.QsciScintilla_QBaseSetTabIndents(@ptrCast(self), indent);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setTabWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn SetTabWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_SetTabWidth(@ptrCast(self), @intCast(width));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnSetTabWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetTabWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, width: i32 ```
    pub fn QBaseSetTabWidth(self: ?*anyopaque, width: i32) void {
        C.QsciScintilla_QBaseSetTabWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setText)
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_SetText(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8) callconv(.c) void ```
    pub fn OnSetText(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QsciScintilla_OnSetText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn QBaseSetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QsciScintilla_QBaseSetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setUtf8)
    ///
    /// ``` self: ?*C.QsciScintilla, cp: bool ```
    pub fn SetUtf8(self: ?*anyopaque, cp: bool) void {
        C.QsciScintilla_SetUtf8(@ptrCast(self), cp);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetUtf8(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetUtf8(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, cp: bool ```
    pub fn QBaseSetUtf8(self: ?*anyopaque, cp: bool) void {
        C.QsciScintilla_QBaseSetUtf8(@ptrCast(self), cp);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWhitespaceVisibility)
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.WhitespaceVisibility ```
    pub fn SetWhitespaceVisibility(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_SetWhitespaceVisibility(@ptrCast(self), @intCast(mode));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qsciscintilla_enums.WhitespaceVisibility) callconv(.c) void ```
    pub fn OnSetWhitespaceVisibility(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QsciScintilla_OnSetWhitespaceVisibility(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.WhitespaceVisibility ```
    pub fn QBaseSetWhitespaceVisibility(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_QBaseSetWhitespaceVisibility(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWrapMode)
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.WrapMode ```
    pub fn SetWrapMode(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_SetWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qsciscintilla_enums.WrapMode) callconv(.c) void ```
    pub fn OnSetWrapMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QsciScintilla_OnSetWrapMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, mode: qsciscintilla_enums.WrapMode ```
    pub fn QBaseSetWrapMode(self: ?*anyopaque, mode: i64) void {
        C.QsciScintilla_QBaseSetWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#undo)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Undo(self: ?*anyopaque) void {
        C.QsciScintilla_Undo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnUndo(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnUndo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseUndo(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseUndo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#unindent)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn Unindent(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_Unindent(@ptrCast(self), @intCast(line));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnUnindent(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnUnindent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn QBaseUnindent(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_QBaseUnindent(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#zoomIn)
    ///
    /// ``` self: ?*C.QsciScintilla, range: i32 ```
    pub fn ZoomIn(self: ?*anyopaque, range: i32) void {
        C.QsciScintilla_ZoomIn(@ptrCast(self), @intCast(range));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnZoomIn(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnZoomIn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, range: i32 ```
    pub fn QBaseZoomIn(self: ?*anyopaque, range: i32) void {
        C.QsciScintilla_QBaseZoomIn(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#zoomIn)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ZoomIn2(self: ?*anyopaque) void {
        C.QsciScintilla_ZoomIn2(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnZoomIn2(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnZoomIn2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseZoomIn2(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseZoomIn2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#zoomOut)
    ///
    /// ``` self: ?*C.QsciScintilla, range: i32 ```
    pub fn ZoomOut(self: ?*anyopaque, range: i32) void {
        C.QsciScintilla_ZoomOut(@ptrCast(self), @intCast(range));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnZoomOut(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnZoomOut(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, range: i32 ```
    pub fn QBaseZoomOut(self: ?*anyopaque, range: i32) void {
        C.QsciScintilla_QBaseZoomOut(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#zoomOut)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ZoomOut2(self: ?*anyopaque) void {
        C.QsciScintilla_ZoomOut2(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnZoomOut2(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnZoomOut2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseZoomOut2(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseZoomOut2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#zoomTo)
    ///
    /// ``` self: ?*C.QsciScintilla, size: i32 ```
    pub fn ZoomTo(self: ?*anyopaque, size: i32) void {
        C.QsciScintilla_ZoomTo(@ptrCast(self), @intCast(size));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) void ```
    pub fn OnZoomTo(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QsciScintilla_OnZoomTo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, size: i32 ```
    pub fn QBaseZoomTo(self: ?*anyopaque, size: i32) void {
        C.QsciScintilla_QBaseZoomTo(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#cursorPositionChanged)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, index: i32 ```
    pub fn CursorPositionChanged(self: ?*anyopaque, line: i32, index: i32) void {
        C.QsciScintilla_CursorPositionChanged(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) void ```
    pub fn OnCursorPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_Connect_CursorPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#copyAvailable)
    ///
    /// ``` self: ?*C.QsciScintilla, yes: bool ```
    pub fn CopyAvailable(self: ?*anyopaque, yes: bool) void {
        C.QsciScintilla_CopyAvailable(@ptrCast(self), yes);
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnCopyAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_Connect_CopyAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indicatorClicked)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, index: i32, state: i32 ```
    pub fn IndicatorClicked(self: ?*anyopaque, line: i32, index: i32, state: i64) void {
        C.QsciScintilla_IndicatorClicked(@ptrCast(self), @intCast(line), @intCast(index), @intCast(state));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32, i32) callconv(.c) void ```
    pub fn OnIndicatorClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        C.QsciScintilla_Connect_IndicatorClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indicatorReleased)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32, index: i32, state: i32 ```
    pub fn IndicatorReleased(self: ?*anyopaque, line: i32, index: i32, state: i64) void {
        C.QsciScintilla_IndicatorReleased(@ptrCast(self), @intCast(line), @intCast(index), @intCast(state));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32, i32) callconv(.c) void ```
    pub fn OnIndicatorReleased(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        C.QsciScintilla_Connect_IndicatorReleased(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#linesChanged)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn LinesChanged(self: ?*anyopaque) void {
        C.QsciScintilla_LinesChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla) callconv(.c) void ```
    pub fn OnLinesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_Connect_LinesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginClicked)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, line: i32, state: i32 ```
    pub fn MarginClicked(self: ?*anyopaque, margin: i32, line: i32, state: i64) void {
        C.QsciScintilla_MarginClicked(@ptrCast(self), @intCast(margin), @intCast(line), @intCast(state));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32, i32) callconv(.c) void ```
    pub fn OnMarginClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        C.QsciScintilla_Connect_MarginClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#marginRightClicked)
    ///
    /// ``` self: ?*C.QsciScintilla, margin: i32, line: i32, state: i32 ```
    pub fn MarginRightClicked(self: ?*anyopaque, margin: i32, line: i32, state: i64) void {
        C.QsciScintilla_MarginRightClicked(@ptrCast(self), @intCast(margin), @intCast(line), @intCast(state));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32, i32) callconv(.c) void ```
    pub fn OnMarginRightClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        C.QsciScintilla_Connect_MarginRightClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#modificationAttempted)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ModificationAttempted(self: ?*anyopaque) void {
        C.QsciScintilla_ModificationAttempted(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla) callconv(.c) void ```
    pub fn OnModificationAttempted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_Connect_ModificationAttempted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#modificationChanged)
    ///
    /// ``` self: ?*C.QsciScintilla, m: bool ```
    pub fn ModificationChanged(self: ?*anyopaque, m: bool) void {
        C.QsciScintilla_ModificationChanged(@ptrCast(self), m);
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnModificationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_Connect_ModificationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#selectionChanged)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        C.QsciScintilla_SelectionChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#textChanged)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn TextChanged(self: ?*anyopaque) void {
        C.QsciScintilla_TextChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla) callconv(.c) void ```
    pub fn OnTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_Connect_TextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#userListActivated)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32, stringVal: []const u8 ```
    pub fn UserListActivated(self: ?*anyopaque, id: i32, stringVal: []const u8) void {
        const stringVal_str = C.struct_libqt_string{
            .len = stringVal.len,
            .data = @constCast(stringVal.ptr),
        };
        C.QsciScintilla_UserListActivated(@ptrCast(self), @intCast(id), stringVal_str);
    }

    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, []const u8) callconv(.c) void ```
    pub fn OnUserListActivated(self: ?*anyopaque, slot: fn (?*anyopaque, i32, []const u8) callconv(.c) void) void {
        C.QsciScintilla_Connect_UserListActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#event)
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QsciScintilla_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciScintilla_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#changeEvent)
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#contextMenuEvent)
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#wheelEvent)
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QsciScintilla_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QsciScintilla_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearAnnotations)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn ClearAnnotations1(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_ClearAnnotations1(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#indicatorDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle, indicatorNumber: i32 ```
    pub fn IndicatorDefine2(self: ?*anyopaque, style: i64, indicatorNumber: i32) i32 {
        return C.QsciScintilla_IndicatorDefine2(@ptrCast(self), @intCast(style), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, sym: qsciscintilla_enums.MarkerSymbol, markerNumber: i32 ```
    pub fn MarkerDefine2(self: ?*anyopaque, sym: i64, markerNumber: i32) i32 {
        return C.QsciScintilla_MarkerDefine2(@ptrCast(self), @intCast(sym), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, ch: i8, markerNumber: i32 ```
    pub fn MarkerDefine22(self: ?*anyopaque, ch: i8, markerNumber: i32) i32 {
        return C.QsciScintilla_MarkerDefine22(@ptrCast(self), @intCast(ch), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, pm: ?*C.QPixmap, markerNumber: i32 ```
    pub fn MarkerDefine23(self: ?*anyopaque, pm: ?*anyopaque, markerNumber: i32) i32 {
        return C.QsciScintilla_MarkerDefine23(@ptrCast(self), @ptrCast(pm), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDefine)
    ///
    /// ``` self: ?*C.QsciScintilla, im: ?*C.QImage, markerNumber: i32 ```
    pub fn MarkerDefine24(self: ?*anyopaque, im: ?*anyopaque, markerNumber: i32) i32 {
        return C.QsciScintilla_MarkerDefine24(@ptrCast(self), @ptrCast(im), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDelete)
    ///
    /// ``` self: ?*C.QsciScintilla, linenr: i32, markerNumber: i32 ```
    pub fn MarkerDelete2(self: ?*anyopaque, linenr: i32, markerNumber: i32) void {
        C.QsciScintilla_MarkerDelete2(@ptrCast(self), @intCast(linenr), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#markerDeleteAll)
    ///
    /// ``` self: ?*C.QsciScintilla, markerNumber: i32 ```
    pub fn MarkerDeleteAll1(self: ?*anyopaque, markerNumber: i32) void {
        C.QsciScintilla_MarkerDeleteAll1(@ptrCast(self), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorDrawUnder)
    ///
    /// ``` self: ?*C.QsciScintilla, under: bool, indicatorNumber: i32 ```
    pub fn SetIndicatorDrawUnder2(self: ?*anyopaque, under: bool, indicatorNumber: i32) void {
        C.QsciScintilla_SetIndicatorDrawUnder2(@ptrCast(self), under, @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor, indicatorNumber: i32 ```
    pub fn SetIndicatorForegroundColor2(self: ?*anyopaque, col: ?*anyopaque, indicatorNumber: i32) void {
        C.QsciScintilla_SetIndicatorForegroundColor2(@ptrCast(self), @ptrCast(col), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorHoverForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor, indicatorNumber: i32 ```
    pub fn SetIndicatorHoverForegroundColor2(self: ?*anyopaque, col: ?*anyopaque, indicatorNumber: i32) void {
        C.QsciScintilla_SetIndicatorHoverForegroundColor2(@ptrCast(self), @ptrCast(col), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorHoverStyle)
    ///
    /// ``` self: ?*C.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle, indicatorNumber: i32 ```
    pub fn SetIndicatorHoverStyle2(self: ?*anyopaque, style: i64, indicatorNumber: i32) void {
        C.QsciScintilla_SetIndicatorHoverStyle2(@ptrCast(self), @intCast(style), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setIndicatorOutlineColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor, indicatorNumber: i32 ```
    pub fn SetIndicatorOutlineColor2(self: ?*anyopaque, col: ?*anyopaque, indicatorNumber: i32) void {
        C.QsciScintilla_SetIndicatorOutlineColor2(@ptrCast(self), @ptrCast(col), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#clearMarginText)
    ///
    /// ``` self: ?*C.QsciScintilla, line: i32 ```
    pub fn ClearMarginText1(self: ?*anyopaque, line: i32) void {
        C.QsciScintilla_ClearMarginText1(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarkerBackgroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor, markerNumber: i32 ```
    pub fn SetMarkerBackgroundColor2(self: ?*anyopaque, col: ?*anyopaque, markerNumber: i32) void {
        C.QsciScintilla_SetMarkerBackgroundColor2(@ptrCast(self), @ptrCast(col), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setMarkerForegroundColor)
    ///
    /// ``` self: ?*C.QsciScintilla, col: ?*C.QColor, markerNumber: i32 ```
    pub fn SetMarkerForegroundColor2(self: ?*anyopaque, col: ?*anyopaque, markerNumber: i32) void {
        C.QsciScintilla_SetMarkerForegroundColor2(@ptrCast(self), @ptrCast(col), @intCast(markerNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWrapVisualFlags)
    ///
    /// ``` self: ?*C.QsciScintilla, endFlag: qsciscintilla_enums.WrapVisualFlag, startFlag: qsciscintilla_enums.WrapVisualFlag ```
    pub fn SetWrapVisualFlags2(self: ?*anyopaque, endFlag: i64, startFlag: i64) void {
        C.QsciScintilla_SetWrapVisualFlags2(@ptrCast(self), @intCast(endFlag), @intCast(startFlag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintilla.html#setWrapVisualFlags)
    ///
    /// ``` self: ?*C.QsciScintilla, endFlag: qsciscintilla_enums.WrapVisualFlag, startFlag: qsciscintilla_enums.WrapVisualFlag, indent: i32 ```
    pub fn SetWrapVisualFlags3(self: ?*anyopaque, endFlag: i64, startFlag: i64, indent: i32) void {
        C.QsciScintilla_SetWrapVisualFlags3(@ptrCast(self), @intCast(endFlag), @intCast(startFlag), @intCast(indent));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#pool)
    ///
    ///
    pub fn Pool() ?*C.QsciScintillaBase {
        return C.QsciScintillaBase_Pool();
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#replaceHorizontalScrollBar)
    ///
    /// ``` self: ?*C.QsciScintilla, scrollBar: ?*C.QScrollBar ```
    pub fn ReplaceHorizontalScrollBar(self: ?*anyopaque, scrollBar: ?*anyopaque) void {
        C.QsciScintillaBase_ReplaceHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollBar));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#replaceVerticalScrollBar)
    ///
    /// ``` self: ?*C.QsciScintilla, scrollBar: ?*C.QScrollBar ```
    pub fn ReplaceVerticalScrollBar(self: ?*anyopaque, scrollBar: ?*anyopaque) void {
        C.QsciScintillaBase_ReplaceVerticalScrollBar(@ptrCast(self), @ptrCast(scrollBar));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32 ```
    pub fn SendScintilla(self: ?*anyopaque, msg: u32) i64 {
        return C.QsciScintillaBase_SendScintilla(@ptrCast(self), @intCast(msg));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: u64, lParam: ?*anyopaque ```
    pub fn SendScintilla2(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return C.QsciScintillaBase_SendScintilla2(@ptrCast(self), @intCast(msg), @intCast(wParam), lParam);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: usize, lParam: []const u8 ```
    pub fn SendScintilla3(self: ?*anyopaque, msg: u32, wParam: usize, lParam: []const u8) i64 {
        const lParam_Cstring = @constCast(lParam.ptr);
        return C.QsciScintillaBase_SendScintilla3(@ptrCast(self), @intCast(msg), @intCast(wParam), lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, lParam: []const u8 ```
    pub fn SendScintilla4(self: ?*anyopaque, msg: u32, lParam: []const u8) i64 {
        const lParam_Cstring = @constCast(lParam.ptr);
        return C.QsciScintillaBase_SendScintilla4(@ptrCast(self), @intCast(msg), lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: []const u8, lParam: []const u8 ```
    pub fn SendScintilla5(self: ?*anyopaque, msg: u32, wParam: []const u8, lParam: []const u8) i64 {
        const wParam_Cstring = @constCast(wParam.ptr);
        const lParam_Cstring = @constCast(lParam.ptr);
        return C.QsciScintillaBase_SendScintilla5(@ptrCast(self), @intCast(msg), wParam_Cstring, lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: i64 ```
    pub fn SendScintilla6(self: ?*anyopaque, msg: u32, wParam: i64) i64 {
        return C.QsciScintillaBase_SendScintilla6(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: i32 ```
    pub fn SendScintilla7(self: ?*anyopaque, msg: u32, wParam: i32) i64 {
        return C.QsciScintillaBase_SendScintilla7(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, cpMin: i64, cpMax: i64, lpstrText: []const u8 ```
    pub fn SendScintilla8(self: ?*anyopaque, msg: u32, cpMin: i64, cpMax: i64, lpstrText: []const u8) i64 {
        const lpstrText_Cstring = @constCast(lpstrText.ptr);
        return C.QsciScintillaBase_SendScintilla8(@ptrCast(self), @intCast(msg), @intCast(cpMin), @intCast(cpMax), lpstrText_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: u64, col: ?*C.QColor ```
    pub fn SendScintilla9(self: ?*anyopaque, msg: u32, wParam: u64, col: ?*anyopaque) i64 {
        return C.QsciScintillaBase_SendScintilla9(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(col));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, col: ?*C.QColor ```
    pub fn SendScintilla10(self: ?*anyopaque, msg: u32, col: ?*anyopaque) i64 {
        return C.QsciScintillaBase_SendScintilla10(@ptrCast(self), @intCast(msg), @ptrCast(col));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: u64, hdc: ?*C.QPainter, rc: ?*C.QRect, cpMin: i64, cpMax: i64 ```
    pub fn SendScintilla11(self: ?*anyopaque, msg: u32, wParam: u64, hdc: ?*anyopaque, rc: ?*anyopaque, cpMin: i64, cpMax: i64) i64 {
        return C.QsciScintillaBase_SendScintilla11(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(hdc), @ptrCast(rc), @intCast(cpMin), @intCast(cpMax));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: u64, lParam: ?*C.QPixmap ```
    pub fn SendScintilla12(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return C.QsciScintillaBase_SendScintilla12(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(lParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: u64, lParam: ?*C.QImage ```
    pub fn SendScintilla13(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return C.QsciScintillaBase_SendScintilla13(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(lParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintillaPtrResult)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32 ```
    pub fn SendScintillaPtrResult(self: ?*anyopaque, msg: u32) ?*anyopaque {
        return C.QsciScintillaBase_SendScintillaPtrResult(@ptrCast(self), @intCast(msg));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#commandKey)
    ///
    /// ``` qt_key: i32, modifiers: ?*i32 ```
    pub fn CommandKey(qt_key: i32, modifiers: ?*anyopaque) i32 {
        return C.QsciScintillaBase_CommandKey(@intCast(qt_key), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#QSCN_SELCHANGED)
    ///
    /// ``` self: ?*C.QsciScintilla, yes: bool ```
    pub fn QSCN_SELCHANGED(self: ?*anyopaque, yes: bool) void {
        C.QsciScintillaBase_QSCN_SELCHANGED(@ptrCast(self), yes);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, bool) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCCANCELLED)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_AUTOCCANCELLED(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_AUTOCCANCELLED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCCHARDELETED)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_AUTOCCHARDELETED(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_AUTOCCHARDELETED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCCOMPLETED)
    ///
    /// ``` self: ?*C.QsciScintilla, selection: []const u8, position: i32, ch: i32, method: i32 ```
    pub fn SCN_AUTOCCOMPLETED(self: ?*anyopaque, selection: []const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = @constCast(selection.ptr);
        C.QsciScintillaBase_SCN_AUTOCCOMPLETED(@ptrCast(self), selection_Cstring, @intCast(position), @intCast(ch), @intCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, []const u8, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCSELECTION)
    ///
    /// ``` self: ?*C.QsciScintilla, selection: []const u8, position: i32, ch: i32, method: i32 ```
    pub fn SCN_AUTOCSELECTION(self: ?*anyopaque, selection: []const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = @constCast(selection.ptr);
        C.QsciScintillaBase_SCN_AUTOCSELECTION(@ptrCast(self), selection_Cstring, @intCast(position), @intCast(ch), @intCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, []const u8, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCSELECTION)
    ///
    /// ``` self: ?*C.QsciScintilla, selection: []const u8, position: i32 ```
    pub fn SCN_AUTOCSELECTION2(self: ?*anyopaque, selection: []const u8, position: i32) void {
        const selection_Cstring = @constCast(selection.ptr);
        C.QsciScintillaBase_SCN_AUTOCSELECTION2(@ptrCast(self), selection_Cstring, @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, []const u8, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_AUTOCSELECTIONCHANGE)
    ///
    /// ``` self: ?*C.QsciScintilla, selection: []const u8, id: i32, position: i32 ```
    pub fn SCN_AUTOCSELECTIONCHANGE(self: ?*anyopaque, selection: []const u8, id: i32, position: i32) void {
        const selection_Cstring = @constCast(selection.ptr);
        C.QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, []const u8, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCEN_CHANGE)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCEN_CHANGE(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCEN_CHANGE(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_CALLTIPCLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, direction: i32 ```
    pub fn SCN_CALLTIPCLICK(self: ?*anyopaque, direction: i32) void {
        C.QsciScintillaBase_SCN_CALLTIPCLICK(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_CHARADDED)
    ///
    /// ``` self: ?*C.QsciScintilla, charadded: i32 ```
    pub fn SCN_CHARADDED(self: ?*anyopaque, charadded: i32) void {
        C.QsciScintillaBase_SCN_CHARADDED(@ptrCast(self), @intCast(charadded));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_DOUBLECLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, line: i32, modifiers: i32 ```
    pub fn SCN_DOUBLECLICK(self: ?*anyopaque, position: i32, line: i32, modifiers: i32) void {
        C.QsciScintillaBase_SCN_DOUBLECLICK(@ptrCast(self), @intCast(position), @intCast(line), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_DWELLEND)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, x: i32, y: i32 ```
    pub fn SCN_DWELLEND(self: ?*anyopaque, position: i32, x: i32, y: i32) void {
        C.QsciScintillaBase_SCN_DWELLEND(@ptrCast(self), @intCast(position), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_DWELLSTART)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, x: i32, y: i32 ```
    pub fn SCN_DWELLSTART(self: ?*anyopaque, position: i32, x: i32, y: i32) void {
        C.QsciScintillaBase_SCN_DWELLSTART(@ptrCast(self), @intCast(position), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_FOCUSIN)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_FOCUSIN(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_FOCUSIN(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_FOCUSOUT)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_FOCUSOUT(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_FOCUSOUT(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_HOTSPOTCLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTCLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        C.QsciScintillaBase_SCN_HOTSPOTCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_HOTSPOTDOUBLECLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTDOUBLECLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        C.QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_HOTSPOTRELEASECLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTRELEASECLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        C.QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_INDICATORCLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_INDICATORCLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        C.QsciScintillaBase_SCN_INDICATORCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_INDICATORRELEASE)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_INDICATORRELEASE(self: ?*anyopaque, position: i32, modifiers: i32) void {
        C.QsciScintillaBase_SCN_INDICATORRELEASE(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MACRORECORD)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: u32, param2: u64, param3: ?*anyopaque ```
    pub fn SCN_MACRORECORD(self: ?*anyopaque, param1: u32, param2: u64, param3: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_MACRORECORD(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, u32, u64, ?*anyopaque) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MARGINCLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, modifiers: i32, margin: i32 ```
    pub fn SCN_MARGINCLICK(self: ?*anyopaque, position: i32, modifiers: i32, margin: i32) void {
        C.QsciScintillaBase_SCN_MARGINCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers), @intCast(margin));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MARGINRIGHTCLICK)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32, modifiers: i32, margin: i32 ```
    pub fn SCN_MARGINRIGHTCLICK(self: ?*anyopaque, position: i32, modifiers: i32, margin: i32) void {
        C.QsciScintillaBase_SCN_MARGINRIGHTCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers), @intCast(margin));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MODIFIED)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: i32, param2: i32, param3: []const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32 ```
    pub fn SCN_MODIFIED(self: ?*anyopaque, param1: i32, param2: i32, param3: []const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32) void {
        const param3_Cstring = @constCast(param3.ptr);
        C.QsciScintillaBase_SCN_MODIFIED(@ptrCast(self), @intCast(param1), @intCast(param2), param3_Cstring, @intCast(param4), @intCast(param5), @intCast(param6), @intCast(param7), @intCast(param8), @intCast(param9), @intCast(param10));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32, []const u8, i32, i32, i32, i32, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_MODIFYATTEMPTRO)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_MODIFYATTEMPTRO(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_MODIFYATTEMPTRO(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_NEEDSHOWN)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: i32, param2: i32 ```
    pub fn SCN_NEEDSHOWN(self: ?*anyopaque, param1: i32, param2: i32) void {
        C.QsciScintillaBase_SCN_NEEDSHOWN(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_PAINTED)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_PAINTED(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_PAINTED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_SAVEPOINTLEFT)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_SAVEPOINTLEFT(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_SAVEPOINTLEFT(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_SAVEPOINTREACHED)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_SAVEPOINTREACHED(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_SAVEPOINTREACHED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_STYLENEEDED)
    ///
    /// ``` self: ?*C.QsciScintilla, position: i32 ```
    pub fn SCN_STYLENEEDED(self: ?*anyopaque, position: i32) void {
        C.QsciScintillaBase_SCN_STYLENEEDED(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_URIDROPPED)
    ///
    /// ``` self: ?*C.QsciScintilla, url: ?*C.QUrl ```
    pub fn SCN_URIDROPPED(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_URIDROPPED(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, ?*C.QUrl) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_UPDATEUI)
    ///
    /// ``` self: ?*C.QsciScintilla, updated: i32 ```
    pub fn SCN_UPDATEUI(self: ?*anyopaque, updated: i32) void {
        C.QsciScintillaBase_SCN_UPDATEUI(@ptrCast(self), @intCast(updated));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_USERLISTSELECTION)
    ///
    /// ``` self: ?*C.QsciScintilla, selection: []const u8, id: i32, ch: i32, method: i32, position: i32 ```
    pub fn SCN_USERLISTSELECTION(self: ?*anyopaque, selection: []const u8, id: i32, ch: i32, method: i32, position: i32) void {
        const selection_Cstring = @constCast(selection.ptr);
        C.QsciScintillaBase_SCN_USERLISTSELECTION(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(ch), @intCast(method), @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, []const u8, i32, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_USERLISTSELECTION)
    ///
    /// ``` self: ?*C.QsciScintilla, selection: []const u8, id: i32, ch: i32, method: i32 ```
    pub fn SCN_USERLISTSELECTION2(self: ?*anyopaque, selection: []const u8, id: i32, ch: i32, method: i32) void {
        const selection_Cstring = @constCast(selection.ptr);
        C.QsciScintillaBase_SCN_USERLISTSELECTION2(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(ch), @intCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, []const u8, i32, i32, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_USERLISTSELECTION)
    ///
    /// ``` self: ?*C.QsciScintilla, selection: []const u8, id: i32 ```
    pub fn SCN_USERLISTSELECTION3(self: ?*anyopaque, selection: []const u8, id: i32) void {
        const selection_Cstring = @constCast(selection.ptr);
        C.QsciScintillaBase_SCN_USERLISTSELECTION3(@ptrCast(self), selection_Cstring, @intCast(id));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase, []const u8, i32) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SCN_ZOOM)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SCN_ZOOM(self: ?*anyopaque) void {
        C.QsciScintillaBase_SCN_ZOOM(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ``` self: ?*C.QsciScintillaBase, slot: fn (?*C.QsciScintillaBase) callconv(.c) void ```
    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: u64 ```
    pub fn SendScintilla22(self: ?*anyopaque, msg: u32, wParam: u64) i64 {
        return C.QsciScintillaBase_SendScintilla22(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#SendScintilla)
    ///
    /// ``` self: ?*C.QsciScintilla, msg: u32, wParam: u64, lParam: i64 ```
    pub fn SendScintilla32(self: ?*anyopaque, msg: u32, wParam: u64, lParam: i64) i64 {
        return C.QsciScintillaBase_SendScintilla32(@ptrCast(self), @intCast(msg), @intCast(wParam), @intCast(lParam));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i64) void {
        C.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn VerticalScrollBar(self: ?*anyopaque) ?*C.QScrollBar {
        return C.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: ?*C.QsciScintilla, scrollbar: ?*C.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        C.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i64) void {
        C.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) ?*C.QScrollBar {
        return C.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: ?*C.QsciScintilla, scrollbar: ?*C.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        C.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CornerWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: ?*C.QsciScintilla, widget: ?*C.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: ?*C.QsciScintilla, widget: ?*C.QWidget, alignment: i32 ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i64) void {
        C.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: ?*C.QsciScintilla, alignment: i32, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i64, allocator: std.mem.Allocator) []?*C.QWidget {
        const _arr: C.struct_libqt_list = C.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QWidget, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Viewport(self: ?*anyopaque) ?*C.QWidget {
        return C.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: ?*C.QsciScintilla, widget: ?*C.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MaximumViewportSize(self: ?*anyopaque) ?*C.QSize {
        return C.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i64 {
        return C.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i64) void {
        C.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return C.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: ?*C.QsciScintilla, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        C.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return C.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FrameShape(self: ?*anyopaque) i64 {
        return C.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: ?*C.QsciScintilla, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i64) void {
        C.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FrameShadow(self: ?*anyopaque) i64 {
        return C.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: ?*C.QsciScintilla, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i64) void {
        C.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return C.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        C.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return C.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        C.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FrameRect(self: ?*anyopaque) ?*C.QRect {
        return C.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: ?*C.QsciScintilla, frameRect: ?*C.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        C.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WinId(self: ?*anyopaque) usize {
        return C.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        C.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return C.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return C.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Style(self: ?*anyopaque) ?*C.QStyle {
        return C.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: ?*C.QsciScintilla, style: ?*C.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return C.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return C.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WindowModality(self: ?*anyopaque) i64 {
        return C.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: ?*C.QsciScintilla, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i64) void {
        C.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: ?*C.QsciScintilla, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        C.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: ?*C.QsciScintilla, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        C.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FrameGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn NormalGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn X(self: ?*anyopaque) i32 {
        return C.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Y(self: ?*anyopaque) i32 {
        return C.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Pos(self: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FrameSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Size(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Rect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ChildrenRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ChildrenRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QsciScintilla, minimumSize: ?*C.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        C.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QsciScintilla, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        C.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QsciScintilla, maximumSize: ?*C.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        C.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QsciScintilla, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        C.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        C.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QsciScintilla, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        C.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        C.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QsciScintilla, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        C.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SizeIncrement(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QsciScintilla, sizeIncrement: ?*C.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        C.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QsciScintilla, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BaseSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QsciScintilla, baseSize: ?*C.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        C.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QsciScintilla, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        C.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QsciScintilla, fixedSize: ?*C.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        C.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QsciScintilla, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: ?*C.QsciScintilla, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        C.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: ?*C.QsciScintilla, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        C.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPoint ```
    pub fn MapToGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPoint ```
    pub fn MapFromGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPoint ```
    pub fn MapToParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPoint ```
    pub fn MapFromParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Window(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn NativeParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn TopLevelWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Palette(self: ?*anyopaque) ?*C.QPalette {
        return C.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: ?*C.QsciScintilla, palette: ?*C.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: ?*C.QsciScintilla, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i64) void {
        C.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BackgroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: ?*C.QsciScintilla, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i64) void {
        C.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ForegroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FontMetrics(self: ?*anyopaque) ?*C.QFontMetrics {
        return C.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FontInfo(self: ?*anyopaque) ?*C.QFontInfo {
        return C.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: ?*C.QsciScintilla, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return C.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QsciScintilla, mask: ?*C.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QsciScintilla, mask: ?*C.QRegion ```
    pub fn SetMaskWithMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMaskWithMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Mask(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ClearMask(self: ?*anyopaque) void {
        C.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, target: ?*C.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        C.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, painter: ?*C.QPainter ```
    pub fn RenderWithPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QWidget_RenderWithPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Grab(self: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn GraphicsEffect(self: ?*anyopaque) ?*C.QGraphicsEffect {
        return C.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: ?*C.QsciScintilla, effect: ?*C.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        C.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QsciScintilla, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: ?*C.QsciScintilla, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: ?*C.QsciScintilla, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = C.struct_libqt_string{
            .len = windowTitle.len,
            .data = @constCast(windowTitle.ptr),
        };
        C.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: ?*C.QsciScintilla, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = C.struct_libqt_string{
            .len = styleSheet.len,
            .data = @constCast(styleSheet.ptr),
        };
        C.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_StyleSheet(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowTitle(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: ?*C.QsciScintilla, icon: ?*C.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WindowIcon(self: ?*anyopaque) ?*C.QIcon {
        return C.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: ?*C.QsciScintilla, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = C.struct_libqt_string{
            .len = windowIconText.len,
            .data = @constCast(windowIconText.ptr),
        };
        C.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowIconText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: ?*C.QsciScintilla, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = C.struct_libqt_string{
            .len = windowRole.len,
            .data = @constCast(windowRole.ptr),
        };
        C.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowRole(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: ?*C.QsciScintilla, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowFilePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: ?*C.QsciScintilla, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        C.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return C.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return C.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: ?*C.QsciScintilla, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_ToolTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: ?*C.QsciScintilla, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        C.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return C.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: ?*C.QsciScintilla, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = C.struct_libqt_string{
            .len = statusTip.len,
            .data = @constCast(statusTip.ptr),
        };
        C.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_StatusTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: ?*C.QsciScintilla, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = C.struct_libqt_string{
            .len = whatsThis.len,
            .data = @constCast(whatsThis.ptr),
        };
        C.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WhatsThis(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_AccessibleName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: ?*C.QsciScintilla, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_AccessibleDescription(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: ?*C.QsciScintilla, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = C.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        C.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: ?*C.QsciScintilla, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        C.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return C.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        C.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: ?*C.QsciScintilla, locale: ?*C.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        C.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Locale(self: ?*anyopaque) ?*C.QLocale {
        return C.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        C.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return C.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return C.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SetFocus(self: ?*anyopaque) void {
        C.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        C.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        C.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QsciScintilla, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocusWithReason(self: ?*anyopaque, reason: i64) void {
        C.QWidget_SetFocusWithReason(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return C.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: ?*C.QWidget, param2: ?*C.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        C.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: ?*C.QsciScintilla, focusProxy: ?*C.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        C.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FocusProxy(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: ?*C.QsciScintilla, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        C.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QCursor ```
    pub fn GrabMouseWithQCursor(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_GrabMouseWithQCursor(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        C.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        C.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        C.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QsciScintilla, key: ?*C.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return C.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        C.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        C.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        C.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() ?*C.QWidget {
        return C.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() ?*C.QWidget {
        return C.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return C.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) ?*C.QGraphicsProxyWidget {
        return C.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Update(self: ?*anyopaque) void {
        C.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Repaint(self: ?*anyopaque) void {
        C.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QsciScintilla, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QRect ```
    pub fn UpdateWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QRegion ```
    pub fn UpdateWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QsciScintilla, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QRect ```
    pub fn RepaintWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QRegion ```
    pub fn RepaintWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: ?*C.QsciScintilla, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        C.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Show(self: ?*anyopaque) void {
        C.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        C.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        C.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        C.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        C.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Raise(self: ?*anyopaque) void {
        C.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Lower(self: ?*anyopaque) void {
        C.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QsciScintilla, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        C.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPoint ```
    pub fn MoveWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_MoveWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QsciScintilla, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QSize ```
    pub fn ResizeWithQSize(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_ResizeWithQSize(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QsciScintilla, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QsciScintilla, geometry: ?*C.QRect ```
    pub fn SetGeometryWithGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QWidget_SetGeometryWithGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QWidget_SaveGeometry(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: ?*C.QsciScintilla, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = C.struct_libqt_string{
            .len = geometry.len,
            .data = @constCast(geometry.ptr),
        };
        return C.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        C.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return C.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return C.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return C.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return C.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return C.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: ?*C.QsciScintilla, state: i32 ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: ?*C.QsciScintilla, state: i32 ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SizePolicy(self: ?*anyopaque) ?*C.QSizePolicy {
        return C.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QsciScintilla, sizePolicy: C.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: C.QSizePolicy) void {
        C.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QsciScintilla, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i64, vertical: i64) void {
        C.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn VisibleRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QsciScintilla, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QsciScintilla, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QWidget_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: ?*C.QsciScintilla, layout: ?*C.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        C.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QsciScintilla, parent: ?*C.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QsciScintilla, parent: ?*C.QWidget, f: i32 ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        C.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QsciScintilla, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QsciScintilla, dx: i32, dy: i32, param3: ?*C.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        C.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FocusWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn NextInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return C.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: ?*C.QsciScintilla, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        C.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QsciScintilla, action: ?*C.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: ?*C.QsciScintilla, actions: []?*C.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: ?*C.QsciScintilla, before: ?*C.QAction, actions: []?*C.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: ?*C.QsciScintilla, before: ?*C.QAction, action: ?*C.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: ?*C.QsciScintilla, action: ?*C.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAction {
        const _arr: C.struct_libqt_list = C.QWidget_Actions(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAction, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8 ```
    pub fn AddActionWithText(self: ?*anyopaque, text: []const u8) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddActionWithText(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QsciScintilla, icon: ?*C.QIcon, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QsciScintilla, text: []const u8, shortcut: ?*C.QKeySequence ```
    pub fn AddAction3(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction3(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QsciScintilla, icon: ?*C.QIcon, text: []const u8, shortcut: ?*C.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction4(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: ?*C.QsciScintilla, typeVal: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return C.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: ?*C.QsciScintilla, typeVal: i32 ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return C.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) ?*C.QWidget {
        return C.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: ?*C.QsciScintilla, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) ?*C.QWidget {
        return C.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: ?*C.QsciScintilla, p: ?*C.QPoint ```
    pub fn ChildAtWithQPoint(self: ?*anyopaque, p: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ChildAtWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i64) bool {
        return C.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        C.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QsciScintilla, child: ?*C.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return C.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: ?*C.QsciScintilla, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BackingStore(self: ?*anyopaque) ?*C.QBackingStore {
        return C.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WindowHandle(self: ?*anyopaque) ?*C.QWindow {
        return C.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Screen(self: ?*anyopaque) ?*C.QScreen {
        return C.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: ?*C.QsciScintilla, screen: ?*C.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: ?*C.QsciScintilla, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: ?*C.QsciScintilla, icon: ?*C.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, ?*C.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: ?*C.QsciScintilla, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = C.struct_libqt_string{
            .len = iconText.len,
            .data = @constCast(iconText.ptr),
        };
        C.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, []const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: ?*C.QsciScintilla, pos: ?*C.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        C.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, ?*C.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return C.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: ?*C.QsciScintilla, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        C.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint ```
    pub fn Render2(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render2(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, painter: ?*C.QPainter, targetOffset: ?*C.QPoint ```
    pub fn Render22(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render22(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QsciScintilla, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QsciScintilla, rectangle: ?*C.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QsciScintilla, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        C.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QsciScintilla, key: ?*C.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i64) i32 {
        return C.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow, parent: ?*C.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow, parent: ?*C.QWidget, flags: i32 ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciScintilla, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QsciScintilla, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QsciScintilla, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciScintilla, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QsciScintilla, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QsciScintilla, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QsciScintilla, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QsciScintilla, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QsciScintilla ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QsciScintilla, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QsciScintilla, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QsciScintilla, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciScintilla ```
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
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QsciScintilla, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QsciScintilla, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QsciScintilla, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return C.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return C.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return C.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return C.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, source: ?*C.QMimeData ```
    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return C.QsciScintilla_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, source: ?*C.QMimeData ```
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMimeData) callconv(.c) bool ```
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciScintilla_OnCanInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#fromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, source: ?*C.QMimeData, rectangular: ?*bool, allocator: std.mem.Allocator ```
    pub fn FromMimeData(self: ?*anyopaque, source: ?*anyopaque, rectangular: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QsciScintilla_FromMimeData(@ptrCast(self), @ptrCast(source), @ptrCast(rectangular));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, source: ?*C.QMimeData, rectangular: ?*bool, allocator: std.mem.Allocator ```
    pub fn QBaseFromMimeData(self: ?*anyopaque, source: ?*anyopaque, rectangular: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QsciScintilla_QBaseFromMimeData(@ptrCast(self), @ptrCast(source), @ptrCast(rectangular));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMimeData, ?*bool) callconv(.c) []u8 ```
    pub fn OnFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) []u8) void {
        C.QsciScintilla_OnFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#toMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, text: []u8, rectangular: bool ```
    pub fn ToMimeData(self: ?*anyopaque, text: []u8, rectangular: bool) ?*C.QMimeData {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QsciScintilla_ToMimeData(@ptrCast(self), text_str, rectangular);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, text: []u8, rectangular: bool ```
    pub fn QBaseToMimeData(self: ?*anyopaque, text: []u8, rectangular: bool) ?*C.QMimeData {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QsciScintilla_QBaseToMimeData(@ptrCast(self), text_str, rectangular);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []u8, bool) callconv(.c) ?*C.QMimeData ```
    pub fn OnToMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, bool) callconv(.c) ?*C.QMimeData) void {
        C.QsciScintilla_OnToMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QsciScintilla_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QsciScintilla_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        C.QsciScintilla_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, e: ?*C.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QsciScintilla_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QsciScintilla_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QsciScintilla_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn MinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QsciScintilla_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QsciScintilla_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QsciScintilla_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QsciScintilla_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QsciScintilla_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QsciScintilla_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, viewport: ?*C.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        C.QsciScintilla_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, viewport: ?*C.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QObject, param2: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return C.QsciScintilla_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QObject, param2: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciScintilla_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QsciScintilla_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciScintilla_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ViewportSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QsciScintilla_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QsciScintilla_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QsciScintilla_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, option: ?*C.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QsciScintilla_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, option: ?*C.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QsciScintilla_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return C.QsciScintilla_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return C.QsciScintilla_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciScintilla_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QsciScintilla_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        C.QsciScintilla_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QsciScintilla_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QsciScintilla_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QsciScintilla_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QsciScintilla_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QsciScintilla_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QsciScintilla_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn PaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QsciScintilla_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBasePaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QsciScintilla_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) ?*C.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPaintEngine) void {
        C.QsciScintilla_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QsciScintilla_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QsciScintilla_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []u8, ?*anyopaque, ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciScintilla_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return C.QsciScintilla_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return C.QsciScintilla_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        C.QsciScintilla_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, painter: ?*C.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QsciScintilla_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, painter: ?*C.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QsciScintilla_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, offset: ?*C.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QsciScintilla_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, offset: ?*C.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QsciScintilla_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QPoint) callconv(.c) ?*C.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPaintDevice) void {
        C.QsciScintilla_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QsciScintilla_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QsciScintilla_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) ?*C.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainter) void {
        C.QsciScintilla_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QsciScintilla_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciScintilla_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciScintilla_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciScintilla_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QsciScintilla_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#setScrollBars)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SetScrollBars(self: ?*anyopaque) void {
        C.QsciScintilla_SetScrollBars(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseSetScrollBars(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseSetScrollBars(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnSetScrollBars(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnSetScrollBars(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsciscintillabase.html#contextMenuNeeded)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, x: i32, y: i32 ```
    pub fn ContextMenuNeeded(self: ?*anyopaque, x: i32, y: i32) bool {
        return C.QsciScintilla_ContextMenuNeeded(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, x: i32, y: i32 ```
    pub fn QBaseContextMenuNeeded(self: ?*anyopaque, x: i32, y: i32) bool {
        return C.QsciScintilla_QBaseContextMenuNeeded(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32) callconv(.c) bool ```
    pub fn OnContextMenuNeeded(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) bool) void {
        C.QsciScintilla_OnContextMenuNeeded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QsciScintilla_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QsciScintilla_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, i32, i32, i32, i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        C.QsciScintilla_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn ViewportMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QsciScintilla_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QsciScintilla_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) ?*C.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QMargins) void {
        C.QsciScintilla_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QsciScintilla_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, param1: ?*C.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QsciScintilla_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QsciScintilla_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        C.QsciScintilla_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Create(self: ?*anyopaque) void {
        C.QsciScintilla_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Destroy(self: ?*anyopaque) void {
        C.QsciScintilla_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        C.QsciScintilla_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QsciScintilla_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return C.QsciScintilla_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QsciScintilla_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return C.QsciScintilla_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QsciScintilla_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciScintilla_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QsciScintilla_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QsciScintilla_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciScintilla_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QsciScintilla_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QsciScintilla_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciScintilla_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QsciScintilla_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QsciScintilla_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciScintilla_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QsciScintilla_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QsciScintilla, slot: fn (?*C.QsciScintilla, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QsciScintilla_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QsciScintilla ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QsciScintilla_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsciscintilla.html#types
pub const enums = struct {
    pub const QsciScintilla = enum {
        pub const AiMaintain: i32 = 1;
        pub const AiOpening: i32 = 2;
        pub const AiClosing: i32 = 4;
        pub const MoNone: i32 = 0;
        pub const MoSublineSelect: i32 = 1;
    };

    pub const AnnotationDisplay = enum {
        pub const AnnotationHidden: i32 = 0;
        pub const AnnotationStandard: i32 = 1;
        pub const AnnotationBoxed: i32 = 2;
        pub const AnnotationIndented: i32 = 3;
    };

    pub const AutoCompletionUseSingle = enum {
        pub const AcusNever: i32 = 0;
        pub const AcusExplicit: i32 = 1;
        pub const AcusAlways: i32 = 2;
    };

    pub const AutoCompletionSource = enum {
        pub const AcsNone: i32 = 0;
        pub const AcsAll: i32 = 1;
        pub const AcsDocument: i32 = 2;
        pub const AcsAPIs: i32 = 3;
    };

    pub const BraceMatch = enum {
        pub const NoBraceMatch: i32 = 0;
        pub const StrictBraceMatch: i32 = 1;
        pub const SloppyBraceMatch: i32 = 2;
    };

    pub const CallTipsPosition = enum {
        pub const CallTipsBelowText: i32 = 0;
        pub const CallTipsAboveText: i32 = 1;
    };

    pub const CallTipsStyle = enum {
        pub const CallTipsNone: i32 = 0;
        pub const CallTipsNoContext: i32 = 1;
        pub const CallTipsNoAutoCompletionContext: i32 = 2;
        pub const CallTipsContext: i32 = 3;
    };

    pub const EdgeMode = enum {
        pub const EdgeNone: i32 = 0;
        pub const EdgeLine: i32 = 1;
        pub const EdgeBackground: i32 = 2;
        pub const EdgeMultipleLines: i32 = 3;
    };

    pub const EolMode = enum {
        pub const EolWindows: i32 = 0;
        pub const EolUnix: i32 = 2;
        pub const EolMac: i32 = 1;
    };

    pub const FoldStyle = enum {
        pub const NoFoldStyle: i32 = 0;
        pub const PlainFoldStyle: i32 = 1;
        pub const CircledFoldStyle: i32 = 2;
        pub const BoxedFoldStyle: i32 = 3;
        pub const CircledTreeFoldStyle: i32 = 4;
        pub const BoxedTreeFoldStyle: i32 = 5;
    };

    pub const IndicatorStyle = enum {
        pub const PlainIndicator: i32 = 0;
        pub const SquiggleIndicator: i32 = 1;
        pub const TTIndicator: i32 = 2;
        pub const DiagonalIndicator: i32 = 3;
        pub const StrikeIndicator: i32 = 4;
        pub const HiddenIndicator: i32 = 5;
        pub const BoxIndicator: i32 = 6;
        pub const RoundBoxIndicator: i32 = 7;
        pub const StraightBoxIndicator: i32 = 8;
        pub const FullBoxIndicator: i32 = 16;
        pub const DashesIndicator: i32 = 9;
        pub const DotsIndicator: i32 = 10;
        pub const SquiggleLowIndicator: i32 = 11;
        pub const DotBoxIndicator: i32 = 12;
        pub const SquigglePixmapIndicator: i32 = 13;
        pub const ThickCompositionIndicator: i32 = 14;
        pub const ThinCompositionIndicator: i32 = 15;
        pub const TextColorIndicator: i32 = 17;
        pub const TriangleIndicator: i32 = 18;
        pub const TriangleCharacterIndicator: i32 = 19;
        pub const GradientIndicator: i32 = 20;
        pub const CentreGradientIndicator: i32 = 21;
    };

    pub const MarginType = enum {
        pub const SymbolMargin: i32 = 0;
        pub const SymbolMarginDefaultForegroundColor: i32 = 3;
        pub const SymbolMarginDefaultBackgroundColor: i32 = 2;
        pub const NumberMargin: i32 = 1;
        pub const TextMargin: i32 = 4;
        pub const TextMarginRightJustified: i32 = 5;
        pub const SymbolMarginColor: i32 = 6;
    };

    pub const MarkerSymbol = enum {
        pub const Circle: i32 = 0;
        pub const Rectangle: i32 = 1;
        pub const RightTriangle: i32 = 2;
        pub const SmallRectangle: i32 = 3;
        pub const RightArrow: i32 = 4;
        pub const Invisible: i32 = 5;
        pub const DownTriangle: i32 = 6;
        pub const Minus: i32 = 7;
        pub const Plus: i32 = 8;
        pub const VerticalLine: i32 = 9;
        pub const BottomLeftCorner: i32 = 10;
        pub const LeftSideSplitter: i32 = 11;
        pub const BoxedPlus: i32 = 12;
        pub const BoxedPlusConnected: i32 = 13;
        pub const BoxedMinus: i32 = 14;
        pub const BoxedMinusConnected: i32 = 15;
        pub const RoundedBottomLeftCorner: i32 = 16;
        pub const LeftSideRoundedSplitter: i32 = 17;
        pub const CircledPlus: i32 = 18;
        pub const CircledPlusConnected: i32 = 19;
        pub const CircledMinus: i32 = 20;
        pub const CircledMinusConnected: i32 = 21;
        pub const Background: i32 = 22;
        pub const ThreeDots: i32 = 23;
        pub const ThreeRightArrows: i32 = 24;
        pub const FullRectangle: i32 = 26;
        pub const LeftRectangle: i32 = 27;
        pub const Underline: i32 = 29;
        pub const Bookmark: i32 = 31;
    };

    pub const TabDrawMode = enum {
        pub const TabLongArrow: i32 = 0;
        pub const TabStrikeOut: i32 = 1;
    };

    pub const WhitespaceVisibility = enum {
        pub const WsInvisible: i32 = 0;
        pub const WsVisible: i32 = 1;
        pub const WsVisibleAfterIndent: i32 = 2;
        pub const WsVisibleOnlyInIndent: i32 = 3;
    };

    pub const WrapMode = enum {
        pub const WrapNone: i32 = 0;
        pub const WrapWord: i32 = 1;
        pub const WrapCharacter: i32 = 2;
        pub const WrapWhitespace: i32 = 3;
    };

    pub const WrapVisualFlag = enum {
        pub const WrapFlagNone: i32 = 0;
        pub const WrapFlagByText: i32 = 1;
        pub const WrapFlagByBorder: i32 = 2;
        pub const WrapFlagInMargin: i32 = 3;
    };

    pub const WrapIndentMode = enum {
        pub const WrapIndentFixed: i32 = 0;
        pub const WrapIndentSame: i32 = 1;
        pub const WrapIndentIndented: i32 = 2;
        pub const WrapIndentDeeplyIndented: i32 = 3;
    };
};
