const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsciscintilla_enums = enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html
pub const qsciscintilla = struct {
    /// New constructs a new QsciScintilla object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QsciScintilla {
        return qtc.QsciScintilla_new(@ptrCast(parent));
    }

    /// New2 constructs a new QsciScintilla object.
    ///
    ///
    pub fn New2() QtC.QsciScintilla {
        return qtc.QsciScintilla_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QsciScintilla_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QsciScintilla, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintilla_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QsciScintilla, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QsciScintilla_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QsciScintilla_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QsciScintilla_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QsciScintilla_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, pos: i32, context_start: *i32, last_word_start: *i32, allocator: std.mem.Allocator ```
    pub fn ApiContext(self: ?*anyopaque, pos: i32, context_start: *i32, last_word_start: *i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QsciScintilla_ApiContext(@ptrCast(self), @intCast(pos), @ptrCast(context_start), @ptrCast(last_word_start));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, pos: i32, context_start: *i32, last_word_start: *i32) callconv(.c) [][]const u8 ```
    pub fn OnApiContext(self: ?*anyopaque, slot: fn (?*anyopaque, i32, *i32, *i32) callconv(.c) [][]const u8) void {
        qtc.QsciScintilla_OnApiContext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, pos: i32, context_start: *i32, last_word_start: *i32, allocator: std.mem.Allocator ```
    pub fn QBaseApiContext(self: ?*anyopaque, pos: i32, context_start: *i32, last_word_start: *i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QsciScintilla_QBaseApiContext(@ptrCast(self), @intCast(pos), @ptrCast(context_start), @ptrCast(last_word_start));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, text: []const u8, style: i32 ```
    pub fn Annotate(self: ?*anyopaque, line: i32, text: []const u8, style: i32) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_Annotate(@ptrCast(self), @intCast(line), text_str, @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, text: []const u8, style: QtC.QsciStyle ```
    pub fn Annotate2(self: ?*anyopaque, line: i32, text: []const u8, style: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_Annotate2(@ptrCast(self), @intCast(line), text_str, @ptrCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, text: QtC.QsciStyledText ```
    pub fn Annotate3(self: ?*anyopaque, line: i32, text: ?*anyopaque) void {
        qtc.QsciScintilla_Annotate3(@ptrCast(self), @intCast(line), @ptrCast(text));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, allocator: std.mem.Allocator ```
    pub fn Annotation(self: ?*anyopaque, line: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciScintilla_Annotation(@ptrCast(self), @intCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Annotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AnnotationDisplay(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_AnnotationDisplay(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ClearAnnotations(self: ?*anyopaque) void {
        qtc.QsciScintilla_ClearAnnotations(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompletionCaseSensitivity(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_AutoCompletionCaseSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompletionFillupsEnabled(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_AutoCompletionFillupsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompletionReplaceWord(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_AutoCompletionReplaceWord(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompletionShowSingle(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_AutoCompletionShowSingle(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompletionSource(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_AutoCompletionSource(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompletionThreshold(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_AutoCompletionThreshold(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompletionUseSingle(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_AutoCompletionUseSingle(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoIndent(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_AutoIndent(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BackspaceUnindents(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_BackspaceUnindents(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BeginUndoAction(self: ?*anyopaque) void {
        qtc.QsciScintilla_BeginUndoAction(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BraceMatching(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_BraceMatching(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, start: i32, end: i32, allocator: std.mem.Allocator ```
    pub fn Bytes(self: ?*anyopaque, start: i32, end: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QsciScintilla_Bytes(@ptrCast(self), @intCast(start), @intCast(end));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.Bytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CallTipsPosition(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_CallTipsPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CallTipsStyle(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_CallTipsStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CallTipsVisible(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_CallTipsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CancelFind(self: ?*anyopaque) void {
        qtc.QsciScintilla_CancelFind(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CancelList(self: ?*anyopaque) void {
        qtc.QsciScintilla_CancelList(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CaseSensitive(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_CaseSensitive(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ClearFolds(self: ?*anyopaque) void {
        qtc.QsciScintilla_ClearFolds(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32 ```
    pub fn ClearIndicatorRange(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_ClearIndicatorRange(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ClearRegisteredImages(self: ?*anyopaque) void {
        qtc.QsciScintilla_ClearRegisteredImages(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QsciScintilla_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn ContractedFolds(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QsciScintilla_ContractedFolds(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsciscintilla.ContractedFolds: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.EolMode ```
    pub fn ConvertEols(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_ConvertEols(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CreateStandardContextMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.QsciScintilla_CreateStandardContextMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Document(self: ?*anyopaque) QtC.QsciDocument {
        return qtc.QsciScintilla_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EndUndoAction(self: ?*anyopaque) void {
        qtc.QsciScintilla_EndUndoAction(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EdgeColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QsciScintilla_EdgeColor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EdgeColumn(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_EdgeColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EdgeMode(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_EdgeMode(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, f: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QsciScintilla_SetFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EolMode(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_EolMode(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EolVisibility(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_EolVisibility(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ExtraAscent(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_ExtraAscent(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ExtraDescent(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_ExtraDescent(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32 ```
    pub fn FillIndicatorRange(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_FillIndicatorRange(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool ```
    pub fn FindFirst(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.struct_libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_FindFirst(@ptrCast(self), expr_str, re, cs, wo, wrap, forward, @intCast(line), @intCast(index), show, posix, cxx11);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) callconv(.c) bool ```
    pub fn OnFindFirst(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, bool, bool, bool, bool, bool, i32, i32, bool, bool, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool ```
    pub fn QBaseFindFirst(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.struct_libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_QBaseFindFirst(@ptrCast(self), expr_str, re, cs, wo, wrap, forward, @intCast(line), @intCast(index), show, posix, cxx11);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool ```
    pub fn FindFirstInSelection(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.struct_libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_FindFirstInSelection(@ptrCast(self), expr_str, re, cs, wo, forward, show, posix, cxx11);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) callconv(.c) bool ```
    pub fn OnFindFirstInSelection(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, bool, bool, bool, bool, bool, bool, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindFirstInSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool ```
    pub fn QBaseFindFirstInSelection(self: ?*anyopaque, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.struct_libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_QBaseFindFirstInSelection(@ptrCast(self), expr_str, re, cs, wo, forward, show, posix, cxx11);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FindNext(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_FindNext(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnFindNext(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindNext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseFindNext(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseFindNext(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, brace: *i64, other: *i64, mode: qsciscintilla_enums.BraceMatch ```
    pub fn FindMatchingBrace(self: ?*anyopaque, brace: *i64, other: *i64, mode: i64) bool {
        return qtc.QsciScintilla_FindMatchingBrace(@ptrCast(self), @ptrCast(brace), @ptrCast(other), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FirstVisibleLine(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_FirstVisibleLine(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Folding(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_Folding(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: *i32, index: *i32 ```
    pub fn GetCursorPosition(self: ?*anyopaque, line: *i32, index: *i32) void {
        qtc.QsciScintilla_GetCursorPosition(@ptrCast(self), @ptrCast(line), @ptrCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, lineFrom: *i32, indexFrom: *i32, lineTo: *i32, indexTo: *i32 ```
    pub fn GetSelection(self: ?*anyopaque, lineFrom: *i32, indexFrom: *i32, lineTo: *i32, indexTo: *i32) void {
        qtc.QsciScintilla_GetSelection(@ptrCast(self), @ptrCast(lineFrom), @ptrCast(indexFrom), @ptrCast(lineTo), @ptrCast(indexTo));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HasSelectedText(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_HasSelectedText(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn Indentation(self: ?*anyopaque, line: i32) i32 {
        return qtc.QsciScintilla_Indentation(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IndentationGuides(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IndentationGuides(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IndentationsUseTabs(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IndentationsUseTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IndentationWidth(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_IndentationWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle ```
    pub fn IndicatorDefine(self: ?*anyopaque, style: i64) i32 {
        return qtc.QsciScintilla_IndicatorDefine(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, indicatorNumber: i32 ```
    pub fn IndicatorDrawUnder(self: ?*anyopaque, indicatorNumber: i32) bool {
        return qtc.QsciScintilla_IndicatorDrawUnder(@ptrCast(self), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsCallTipActive(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsCallTipActive(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsListActive(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsListActive(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsModified(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsModified(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsReadOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsRedoAvailable(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsRedoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsUndoAvailable(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsUndoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsUtf8(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsUtf8(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, ch: i8 ```
    pub fn IsWordCharacter(self: ?*anyopaque, ch: i8) bool {
        return qtc.QsciScintilla_IsWordCharacter(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, point: QtC.QPoint ```
    pub fn LineAt(self: ?*anyopaque, point: ?*anyopaque) i32 {
        return qtc.QsciScintilla_LineAt(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, line: *i32, index: *i32 ```
    pub fn LineIndexFromPosition(self: ?*anyopaque, position: i32, line: *i32, index: *i32) void {
        qtc.QsciScintilla_LineIndexFromPosition(@ptrCast(self), @intCast(position), @ptrCast(line), @ptrCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn LineLength(self: ?*anyopaque, line: i32) i32 {
        return qtc.QsciScintilla_LineLength(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Lines(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_Lines(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Lexer(self: ?*anyopaque) QtC.QsciLexer {
        return qtc.QsciScintilla_Lexer(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32 ```
    pub fn MarginBackgroundColor(self: ?*anyopaque, margin: i32) QtC.QColor {
        return qtc.QsciScintilla_MarginBackgroundColor(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32 ```
    pub fn MarginLineNumbers(self: ?*anyopaque, margin: i32) bool {
        return qtc.QsciScintilla_MarginLineNumbers(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32 ```
    pub fn MarginMarkerMask(self: ?*anyopaque, margin: i32) i32 {
        return qtc.QsciScintilla_MarginMarkerMask(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MarginOptions(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_MarginOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32 ```
    pub fn MarginSensitivity(self: ?*anyopaque, margin: i32) bool {
        return qtc.QsciScintilla_MarginSensitivity(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32 ```
    pub fn MarginType(self: ?*anyopaque, margin: i32) i64 {
        return qtc.QsciScintilla_MarginType(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32 ```
    pub fn MarginWidth(self: ?*anyopaque, margin: i32) i32 {
        return qtc.QsciScintilla_MarginWidth(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Margins(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_Margins(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, sym: qsciscintilla_enums.MarkerSymbol ```
    pub fn MarkerDefine(self: ?*anyopaque, sym: i64) i32 {
        return qtc.QsciScintilla_MarkerDefine(@ptrCast(self), @intCast(sym));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, ch: i8 ```
    pub fn MarkerDefine2(self: ?*anyopaque, ch: i8) i32 {
        return qtc.QsciScintilla_MarkerDefine2(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, pm: QtC.QPixmap ```
    pub fn MarkerDefine3(self: ?*anyopaque, pm: ?*anyopaque) i32 {
        return qtc.QsciScintilla_MarkerDefine3(@ptrCast(self), @ptrCast(pm));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, im: QtC.QImage ```
    pub fn MarkerDefine4(self: ?*anyopaque, im: ?*anyopaque) i32 {
        return qtc.QsciScintilla_MarkerDefine4(@ptrCast(self), @ptrCast(im));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32, markerNumber: i32 ```
    pub fn MarkerAdd(self: ?*anyopaque, linenr: i32, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerAdd(@ptrCast(self), @intCast(linenr), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32 ```
    pub fn MarkersAtLine(self: ?*anyopaque, linenr: i32) u32 {
        return qtc.QsciScintilla_MarkersAtLine(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32 ```
    pub fn MarkerDelete(self: ?*anyopaque, linenr: i32) void {
        qtc.QsciScintilla_MarkerDelete(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MarkerDeleteAll(self: ?*anyopaque) void {
        qtc.QsciScintilla_MarkerDeleteAll(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mhandle: i32 ```
    pub fn MarkerDeleteHandle(self: ?*anyopaque, mhandle: i32) void {
        qtc.QsciScintilla_MarkerDeleteHandle(@ptrCast(self), @intCast(mhandle));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mhandle: i32 ```
    pub fn MarkerLine(self: ?*anyopaque, mhandle: i32) i32 {
        return qtc.QsciScintilla_MarkerLine(@ptrCast(self), @intCast(mhandle));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32, mask: u32 ```
    pub fn MarkerFindNext(self: ?*anyopaque, linenr: i32, mask: u32) i32 {
        return qtc.QsciScintilla_MarkerFindNext(@ptrCast(self), @intCast(linenr), @intCast(mask));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32, mask: u32 ```
    pub fn MarkerFindPrevious(self: ?*anyopaque, linenr: i32, mask: u32) i32 {
        return qtc.QsciScintilla_MarkerFindPrevious(@ptrCast(self), @intCast(linenr), @intCast(mask));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn OverwriteMode(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_OverwriteMode(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Paper(self: ?*anyopaque) QtC.QColor {
        return qtc.QsciScintilla_Paper(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, index: i32 ```
    pub fn PositionFromLineIndex(self: ?*anyopaque, line: i32, index: i32) i32 {
        return qtc.QsciScintilla_PositionFromLineIndex(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, io: QtC.QIODevice ```
    pub fn Read(self: ?*anyopaque, io: ?*anyopaque) bool {
        return qtc.QsciScintilla_Read(@ptrCast(self), @ptrCast(io));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, start: i32, end: i32 ```
    pub fn Recolor(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.QsciScintilla_Recolor(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, start: i32, end: i32) callconv(.c) void ```
    pub fn OnRecolor(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnRecolor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, start: i32, end: i32 ```
    pub fn QBaseRecolor(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.QsciScintilla_QBaseRecolor(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32, pm: QtC.QPixmap ```
    pub fn RegisterImage(self: ?*anyopaque, id: i32, pm: ?*anyopaque) void {
        qtc.QsciScintilla_RegisterImage(@ptrCast(self), @intCast(id), @ptrCast(pm));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32, im: QtC.QImage ```
    pub fn RegisterImage2(self: ?*anyopaque, id: i32, im: ?*anyopaque) void {
        qtc.QsciScintilla_RegisterImage2(@ptrCast(self), @intCast(id), @ptrCast(im));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, replaceStr: []const u8 ```
    pub fn Replace(self: ?*anyopaque, replaceStr: []const u8) void {
        const replaceStr_str = qtc.struct_libqt_string{
            .len = replaceStr.len,
            .data = replaceStr.ptr,
        };
        qtc.QsciScintilla_Replace(@ptrCast(self), replaceStr_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, replaceStr: []const u8) callconv(.c) void ```
    pub fn OnReplace(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnReplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, replaceStr: []const u8 ```
    pub fn QBaseReplace(self: ?*anyopaque, replaceStr: []const u8) void {
        const replaceStr_str = qtc.struct_libqt_string{
            .len = replaceStr.len,
            .data = replaceStr.ptr,
        };
        qtc.QsciScintilla_QBaseReplace(@ptrCast(self), replaceStr_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ResetFoldMarginColors(self: ?*anyopaque) void {
        qtc.QsciScintilla_ResetFoldMarginColors(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ResetHotspotBackgroundColor(self: ?*anyopaque) void {
        qtc.QsciScintilla_ResetHotspotBackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ResetHotspotForegroundColor(self: ?*anyopaque) void {
        qtc.QsciScintilla_ResetHotspotForegroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ScrollWidth(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_ScrollWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ScrollWidthTracking(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_ScrollWidthTracking(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, fore: QtC.QColor, back: QtC.QColor ```
    pub fn SetFoldMarginColors(self: ?*anyopaque, fore: ?*anyopaque, back: ?*anyopaque) void {
        qtc.QsciScintilla_SetFoldMarginColors(@ptrCast(self), @ptrCast(fore), @ptrCast(back));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, display: qsciscintilla_enums.AnnotationDisplay ```
    pub fn SetAnnotationDisplay(self: ?*anyopaque, display: i64) void {
        qtc.QsciScintilla_SetAnnotationDisplay(@ptrCast(self), @intCast(display));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, enabled: bool ```
    pub fn SetAutoCompletionFillupsEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QsciScintilla_SetAutoCompletionFillupsEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, fillups: []const u8 ```
    pub fn SetAutoCompletionFillups(self: ?*anyopaque, fillups: []const u8) void {
        const fillups_Cstring = fillups.ptr;
        qtc.QsciScintilla_SetAutoCompletionFillups(@ptrCast(self), fillups_Cstring);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, separators: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetAutoCompletionWordSeparators(self: ?*anyopaque, separators: [][]const u8, allocator: std.mem.Allocator) void {
        var separators_arr = allocator.alloc(qtc.struct_libqt_string, separators.len) catch @panic("qsciscintilla.SetAutoCompletionWordSeparators: Memory allocation failed");
        defer allocator.free(separators_arr);
        for (separators, 0..separators.len) |item, i| {
            separators_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const separators_list = qtc.struct_libqt_list{
            .len = separators.len,
            .data = separators_arr.ptr,
        };
        qtc.QsciScintilla_SetAutoCompletionWordSeparators(@ptrCast(self), separators_list);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetCallTipsBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetCallTipsBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetCallTipsForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetCallTipsForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetCallTipsHighlightColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetCallTipsHighlightColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: qsciscintilla_enums.CallTipsPosition ```
    pub fn SetCallTipsPosition(self: ?*anyopaque, position: i64) void {
        qtc.QsciScintilla_SetCallTipsPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, style: qsciscintilla_enums.CallTipsStyle ```
    pub fn SetCallTipsStyle(self: ?*anyopaque, style: i64) void {
        qtc.QsciScintilla_SetCallTipsStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, nr: i32 ```
    pub fn SetCallTipsVisible(self: ?*anyopaque, nr: i32) void {
        qtc.QsciScintilla_SetCallTipsVisible(@ptrCast(self), @intCast(nr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, folds: []i32 ```
    pub fn SetContractedFolds(self: ?*anyopaque, folds: []i32) void {
        const folds_list = qtc.struct_libqt_list{
            .len = folds.len,
            .data = folds.ptr,
        };
        qtc.QsciScintilla_SetContractedFolds(@ptrCast(self), folds_list);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, document: QtC.QsciDocument ```
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QsciScintilla_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, colnr: i32, col: QtC.QColor ```
    pub fn AddEdgeColumn(self: ?*anyopaque, colnr: i32, col: ?*anyopaque) void {
        qtc.QsciScintilla_AddEdgeColumn(@ptrCast(self), @intCast(colnr), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ClearEdgeColumns(self: ?*anyopaque) void {
        qtc.QsciScintilla_ClearEdgeColumns(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetEdgeColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetEdgeColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, colnr: i32 ```
    pub fn SetEdgeColumn(self: ?*anyopaque, colnr: i32) void {
        qtc.QsciScintilla_SetEdgeColumn(@ptrCast(self), @intCast(colnr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.EdgeMode ```
    pub fn SetEdgeMode(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_SetEdgeMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32 ```
    pub fn SetFirstVisibleLine(self: ?*anyopaque, linenr: i32) void {
        qtc.QsciScintilla_SetFirstVisibleLine(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, under: bool ```
    pub fn SetIndicatorDrawUnder(self: ?*anyopaque, under: bool) void {
        qtc.QsciScintilla_SetIndicatorDrawUnder(@ptrCast(self), under);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetIndicatorForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetIndicatorForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetIndicatorHoverForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetIndicatorHoverForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle ```
    pub fn SetIndicatorHoverStyle(self: ?*anyopaque, style: i64) void {
        qtc.QsciScintilla_SetIndicatorHoverStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetIndicatorOutlineColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetIndicatorOutlineColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, col: QtC.QColor ```
    pub fn SetMarginBackgroundColor(self: ?*anyopaque, margin: i32, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetMarginBackgroundColor(@ptrCast(self), @intCast(margin), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, options: i32 ```
    pub fn SetMarginOptions(self: ?*anyopaque, options: i32) void {
        qtc.QsciScintilla_SetMarginOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, text: []const u8, style: i32 ```
    pub fn SetMarginText(self: ?*anyopaque, line: i32, text: []const u8, style: i32) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SetMarginText(@ptrCast(self), @intCast(line), text_str, @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, text: []const u8, style: QtC.QsciStyle ```
    pub fn SetMarginText2(self: ?*anyopaque, line: i32, text: []const u8, style: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SetMarginText2(@ptrCast(self), @intCast(line), text_str, @ptrCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, text: QtC.QsciStyledText ```
    pub fn SetMarginText3(self: ?*anyopaque, line: i32, text: ?*anyopaque) void {
        qtc.QsciScintilla_SetMarginText3(@ptrCast(self), @intCast(line), @ptrCast(text));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, typeVal: qsciscintilla_enums.MarginType ```
    pub fn SetMarginType(self: ?*anyopaque, margin: i32, typeVal: i64) void {
        qtc.QsciScintilla_SetMarginType(@ptrCast(self), @intCast(margin), @intCast(typeVal));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ClearMarginText(self: ?*anyopaque) void {
        qtc.QsciScintilla_ClearMarginText(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margins: i32 ```
    pub fn SetMargins(self: ?*anyopaque, margins: i32) void {
        qtc.QsciScintilla_SetMargins(@ptrCast(self), @intCast(margins));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetMarkerBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetMarkerBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetMarkerForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetMarkerForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetMatchedBraceBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetMatchedBraceBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetMatchedBraceForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetMatchedBraceForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, indicatorNumber: i32 ```
    pub fn SetMatchedBraceIndicator(self: ?*anyopaque, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetMatchedBraceIndicator(@ptrCast(self), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ResetMatchedBraceIndicator(self: ?*anyopaque) void {
        qtc.QsciScintilla_ResetMatchedBraceIndicator(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, pixelWidth: i32 ```
    pub fn SetScrollWidth(self: ?*anyopaque, pixelWidth: i32) void {
        qtc.QsciScintilla_SetScrollWidth(@ptrCast(self), @intCast(pixelWidth));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, enabled: bool ```
    pub fn SetScrollWidthTracking(self: ?*anyopaque, enabled: bool) void {
        qtc.QsciScintilla_SetScrollWidthTracking(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.TabDrawMode ```
    pub fn SetTabDrawMode(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_SetTabDrawMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetUnmatchedBraceBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetUnmatchedBraceBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetUnmatchedBraceForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetUnmatchedBraceForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, indicatorNumber: i32 ```
    pub fn SetUnmatchedBraceIndicator(self: ?*anyopaque, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetUnmatchedBraceIndicator(@ptrCast(self), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ResetUnmatchedBraceIndicator(self: ?*anyopaque) void {
        qtc.QsciScintilla_ResetUnmatchedBraceIndicator(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, endFlag: qsciscintilla_enums.WrapVisualFlag ```
    pub fn SetWrapVisualFlags(self: ?*anyopaque, endFlag: i64) void {
        qtc.QsciScintilla_SetWrapVisualFlags(@ptrCast(self), @intCast(endFlag));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn SelectedText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciScintilla_SelectedText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SelectionToEol(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_SelectionToEol(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetHotspotBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetHotspotBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetHotspotForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetHotspotForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn SetHotspotUnderline(self: ?*anyopaque, enable: bool) void {
        qtc.QsciScintilla_SetHotspotUnderline(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn SetHotspotWrap(self: ?*anyopaque, enable: bool) void {
        qtc.QsciScintilla_SetHotspotWrap(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, filled: bool ```
    pub fn SetSelectionToEol(self: ?*anyopaque, filled: bool) void {
        qtc.QsciScintilla_SetSelectionToEol(@ptrCast(self), filled);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, extra: i32 ```
    pub fn SetExtraAscent(self: ?*anyopaque, extra: i32) void {
        qtc.QsciScintilla_SetExtraAscent(@ptrCast(self), @intCast(extra));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, extra: i32 ```
    pub fn SetExtraDescent(self: ?*anyopaque, extra: i32) void {
        qtc.QsciScintilla_SetExtraDescent(@ptrCast(self), @intCast(extra));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, overwrite: bool ```
    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QsciScintilla_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetWhitespaceBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetWhitespaceBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetWhitespaceForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetWhitespaceForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, size: i32 ```
    pub fn SetWhitespaceSize(self: ?*anyopaque, size: i32) void {
        qtc.QsciScintilla_SetWhitespaceSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.WrapIndentMode ```
    pub fn SetWrapIndentMode(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_SetWrapIndentMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32, list: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ShowUserList(self: ?*anyopaque, id: i32, list: [][]const u8, allocator: std.mem.Allocator) void {
        var list_arr = allocator.alloc(qtc.struct_libqt_string, list.len) catch @panic("qsciscintilla.ShowUserList: Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |item, i| {
            list_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const list_list = qtc.struct_libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        qtc.QsciScintilla_ShowUserList(@ptrCast(self), @intCast(id), list_list);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn StandardCommands(self: ?*anyopaque) QtC.QsciCommandSet {
        return qtc.QsciScintilla_StandardCommands(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn TabDrawMode(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_TabDrawMode(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn TabIndents(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_TabIndents(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn TabWidth(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_TabWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciScintilla_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, allocator: std.mem.Allocator ```
    pub fn Text2(self: ?*anyopaque, line: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciScintilla_Text2(@ptrCast(self), @intCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, start: i32, end: i32, allocator: std.mem.Allocator ```
    pub fn Text3(self: ?*anyopaque, start: i32, end: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciScintilla_Text3(@ptrCast(self), @intCast(start), @intCast(end));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Text3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32 ```
    pub fn TextHeight(self: ?*anyopaque, linenr: i32) i32 {
        return qtc.QsciScintilla_TextHeight(@ptrCast(self), @intCast(linenr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WhitespaceSize(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_WhitespaceSize(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WhitespaceVisibility(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_WhitespaceVisibility(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, index: i32, allocator: std.mem.Allocator ```
    pub fn WordAtLineIndex(self: ?*anyopaque, line: i32, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciScintilla_WordAtLineIndex(@ptrCast(self), @intCast(line), @intCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WordAtLineIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, point: QtC.QPoint, allocator: std.mem.Allocator ```
    pub fn WordAtPoint(self: ?*anyopaque, point: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciScintilla_WordAtPoint(@ptrCast(self), @ptrCast(point));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WordAtPoint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WordCharacters(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QsciScintilla_WordCharacters(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WrapMode(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_WrapMode(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WrapIndentMode(self: ?*anyopaque) i64 {
        return qtc.QsciScintilla_WrapIndentMode(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, io: QtC.QIODevice ```
    pub fn Write(self: ?*anyopaque, io: ?*anyopaque) bool {
        return qtc.QsciScintilla_Write(@ptrCast(self), @ptrCast(io));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn Append(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_Append(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, text: []const u8) callconv(.c) void ```
    pub fn OnAppend(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnAppend(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn QBaseAppend(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_QBaseAppend(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompleteFromAll(self: ?*anyopaque) void {
        qtc.QsciScintilla_AutoCompleteFromAll(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnAutoCompleteFromAll(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseAutoCompleteFromAll(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseAutoCompleteFromAll(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompleteFromAPIs(self: ?*anyopaque) void {
        qtc.QsciScintilla_AutoCompleteFromAPIs(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnAutoCompleteFromAPIs(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromAPIs(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseAutoCompleteFromAPIs(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseAutoCompleteFromAPIs(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoCompleteFromDocument(self: ?*anyopaque) void {
        qtc.QsciScintilla_AutoCompleteFromDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnAutoCompleteFromDocument(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromDocument(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseAutoCompleteFromDocument(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseAutoCompleteFromDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CallTip(self: ?*anyopaque) void {
        qtc.QsciScintilla_CallTip(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCallTip(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCallTip(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseCallTip(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseCallTip(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QsciScintilla_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnClear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Copy(self: ?*anyopaque) void {
        qtc.QsciScintilla_Copy(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCopy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCopy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseCopy(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseCopy(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Cut(self: ?*anyopaque) void {
        qtc.QsciScintilla_Cut(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCut(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCut(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseCut(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseCut(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EnsureCursorVisible(self: ?*anyopaque) void {
        qtc.QsciScintilla_EnsureCursorVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnEnsureCursorVisible(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnEnsureCursorVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseEnsureCursorVisible(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseEnsureCursorVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn EnsureLineVisible(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_EnsureLineVisible(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32) callconv(.c) void ```
    pub fn OnEnsureLineVisible(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnEnsureLineVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn QBaseEnsureLineVisible(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_QBaseEnsureLineVisible(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, children: bool ```
    pub fn FoldAll(self: ?*anyopaque, children: bool) void {
        qtc.QsciScintilla_FoldAll(@ptrCast(self), children);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, children: bool) callconv(.c) void ```
    pub fn OnFoldAll(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnFoldAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, children: bool ```
    pub fn QBaseFoldAll(self: ?*anyopaque, children: bool) void {
        qtc.QsciScintilla_QBaseFoldAll(@ptrCast(self), children);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn FoldLine(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_FoldLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32) callconv(.c) void ```
    pub fn OnFoldLine(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnFoldLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn QBaseFoldLine(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_QBaseFoldLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn Indent(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_Indent(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32) callconv(.c) void ```
    pub fn OnIndent(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnIndent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn QBaseIndent(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_QBaseIndent(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn Insert(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_Insert(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, text: []const u8) callconv(.c) void ```
    pub fn OnInsert(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnInsert(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn QBaseInsert(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_QBaseInsert(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8, line: i32, index: i32 ```
    pub fn InsertAt(self: ?*anyopaque, text: []const u8, line: i32, index: i32) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_InsertAt(@ptrCast(self), text_str, @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, text: []const u8, line: i32, index: i32) callconv(.c) void ```
    pub fn OnInsertAt(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnInsertAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8, line: i32, index: i32 ```
    pub fn QBaseInsertAt(self: ?*anyopaque, text: []const u8, line: i32, index: i32) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_QBaseInsertAt(@ptrCast(self), text_str, @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MoveToMatchingBrace(self: ?*anyopaque) void {
        qtc.QsciScintilla_MoveToMatchingBrace(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnMoveToMatchingBrace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnMoveToMatchingBrace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseMoveToMatchingBrace(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseMoveToMatchingBrace(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Paste(self: ?*anyopaque) void {
        qtc.QsciScintilla_Paste(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnPaste(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnPaste(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBasePaste(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBasePaste(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QsciScintilla_Redo(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnRedo(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnRedo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseRedo(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseRedo(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn RemoveSelectedText(self: ?*anyopaque) void {
        qtc.QsciScintilla_RemoveSelectedText(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnRemoveSelectedText(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnRemoveSelectedText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseRemoveSelectedText(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseRemoveSelectedText(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn ReplaceSelectedText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_ReplaceSelectedText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, text: []const u8) callconv(.c) void ```
    pub fn OnReplaceSelectedText(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnReplaceSelectedText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn QBaseReplaceSelectedText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_QBaseReplaceSelectedText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ResetSelectionBackgroundColor(self: ?*anyopaque) void {
        qtc.QsciScintilla_ResetSelectionBackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnResetSelectionBackgroundColor(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnResetSelectionBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseResetSelectionBackgroundColor(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseResetSelectionBackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ResetSelectionForegroundColor(self: ?*anyopaque) void {
        qtc.QsciScintilla_ResetSelectionForegroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnResetSelectionForegroundColor(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnResetSelectionForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseResetSelectionForegroundColor(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseResetSelectionForegroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, selectVal: bool ```
    pub fn SelectAll(self: ?*anyopaque, selectVal: bool) void {
        qtc.QsciScintilla_SelectAll(@ptrCast(self), selectVal);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, selectVal: bool) callconv(.c) void ```
    pub fn OnSelectAll(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSelectAll(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, selectVal: bool ```
    pub fn QBaseSelectAll(self: ?*anyopaque, selectVal: bool) void {
        qtc.QsciScintilla_QBaseSelectAll(@ptrCast(self), selectVal);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SelectToMatchingBrace(self: ?*anyopaque) void {
        qtc.QsciScintilla_SelectToMatchingBrace(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnSelectToMatchingBrace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnSelectToMatchingBrace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseSelectToMatchingBrace(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSelectToMatchingBrace(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, cs: bool ```
    pub fn SetAutoCompletionCaseSensitivity(self: ?*anyopaque, cs: bool) void {
        qtc.QsciScintilla_SetAutoCompletionCaseSensitivity(@ptrCast(self), cs);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, cs: bool) callconv(.c) void ```
    pub fn OnSetAutoCompletionCaseSensitivity(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionCaseSensitivity(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, cs: bool ```
    pub fn QBaseSetAutoCompletionCaseSensitivity(self: ?*anyopaque, cs: bool) void {
        qtc.QsciScintilla_QBaseSetAutoCompletionCaseSensitivity(@ptrCast(self), cs);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, replace: bool ```
    pub fn SetAutoCompletionReplaceWord(self: ?*anyopaque, replace: bool) void {
        qtc.QsciScintilla_SetAutoCompletionReplaceWord(@ptrCast(self), replace);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, replace: bool) callconv(.c) void ```
    pub fn OnSetAutoCompletionReplaceWord(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionReplaceWord(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, replace: bool ```
    pub fn QBaseSetAutoCompletionReplaceWord(self: ?*anyopaque, replace: bool) void {
        qtc.QsciScintilla_QBaseSetAutoCompletionReplaceWord(@ptrCast(self), replace);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, single: bool ```
    pub fn SetAutoCompletionShowSingle(self: ?*anyopaque, single: bool) void {
        qtc.QsciScintilla_SetAutoCompletionShowSingle(@ptrCast(self), single);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, single: bool) callconv(.c) void ```
    pub fn OnSetAutoCompletionShowSingle(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionShowSingle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, single: bool ```
    pub fn QBaseSetAutoCompletionShowSingle(self: ?*anyopaque, single: bool) void {
        qtc.QsciScintilla_QBaseSetAutoCompletionShowSingle(@ptrCast(self), single);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, source: qsciscintilla_enums.AutoCompletionSource ```
    pub fn SetAutoCompletionSource(self: ?*anyopaque, source: i64) void {
        qtc.QsciScintilla_SetAutoCompletionSource(@ptrCast(self), @intCast(source));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, source: qsciscintilla_enums.AutoCompletionSource) callconv(.c) void ```
    pub fn OnSetAutoCompletionSource(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, source: qsciscintilla_enums.AutoCompletionSource ```
    pub fn QBaseSetAutoCompletionSource(self: ?*anyopaque, source: i64) void {
        qtc.QsciScintilla_QBaseSetAutoCompletionSource(@ptrCast(self), @intCast(source));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, thresh: i32 ```
    pub fn SetAutoCompletionThreshold(self: ?*anyopaque, thresh: i32) void {
        qtc.QsciScintilla_SetAutoCompletionThreshold(@ptrCast(self), @intCast(thresh));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, thresh: i32) callconv(.c) void ```
    pub fn OnSetAutoCompletionThreshold(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionThreshold(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, thresh: i32 ```
    pub fn QBaseSetAutoCompletionThreshold(self: ?*anyopaque, thresh: i32) void {
        qtc.QsciScintilla_QBaseSetAutoCompletionThreshold(@ptrCast(self), @intCast(thresh));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, single: qsciscintilla_enums.AutoCompletionUseSingle ```
    pub fn SetAutoCompletionUseSingle(self: ?*anyopaque, single: i64) void {
        qtc.QsciScintilla_SetAutoCompletionUseSingle(@ptrCast(self), @intCast(single));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, single: qsciscintilla_enums.AutoCompletionUseSingle) callconv(.c) void ```
    pub fn OnSetAutoCompletionUseSingle(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionUseSingle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, single: qsciscintilla_enums.AutoCompletionUseSingle ```
    pub fn QBaseSetAutoCompletionUseSingle(self: ?*anyopaque, single: i64) void {
        qtc.QsciScintilla_QBaseSetAutoCompletionUseSingle(@ptrCast(self), @intCast(single));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, autoindent: bool ```
    pub fn SetAutoIndent(self: ?*anyopaque, autoindent: bool) void {
        qtc.QsciScintilla_SetAutoIndent(@ptrCast(self), autoindent);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, autoindent: bool) callconv(.c) void ```
    pub fn OnSetAutoIndent(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoIndent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, autoindent: bool ```
    pub fn QBaseSetAutoIndent(self: ?*anyopaque, autoindent: bool) void {
        qtc.QsciScintilla_QBaseSetAutoIndent(@ptrCast(self), autoindent);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, bm: qsciscintilla_enums.BraceMatch ```
    pub fn SetBraceMatching(self: ?*anyopaque, bm: i64) void {
        qtc.QsciScintilla_SetBraceMatching(@ptrCast(self), @intCast(bm));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, bm: qsciscintilla_enums.BraceMatch) callconv(.c) void ```
    pub fn OnSetBraceMatching(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetBraceMatching(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, bm: qsciscintilla_enums.BraceMatch ```
    pub fn QBaseSetBraceMatching(self: ?*anyopaque, bm: i64) void {
        qtc.QsciScintilla_QBaseSetBraceMatching(@ptrCast(self), @intCast(bm));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, unindent: bool ```
    pub fn SetBackspaceUnindents(self: ?*anyopaque, unindent: bool) void {
        qtc.QsciScintilla_SetBackspaceUnindents(@ptrCast(self), unindent);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, unindent: bool) callconv(.c) void ```
    pub fn OnSetBackspaceUnindents(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetBackspaceUnindents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, unindent: bool ```
    pub fn QBaseSetBackspaceUnindents(self: ?*anyopaque, unindent: bool) void {
        qtc.QsciScintilla_QBaseSetBackspaceUnindents(@ptrCast(self), unindent);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetCaretForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetCaretForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetCaretForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetCaretForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetCaretForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetCaretLineBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetCaretLineBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetCaretLineBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetCaretLineBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetCaretLineBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn SetCaretLineFrameWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_SetCaretLineFrameWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, width: i32) callconv(.c) void ```
    pub fn OnSetCaretLineFrameWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineFrameWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn QBaseSetCaretLineFrameWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_QBaseSetCaretLineFrameWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn SetCaretLineVisible(self: ?*anyopaque, enable: bool) void {
        qtc.QsciScintilla_SetCaretLineVisible(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, enable: bool) callconv(.c) void ```
    pub fn OnSetCaretLineVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn QBaseSetCaretLineVisible(self: ?*anyopaque, enable: bool) void {
        qtc.QsciScintilla_QBaseSetCaretLineVisible(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn SetCaretWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_SetCaretWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, width: i32) callconv(.c) void ```
    pub fn OnSetCaretWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn QBaseSetCaretWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_QBaseSetCaretWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, c: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciScintilla_SetColor(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, c: QtC.QColor) callconv(.c) void ```
    pub fn OnSetColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, c: QtC.QColor ```
    pub fn QBaseSetColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetColor(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, index: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, line: i32, index: i32) void {
        qtc.QsciScintilla_SetCursorPosition(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32, index: i32) callconv(.c) void ```
    pub fn OnSetCursorPosition(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCursorPosition(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, index: i32 ```
    pub fn QBaseSetCursorPosition(self: ?*anyopaque, line: i32, index: i32) void {
        qtc.QsciScintilla_QBaseSetCursorPosition(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.EolMode ```
    pub fn SetEolMode(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_SetEolMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, mode: qsciscintilla_enums.EolMode) callconv(.c) void ```
    pub fn OnSetEolMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetEolMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.EolMode ```
    pub fn QBaseSetEolMode(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_QBaseSetEolMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, visible: bool ```
    pub fn SetEolVisibility(self: ?*anyopaque, visible: bool) void {
        qtc.QsciScintilla_SetEolVisibility(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, visible: bool) callconv(.c) void ```
    pub fn OnSetEolVisibility(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetEolVisibility(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, visible: bool ```
    pub fn QBaseSetEolVisibility(self: ?*anyopaque, visible: bool) void {
        qtc.QsciScintilla_QBaseSetEolVisibility(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, fold: qsciscintilla_enums.FoldStyle, margin: i32 ```
    pub fn SetFolding(self: ?*anyopaque, fold: i64, margin: i32) void {
        qtc.QsciScintilla_SetFolding(@ptrCast(self), @intCast(fold), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, fold: qsciscintilla_enums.FoldStyle, margin: i32) callconv(.c) void ```
    pub fn OnSetFolding(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetFolding(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, fold: qsciscintilla_enums.FoldStyle, margin: i32 ```
    pub fn QBaseSetFolding(self: ?*anyopaque, fold: i64, margin: i32) void {
        qtc.QsciScintilla_QBaseSetFolding(@ptrCast(self), @intCast(fold), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, indentation: i32 ```
    pub fn SetIndentation(self: ?*anyopaque, line: i32, indentation: i32) void {
        qtc.QsciScintilla_SetIndentation(@ptrCast(self), @intCast(line), @intCast(indentation));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32, indentation: i32) callconv(.c) void ```
    pub fn OnSetIndentation(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, indentation: i32 ```
    pub fn QBaseSetIndentation(self: ?*anyopaque, line: i32, indentation: i32) void {
        qtc.QsciScintilla_QBaseSetIndentation(@ptrCast(self), @intCast(line), @intCast(indentation));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn SetIndentationGuides(self: ?*anyopaque, enable: bool) void {
        qtc.QsciScintilla_SetIndentationGuides(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, enable: bool) callconv(.c) void ```
    pub fn OnSetIndentationGuides(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuides(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn QBaseSetIndentationGuides(self: ?*anyopaque, enable: bool) void {
        qtc.QsciScintilla_QBaseSetIndentationGuides(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetIndentationGuidesBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetIndentationGuidesBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetIndentationGuidesBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuidesBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetIndentationGuidesBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetIndentationGuidesBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetIndentationGuidesForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetIndentationGuidesForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetIndentationGuidesForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuidesForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetIndentationGuidesForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetIndentationGuidesForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, tabs: bool ```
    pub fn SetIndentationsUseTabs(self: ?*anyopaque, tabs: bool) void {
        qtc.QsciScintilla_SetIndentationsUseTabs(@ptrCast(self), tabs);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, tabs: bool) callconv(.c) void ```
    pub fn OnSetIndentationsUseTabs(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationsUseTabs(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, tabs: bool ```
    pub fn QBaseSetIndentationsUseTabs(self: ?*anyopaque, tabs: bool) void {
        qtc.QsciScintilla_QBaseSetIndentationsUseTabs(@ptrCast(self), tabs);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn SetIndentationWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_SetIndentationWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, width: i32) callconv(.c) void ```
    pub fn OnSetIndentationWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn QBaseSetIndentationWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_QBaseSetIndentationWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, lexer: QtC.QsciLexer ```
    pub fn SetLexer(self: ?*anyopaque, lexer: ?*anyopaque) void {
        qtc.QsciScintilla_SetLexer(@ptrCast(self), @ptrCast(lexer));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, lexer: QtC.QsciLexer) callconv(.c) void ```
    pub fn OnSetLexer(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetLexer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, lexer: QtC.QsciLexer ```
    pub fn QBaseSetLexer(self: ?*anyopaque, lexer: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetLexer(@ptrCast(self), @ptrCast(lexer));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetMarginsBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetMarginsBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetMarginsBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetMarginsBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetMarginsBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, f: QtC.QFont ```
    pub fn SetMarginsFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QsciScintilla_SetMarginsFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, f: QtC.QFont) callconv(.c) void ```
    pub fn OnSetMarginsFont(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsFont(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, f: QtC.QFont ```
    pub fn QBaseSetMarginsFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetMarginsFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetMarginsForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetMarginsForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetMarginsForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetMarginsForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetMarginsForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, lnrs: bool ```
    pub fn SetMarginLineNumbers(self: ?*anyopaque, margin: i32, lnrs: bool) void {
        qtc.QsciScintilla_SetMarginLineNumbers(@ptrCast(self), @intCast(margin), lnrs);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, margin: i32, lnrs: bool) callconv(.c) void ```
    pub fn OnSetMarginLineNumbers(self: ?*anyopaque, slot: fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginLineNumbers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, lnrs: bool ```
    pub fn QBaseSetMarginLineNumbers(self: ?*anyopaque, margin: i32, lnrs: bool) void {
        qtc.QsciScintilla_QBaseSetMarginLineNumbers(@ptrCast(self), @intCast(margin), lnrs);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, mask: i32 ```
    pub fn SetMarginMarkerMask(self: ?*anyopaque, margin: i32, mask: i32) void {
        qtc.QsciScintilla_SetMarginMarkerMask(@ptrCast(self), @intCast(margin), @intCast(mask));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, margin: i32, mask: i32) callconv(.c) void ```
    pub fn OnSetMarginMarkerMask(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginMarkerMask(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, mask: i32 ```
    pub fn QBaseSetMarginMarkerMask(self: ?*anyopaque, margin: i32, mask: i32) void {
        qtc.QsciScintilla_QBaseSetMarginMarkerMask(@ptrCast(self), @intCast(margin), @intCast(mask));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, sens: bool ```
    pub fn SetMarginSensitivity(self: ?*anyopaque, margin: i32, sens: bool) void {
        qtc.QsciScintilla_SetMarginSensitivity(@ptrCast(self), @intCast(margin), sens);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, margin: i32, sens: bool) callconv(.c) void ```
    pub fn OnSetMarginSensitivity(self: ?*anyopaque, slot: fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginSensitivity(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, sens: bool ```
    pub fn QBaseSetMarginSensitivity(self: ?*anyopaque, margin: i32, sens: bool) void {
        qtc.QsciScintilla_QBaseSetMarginSensitivity(@ptrCast(self), @intCast(margin), sens);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, width: i32 ```
    pub fn SetMarginWidth(self: ?*anyopaque, margin: i32, width: i32) void {
        qtc.QsciScintilla_SetMarginWidth(@ptrCast(self), @intCast(margin), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, margin: i32, width: i32) callconv(.c) void ```
    pub fn OnSetMarginWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, width: i32 ```
    pub fn QBaseSetMarginWidth(self: ?*anyopaque, margin: i32, width: i32) void {
        qtc.QsciScintilla_QBaseSetMarginWidth(@ptrCast(self), @intCast(margin), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, s: []const u8 ```
    pub fn SetMarginWidth2(self: ?*anyopaque, margin: i32, s: []const u8) void {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QsciScintilla_SetMarginWidth2(@ptrCast(self), @intCast(margin), s_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, margin: i32, s: []const u8) callconv(.c) void ```
    pub fn OnSetMarginWidth2(self: ?*anyopaque, slot: fn (?*anyopaque, i32, []const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginWidth2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, s: []const u8 ```
    pub fn QBaseSetMarginWidth2(self: ?*anyopaque, margin: i32, s: []const u8) void {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QsciScintilla_QBaseSetMarginWidth2(@ptrCast(self), @intCast(margin), s_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, m: bool ```
    pub fn SetModified(self: ?*anyopaque, m: bool) void {
        qtc.QsciScintilla_SetModified(@ptrCast(self), m);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, m: bool) callconv(.c) void ```
    pub fn OnSetModified(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetModified(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, m: bool ```
    pub fn QBaseSetModified(self: ?*anyopaque, m: bool) void {
        qtc.QsciScintilla_QBaseSetModified(@ptrCast(self), m);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, c: QtC.QColor ```
    pub fn SetPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciScintilla_SetPaper(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, c: QtC.QColor) callconv(.c) void ```
    pub fn OnSetPaper(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetPaper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, c: QtC.QColor ```
    pub fn QBaseSetPaper(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetPaper(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, ro: bool ```
    pub fn SetReadOnly(self: ?*anyopaque, ro: bool) void {
        qtc.QsciScintilla_SetReadOnly(@ptrCast(self), ro);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, ro: bool) callconv(.c) void ```
    pub fn OnSetReadOnly(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetReadOnly(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, ro: bool ```
    pub fn QBaseSetReadOnly(self: ?*anyopaque, ro: bool) void {
        qtc.QsciScintilla_QBaseSetReadOnly(@ptrCast(self), ro);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32 ```
    pub fn SetSelection(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        qtc.QsciScintilla_SetSelection(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) callconv(.c) void ```
    pub fn OnSetSelection(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32 ```
    pub fn QBaseSetSelection(self: ?*anyopaque, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        qtc.QsciScintilla_QBaseSetSelection(@ptrCast(self), @intCast(lineFrom), @intCast(indexFrom), @intCast(lineTo), @intCast(indexTo));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetSelectionBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetSelectionBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetSelectionBackgroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelectionBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetSelectionBackgroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetSelectionBackgroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn SetSelectionForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_SetSelectionForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, col: QtC.QColor) callconv(.c) void ```
    pub fn OnSetSelectionForegroundColor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelectionForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor ```
    pub fn QBaseSetSelectionForegroundColor(self: ?*anyopaque, col: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetSelectionForegroundColor(@ptrCast(self), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, indent: bool ```
    pub fn SetTabIndents(self: ?*anyopaque, indent: bool) void {
        qtc.QsciScintilla_SetTabIndents(@ptrCast(self), indent);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, indent: bool) callconv(.c) void ```
    pub fn OnSetTabIndents(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetTabIndents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, indent: bool ```
    pub fn QBaseSetTabIndents(self: ?*anyopaque, indent: bool) void {
        qtc.QsciScintilla_QBaseSetTabIndents(@ptrCast(self), indent);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn SetTabWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_SetTabWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, width: i32) callconv(.c) void ```
    pub fn OnSetTabWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetTabWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, width: i32 ```
    pub fn QBaseSetTabWidth(self: ?*anyopaque, width: i32) void {
        qtc.QsciScintilla_QBaseSetTabWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, text: []const u8) callconv(.c) void ```
    pub fn OnSetText(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn QBaseSetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_QBaseSetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, cp: bool ```
    pub fn SetUtf8(self: ?*anyopaque, cp: bool) void {
        qtc.QsciScintilla_SetUtf8(@ptrCast(self), cp);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, cp: bool) callconv(.c) void ```
    pub fn OnSetUtf8(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetUtf8(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, cp: bool ```
    pub fn QBaseSetUtf8(self: ?*anyopaque, cp: bool) void {
        qtc.QsciScintilla_QBaseSetUtf8(@ptrCast(self), cp);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.WhitespaceVisibility ```
    pub fn SetWhitespaceVisibility(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_SetWhitespaceVisibility(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, mode: qsciscintilla_enums.WhitespaceVisibility) callconv(.c) void ```
    pub fn OnSetWhitespaceVisibility(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetWhitespaceVisibility(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.WhitespaceVisibility ```
    pub fn QBaseSetWhitespaceVisibility(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_QBaseSetWhitespaceVisibility(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.WrapMode ```
    pub fn SetWrapMode(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_SetWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, mode: qsciscintilla_enums.WrapMode) callconv(.c) void ```
    pub fn OnSetWrapMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetWrapMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, mode: qsciscintilla_enums.WrapMode ```
    pub fn QBaseSetWrapMode(self: ?*anyopaque, mode: i64) void {
        qtc.QsciScintilla_QBaseSetWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QsciScintilla_Undo(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnUndo(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnUndo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseUndo(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseUndo(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn Unindent(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_Unindent(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32) callconv(.c) void ```
    pub fn OnUnindent(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnUnindent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn QBaseUnindent(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_QBaseUnindent(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, range: i32 ```
    pub fn ZoomIn(self: ?*anyopaque, range: i32) void {
        qtc.QsciScintilla_ZoomIn(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, range: i32) callconv(.c) void ```
    pub fn OnZoomIn(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomIn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, range: i32 ```
    pub fn QBaseZoomIn(self: ?*anyopaque, range: i32) void {
        qtc.QsciScintilla_QBaseZoomIn(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ZoomIn2(self: ?*anyopaque) void {
        qtc.QsciScintilla_ZoomIn2(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnZoomIn2(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomIn2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseZoomIn2(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseZoomIn2(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, range: i32 ```
    pub fn ZoomOut(self: ?*anyopaque, range: i32) void {
        qtc.QsciScintilla_ZoomOut(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, range: i32) callconv(.c) void ```
    pub fn OnZoomOut(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomOut(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, range: i32 ```
    pub fn QBaseZoomOut(self: ?*anyopaque, range: i32) void {
        qtc.QsciScintilla_QBaseZoomOut(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ZoomOut2(self: ?*anyopaque) void {
        qtc.QsciScintilla_ZoomOut2(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnZoomOut2(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomOut2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseZoomOut2(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseZoomOut2(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, size: i32 ```
    pub fn ZoomTo(self: ?*anyopaque, size: i32) void {
        qtc.QsciScintilla_ZoomTo(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, size: i32) callconv(.c) void ```
    pub fn OnZoomTo(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomTo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, size: i32 ```
    pub fn QBaseZoomTo(self: ?*anyopaque, size: i32) void {
        qtc.QsciScintilla_QBaseZoomTo(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, index: i32 ```
    pub fn CursorPositionChanged(self: ?*anyopaque, line: i32, index: i32) void {
        qtc.QsciScintilla_CursorPositionChanged(@ptrCast(self), @intCast(line), @intCast(index));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32, index: i32) callconv(.c) void ```
    pub fn OnCursorPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_CursorPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, yes: bool ```
    pub fn CopyAvailable(self: ?*anyopaque, yes: bool) void {
        qtc.QsciScintilla_CopyAvailable(@ptrCast(self), yes);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, yes: bool) callconv(.c) void ```
    pub fn OnCopyAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_CopyAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, index: i32, state: i32 ```
    pub fn IndicatorClicked(self: ?*anyopaque, line: i32, index: i32, state: i64) void {
        qtc.QsciScintilla_IndicatorClicked(@ptrCast(self), @intCast(line), @intCast(index), @intCast(state));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32, index: i32, state: i32) callconv(.c) void ```
    pub fn OnIndicatorClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_IndicatorClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32, index: i32, state: i32 ```
    pub fn IndicatorReleased(self: ?*anyopaque, line: i32, index: i32, state: i64) void {
        qtc.QsciScintilla_IndicatorReleased(@ptrCast(self), @intCast(line), @intCast(index), @intCast(state));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, line: i32, index: i32, state: i32) callconv(.c) void ```
    pub fn OnIndicatorReleased(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_IndicatorReleased(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn LinesChanged(self: ?*anyopaque) void {
        qtc.QsciScintilla_LinesChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla) callconv(.c) void ```
    pub fn OnLinesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_LinesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, line: i32, state: i32 ```
    pub fn MarginClicked(self: ?*anyopaque, margin: i32, line: i32, state: i64) void {
        qtc.QsciScintilla_MarginClicked(@ptrCast(self), @intCast(margin), @intCast(line), @intCast(state));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, margin: i32, line: i32, state: i32) callconv(.c) void ```
    pub fn OnMarginClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_MarginClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, margin: i32, line: i32, state: i32 ```
    pub fn MarginRightClicked(self: ?*anyopaque, margin: i32, line: i32, state: i64) void {
        qtc.QsciScintilla_MarginRightClicked(@ptrCast(self), @intCast(margin), @intCast(line), @intCast(state));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, margin: i32, line: i32, state: i32) callconv(.c) void ```
    pub fn OnMarginRightClicked(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i64) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_MarginRightClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ModificationAttempted(self: ?*anyopaque) void {
        qtc.QsciScintilla_ModificationAttempted(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla) callconv(.c) void ```
    pub fn OnModificationAttempted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_ModificationAttempted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, m: bool ```
    pub fn ModificationChanged(self: ?*anyopaque, m: bool) void {
        qtc.QsciScintilla_ModificationChanged(@ptrCast(self), m);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, m: bool) callconv(.c) void ```
    pub fn OnModificationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_ModificationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QsciScintilla_SelectionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn TextChanged(self: ?*anyopaque) void {
        qtc.QsciScintilla_TextChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla) callconv(.c) void ```
    pub fn OnTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_TextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32, stringVal: []const u8 ```
    pub fn UserListActivated(self: ?*anyopaque, id: i32, stringVal: []const u8) void {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        qtc.QsciScintilla_UserListActivated(@ptrCast(self), @intCast(id), stringVal_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, id: i32, stringVal: []const u8) callconv(.c) void ```
    pub fn OnUserListActivated(self: ?*anyopaque, slot: fn (?*anyopaque, i32, []const u8) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_UserListActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QsciScintilla_Event(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintilla_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QsciScintilla_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QsciScintilla_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn ClearAnnotations1(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_ClearAnnotations1(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle, indicatorNumber: i32 ```
    pub fn IndicatorDefine2(self: ?*anyopaque, style: i64, indicatorNumber: i32) i32 {
        return qtc.QsciScintilla_IndicatorDefine2(@ptrCast(self), @intCast(style), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, sym: qsciscintilla_enums.MarkerSymbol, markerNumber: i32 ```
    pub fn MarkerDefine22(self: ?*anyopaque, sym: i64, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine22(@ptrCast(self), @intCast(sym), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, ch: i8, markerNumber: i32 ```
    pub fn MarkerDefine23(self: ?*anyopaque, ch: i8, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine23(@ptrCast(self), @intCast(ch), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, pm: QtC.QPixmap, markerNumber: i32 ```
    pub fn MarkerDefine24(self: ?*anyopaque, pm: ?*anyopaque, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine24(@ptrCast(self), @ptrCast(pm), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, im: QtC.QImage, markerNumber: i32 ```
    pub fn MarkerDefine25(self: ?*anyopaque, im: ?*anyopaque, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine25(@ptrCast(self), @ptrCast(im), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, linenr: i32, markerNumber: i32 ```
    pub fn MarkerDelete2(self: ?*anyopaque, linenr: i32, markerNumber: i32) void {
        qtc.QsciScintilla_MarkerDelete2(@ptrCast(self), @intCast(linenr), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, markerNumber: i32 ```
    pub fn MarkerDeleteAll1(self: ?*anyopaque, markerNumber: i32) void {
        qtc.QsciScintilla_MarkerDeleteAll1(@ptrCast(self), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, under: bool, indicatorNumber: i32 ```
    pub fn SetIndicatorDrawUnder2(self: ?*anyopaque, under: bool, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorDrawUnder2(@ptrCast(self), under, @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor, indicatorNumber: i32 ```
    pub fn SetIndicatorForegroundColor2(self: ?*anyopaque, col: ?*anyopaque, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorForegroundColor2(@ptrCast(self), @ptrCast(col), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor, indicatorNumber: i32 ```
    pub fn SetIndicatorHoverForegroundColor2(self: ?*anyopaque, col: ?*anyopaque, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorHoverForegroundColor2(@ptrCast(self), @ptrCast(col), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, style: qsciscintilla_enums.IndicatorStyle, indicatorNumber: i32 ```
    pub fn SetIndicatorHoverStyle2(self: ?*anyopaque, style: i64, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorHoverStyle2(@ptrCast(self), @intCast(style), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor, indicatorNumber: i32 ```
    pub fn SetIndicatorOutlineColor2(self: ?*anyopaque, col: ?*anyopaque, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorOutlineColor2(@ptrCast(self), @ptrCast(col), @intCast(indicatorNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, line: i32 ```
    pub fn ClearMarginText1(self: ?*anyopaque, line: i32) void {
        qtc.QsciScintilla_ClearMarginText1(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor, markerNumber: i32 ```
    pub fn SetMarkerBackgroundColor2(self: ?*anyopaque, col: ?*anyopaque, markerNumber: i32) void {
        qtc.QsciScintilla_SetMarkerBackgroundColor2(@ptrCast(self), @ptrCast(col), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, col: QtC.QColor, markerNumber: i32 ```
    pub fn SetMarkerForegroundColor2(self: ?*anyopaque, col: ?*anyopaque, markerNumber: i32) void {
        qtc.QsciScintilla_SetMarkerForegroundColor2(@ptrCast(self), @ptrCast(col), @intCast(markerNumber));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, endFlag: qsciscintilla_enums.WrapVisualFlag, startFlag: qsciscintilla_enums.WrapVisualFlag ```
    pub fn SetWrapVisualFlags2(self: ?*anyopaque, endFlag: i64, startFlag: i64) void {
        qtc.QsciScintilla_SetWrapVisualFlags2(@ptrCast(self), @intCast(endFlag), @intCast(startFlag));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ``` self: QtC.QsciScintilla, endFlag: qsciscintilla_enums.WrapVisualFlag, startFlag: qsciscintilla_enums.WrapVisualFlag, indent: i32 ```
    pub fn SetWrapVisualFlags3(self: ?*anyopaque, endFlag: i64, startFlag: i64, indent: i32) void {
        qtc.QsciScintilla_SetWrapVisualFlags3(@ptrCast(self), @intCast(endFlag), @intCast(startFlag), @intCast(indent));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    ///
    pub fn Pool() QtC.QsciScintillaBase {
        return qtc.QsciScintillaBase_Pool();
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, scrollBar: QtC.QScrollBar ```
    pub fn ReplaceHorizontalScrollBar(self: ?*anyopaque, scrollBar: ?*anyopaque) void {
        qtc.QsciScintillaBase_ReplaceHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollBar));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, scrollBar: QtC.QScrollBar ```
    pub fn ReplaceVerticalScrollBar(self: ?*anyopaque, scrollBar: ?*anyopaque) void {
        qtc.QsciScintillaBase_ReplaceVerticalScrollBar(@ptrCast(self), @ptrCast(scrollBar));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32 ```
    pub fn SendScintilla(self: ?*anyopaque, msg: u32) i64 {
        return qtc.QsciScintillaBase_SendScintilla(@ptrCast(self), @intCast(msg));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: u64, lParam: ?*anyopaque ```
    pub fn SendScintilla2(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla2(@ptrCast(self), @intCast(msg), @intCast(wParam), lParam);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: usize, lParam: []const u8 ```
    pub fn SendScintilla3(self: ?*anyopaque, msg: u32, wParam: usize, lParam: []const u8) i64 {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla3(@ptrCast(self), @intCast(msg), @intCast(wParam), lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, lParam: []const u8 ```
    pub fn SendScintilla4(self: ?*anyopaque, msg: u32, lParam: []const u8) i64 {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla4(@ptrCast(self), @intCast(msg), lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: []const u8, lParam: []const u8 ```
    pub fn SendScintilla5(self: ?*anyopaque, msg: u32, wParam: []const u8, lParam: []const u8) i64 {
        const wParam_Cstring = wParam.ptr;
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla5(@ptrCast(self), @intCast(msg), wParam_Cstring, lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: i64 ```
    pub fn SendScintilla6(self: ?*anyopaque, msg: u32, wParam: i64) i64 {
        return qtc.QsciScintillaBase_SendScintilla6(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: i32 ```
    pub fn SendScintilla7(self: ?*anyopaque, msg: u32, wParam: i32) i64 {
        return qtc.QsciScintillaBase_SendScintilla7(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, cpMin: i64, cpMax: i64, lpstrText: []const u8 ```
    pub fn SendScintilla8(self: ?*anyopaque, msg: u32, cpMin: i64, cpMax: i64, lpstrText: []const u8) i64 {
        const lpstrText_Cstring = lpstrText.ptr;
        return qtc.QsciScintillaBase_SendScintilla8(@ptrCast(self), @intCast(msg), @intCast(cpMin), @intCast(cpMax), lpstrText_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: u64, col: QtC.QColor ```
    pub fn SendScintilla9(self: ?*anyopaque, msg: u32, wParam: u64, col: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla9(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(col));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, col: QtC.QColor ```
    pub fn SendScintilla10(self: ?*anyopaque, msg: u32, col: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla10(@ptrCast(self), @intCast(msg), @ptrCast(col));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: u64, hdc: QtC.QPainter, rc: QtC.QRect, cpMin: i64, cpMax: i64 ```
    pub fn SendScintilla11(self: ?*anyopaque, msg: u32, wParam: u64, hdc: ?*anyopaque, rc: ?*anyopaque, cpMin: i64, cpMax: i64) i64 {
        return qtc.QsciScintillaBase_SendScintilla11(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(hdc), @ptrCast(rc), @intCast(cpMin), @intCast(cpMax));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: u64, lParam: QtC.QPixmap ```
    pub fn SendScintilla12(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla12(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(lParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: u64, lParam: QtC.QImage ```
    pub fn SendScintilla13(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla13(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(lParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32 ```
    pub fn SendScintillaPtrResult(self: ?*anyopaque, msg: u32) ?*anyopaque {
        return qtc.QsciScintillaBase_SendScintillaPtrResult(@ptrCast(self), @intCast(msg));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` qt_key: i32, modifiers: *i32 ```
    pub fn CommandKey(qt_key: i32, modifiers: *i32) i32 {
        return qtc.QsciScintillaBase_CommandKey(@intCast(qt_key), @ptrCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, yes: bool ```
    pub fn QSCN_SELCHANGED(self: ?*anyopaque, yes: bool) void {
        qtc.QsciScintillaBase_QSCN_SELCHANGED(@ptrCast(self), yes);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_AUTOCCANCELLED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_AUTOCCANCELLED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_AUTOCCHARDELETED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_AUTOCCHARDELETED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, selection: []const u8, position: i32, ch: i32, method: i32 ```
    pub fn SCN_AUTOCCOMPLETED(self: ?*anyopaque, selection: []const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCCOMPLETED(@ptrCast(self), selection_Cstring, @intCast(position), @intCast(ch), @intCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, selection: []const u8, position: i32, ch: i32, method: i32 ```
    pub fn SCN_AUTOCSELECTION(self: ?*anyopaque, selection: []const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION(@ptrCast(self), selection_Cstring, @intCast(position), @intCast(ch), @intCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, selection: []const u8, position: i32 ```
    pub fn SCN_AUTOCSELECTION2(self: ?*anyopaque, selection: []const u8, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION2(@ptrCast(self), selection_Cstring, @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, selection: []const u8, id: i32, position: i32 ```
    pub fn SCN_AUTOCSELECTIONCHANGE(self: ?*anyopaque, selection: []const u8, id: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCEN_CHANGE(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCEN_CHANGE(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, direction: i32 ```
    pub fn SCN_CALLTIPCLICK(self: ?*anyopaque, direction: i32) void {
        qtc.QsciScintillaBase_SCN_CALLTIPCLICK(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, charadded: i32 ```
    pub fn SCN_CHARADDED(self: ?*anyopaque, charadded: i32) void {
        qtc.QsciScintillaBase_SCN_CHARADDED(@ptrCast(self), @intCast(charadded));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, line: i32, modifiers: i32 ```
    pub fn SCN_DOUBLECLICK(self: ?*anyopaque, position: i32, line: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_DOUBLECLICK(@ptrCast(self), @intCast(position), @intCast(line), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, x: i32, y: i32 ```
    pub fn SCN_DWELLEND(self: ?*anyopaque, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLEND(@ptrCast(self), @intCast(position), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, x: i32, y: i32 ```
    pub fn SCN_DWELLSTART(self: ?*anyopaque, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLSTART(@ptrCast(self), @intCast(position), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_FOCUSIN(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_FOCUSIN(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_FOCUSOUT(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_FOCUSOUT(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTCLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTDOUBLECLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTRELEASECLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_INDICATORCLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, modifiers: i32 ```
    pub fn SCN_INDICATORRELEASE(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORRELEASE(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, param1: u32, param2: u64, param3: ?*anyopaque ```
    pub fn SCN_MACRORECORD(self: ?*anyopaque, param1: u32, param2: u64, param3: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_MACRORECORD(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, modifiers: i32, margin: i32 ```
    pub fn SCN_MARGINCLICK(self: ?*anyopaque, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers), @intCast(margin));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32, modifiers: i32, margin: i32 ```
    pub fn SCN_MARGINRIGHTCLICK(self: ?*anyopaque, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINRIGHTCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers), @intCast(margin));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, param1: i32, param2: i32, param3: []const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32 ```
    pub fn SCN_MODIFIED(self: ?*anyopaque, param1: i32, param2: i32, param3: []const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32) void {
        const param3_Cstring = param3.ptr;
        qtc.QsciScintillaBase_SCN_MODIFIED(@ptrCast(self), @intCast(param1), @intCast(param2), param3_Cstring, @intCast(param4), @intCast(param5), @intCast(param6), @intCast(param7), @intCast(param8), @intCast(param9), @intCast(param10));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_MODIFYATTEMPTRO(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_MODIFYATTEMPTRO(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, param1: i32, param2: i32 ```
    pub fn SCN_NEEDSHOWN(self: ?*anyopaque, param1: i32, param2: i32) void {
        qtc.QsciScintillaBase_SCN_NEEDSHOWN(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_PAINTED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_PAINTED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_SAVEPOINTLEFT(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTLEFT(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_SAVEPOINTREACHED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTREACHED(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, position: i32 ```
    pub fn SCN_STYLENEEDED(self: ?*anyopaque, position: i32) void {
        qtc.QsciScintillaBase_SCN_STYLENEEDED(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, url: QtC.QUrl ```
    pub fn SCN_URIDROPPED(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_URIDROPPED(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, updated: i32 ```
    pub fn SCN_UPDATEUI(self: ?*anyopaque, updated: i32) void {
        qtc.QsciScintillaBase_SCN_UPDATEUI(@ptrCast(self), @intCast(updated));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, selection: []const u8, id: i32, ch: i32, method: i32, position: i32 ```
    pub fn SCN_USERLISTSELECTION(self: ?*anyopaque, selection: []const u8, id: i32, ch: i32, method: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(ch), @intCast(method), @intCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, selection: []const u8, id: i32, ch: i32, method: i32 ```
    pub fn SCN_USERLISTSELECTION2(self: ?*anyopaque, selection: []const u8, id: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION2(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(ch), @intCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, selection: []const u8, id: i32 ```
    pub fn SCN_USERLISTSELECTION3(self: ?*anyopaque, selection: []const u8, id: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION3(@ptrCast(self), selection_Cstring, @intCast(id));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SCN_ZOOM(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_ZOOM(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: u64 ```
    pub fn SendScintilla22(self: ?*anyopaque, msg: u32, wParam: u64) i64 {
        return qtc.QsciScintillaBase_SendScintilla22(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintilla, msg: u32, wParam: u64, lParam: i64 ```
    pub fn SendScintilla32(self: ?*anyopaque, msg: u32, wParam: u64, lParam: i64) i64 {
        return qtc.QsciScintillaBase_SendScintilla32(@ptrCast(self), @intCast(msg), @intCast(wParam), @intCast(lParam));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintilla, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i64) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.QsciScintilla, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintilla, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i64) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.QsciScintilla, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.QsciScintilla, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.QsciScintilla, widget: QtC.QWidget, alignment: i32 ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i64) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.QsciScintilla, alignment: i32, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i64, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qsciscintilla.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.QsciScintilla, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.QsciScintilla, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.QsciScintilla, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FrameShape(self: ?*anyopaque) i64 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.QsciScintilla, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i64) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FrameShadow(self: ?*anyopaque) i64 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.QsciScintilla, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i64) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.QsciScintilla, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.QsciScintilla, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.QsciScintilla, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.QsciScintilla, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WindowModality(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.QsciScintilla, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i64) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.QsciScintilla, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.QsciScintilla, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.QsciScintilla, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QsciScintilla, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QsciScintilla, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QsciScintilla, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QsciScintilla, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QsciScintilla, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QsciScintilla, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QsciScintilla, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QsciScintilla, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QsciScintilla, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QsciScintilla, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QsciScintilla, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QsciScintilla, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QsciScintilla, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QsciScintilla, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.QsciScintilla, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.QsciScintilla, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.QsciScintilla, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.QsciScintilla, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i64) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BackgroundRole(self: ?*anyopaque) i64 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.QsciScintilla, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i64) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ForegroundRole(self: ?*anyopaque) i64 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.QsciScintilla, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QsciScintilla, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QsciScintilla, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QsciScintilla, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QsciScintilla, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.QsciScintilla, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QsciScintilla, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.struct_libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.QsciScintilla, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.struct_libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.QsciScintilla, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.QsciScintilla, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.struct_libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.QsciScintilla, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.struct_libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.QsciScintilla, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.struct_libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.QsciScintilla, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.QsciScintilla, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.struct_libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.QsciScintilla, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.QsciScintilla, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.struct_libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.QsciScintilla, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.struct_libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.QsciScintilla, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.QsciScintilla, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QsciScintilla, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.QsciScintilla, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QsciScintilla, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i64) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QsciScintilla, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.QsciScintilla, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i64 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.QsciScintilla, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QsciScintilla, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.QsciScintilla, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintilla, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintilla, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.QsciScintilla, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QsciScintilla, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QsciScintilla, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QsciScintilla, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QsciScintilla, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.QsciScintilla, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.struct_libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.QsciScintilla, state: i32 ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.QsciScintilla, state: i32 ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QsciScintilla, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QsciScintilla, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i64, vertical: i64) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QsciScintilla, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QsciScintilla, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.QsciScintilla, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QsciScintilla, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QsciScintilla, parent: QtC.QWidget, f: i32 ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QsciScintilla, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QsciScintilla, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QsciScintilla, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintilla, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.QsciScintilla, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.QsciScintilla, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.QsciScintilla, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.QsciScintilla, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.struct_libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qsciscintilla.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintilla, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintilla, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintilla, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QsciScintilla, typeVal: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QsciScintilla, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.QsciScintilla, typeVal: i32 ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QsciScintilla, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QsciScintilla, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QsciScintilla, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QsciScintilla, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.QsciScintilla, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i64) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.QsciScintilla, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QsciScintilla, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.QsciScintilla, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QsciScintilla, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, title: []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QsciScintilla, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QsciScintilla, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.struct_libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, iconText: []const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QsciScintilla, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QsciScintilla, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: i32 ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintilla, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: i32 ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QsciScintilla, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QsciScintilla, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QsciScintilla, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i64) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QsciScintilla, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QsciScintilla, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: i32 ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QsciScintilla, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QsciScintilla, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QsciScintilla, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QsciScintilla, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QsciScintilla, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QsciScintilla, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsciscintilla.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QsciScintilla, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QsciScintilla, obj: QtC.QObject ```
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
    /// ``` self: QtC.QsciScintilla, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QsciScintilla ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QsciScintilla, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QsciScintilla, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QsciScintilla, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsciscintilla.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintilla.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QsciScintilla, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QsciScintilla, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QsciScintilla, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QsciScintilla, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i64, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, source: QtC.QMimeData ```
    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QsciScintilla_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, source: QtC.QMimeData ```
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, source: QtC.QMimeData) callconv(.c) bool ```
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintilla_OnCanInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, source: QtC.QMimeData, rectangular: bool, allocator: std.mem.Allocator ```
    pub fn FromMimeData(self: ?*anyopaque, source: ?*anyopaque, rectangular: *bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QsciScintilla_FromMimeData(@ptrCast(self), @ptrCast(source), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, source: QtC.QMimeData, rectangular: bool, allocator: std.mem.Allocator ```
    pub fn QBaseFromMimeData(self: ?*anyopaque, source: ?*anyopaque, rectangular: *bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QsciScintilla_QBaseFromMimeData(@ptrCast(self), @ptrCast(source), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, source: QtC.QMimeData, rectangular: bool) callconv(.c) []u8 ```
    pub fn OnFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, *bool) callconv(.c) []u8) void {
        qtc.QsciScintilla_OnFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, text: []u8, rectangular: bool ```
    pub fn ToMimeData(self: ?*anyopaque, text: []u8, rectangular: bool) QtC.QMimeData {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QsciScintilla_ToMimeData(@ptrCast(self), text_str, rectangular);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, text: []u8, rectangular: bool ```
    pub fn QBaseToMimeData(self: ?*anyopaque, text: []u8, rectangular: bool) QtC.QMimeData {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QsciScintilla_QBaseToMimeData(@ptrCast(self), text_str, rectangular);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, text: []u8, rectangular: bool) callconv(.c) QtC.QMimeData ```
    pub fn OnToMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, bool) callconv(.c) QtC.QMimeData) void {
        qtc.QsciScintilla_OnToMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QsciScintilla_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QsciScintilla_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, e: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, e: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QsciScintilla_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QsciScintilla_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintilla_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintilla_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QsciScintilla_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintilla_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintilla_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QsciScintilla_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QsciScintilla_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QsciScintilla_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintilla_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QsciScintilla_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintilla_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintilla_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintilla_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QsciScintilla_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QsciScintilla_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QsciScintilla_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QsciScintilla_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QsciScintilla_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QsciScintilla_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QsciScintilla_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QsciScintilla_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciScintilla_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciScintilla_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QsciScintilla_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintilla_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintilla_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, eventType: []u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QsciScintilla_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QsciScintilla_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QsciScintilla_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QsciScintilla_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciScintilla_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciScintilla_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciScintilla_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QsciScintilla_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciScintilla_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciScintilla_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QsciScintilla_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QsciScintilla_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QsciScintilla_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QsciScintilla_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintilla_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintilla_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SetScrollBars(self: ?*anyopaque) void {
        qtc.QsciScintilla_SetScrollBars(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseSetScrollBars(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseSetScrollBars(@ptrCast(self));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnSetScrollBars(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnSetScrollBars(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, x: i32, y: i32 ```
    pub fn ContextMenuNeeded(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QsciScintilla_ContextMenuNeeded(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, x: i32, y: i32 ```
    pub fn QBaseContextMenuNeeded(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QsciScintilla_QBaseContextMenuNeeded(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, x: i32, y: i32) callconv(.c) bool ```
    pub fn OnContextMenuNeeded(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) bool) void {
        qtc.QsciScintilla_OnContextMenuNeeded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintilla_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintilla_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QsciScintilla_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QsciScintilla_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMargins) void {
        qtc.QsciScintilla_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QsciScintilla_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintilla_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QsciScintilla_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QsciScintilla_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QsciScintilla_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.QsciScintilla_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciScintilla_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciScintilla_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QsciScintilla_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciScintilla_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QsciScintilla_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintilla_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintilla_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QsciScintilla_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciScintilla_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciScintilla_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintilla_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QsciScintilla_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QsciScintilla_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QsciScintilla, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) f64) void {
        qtc.QsciScintilla_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QsciScintilla, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QsciScintilla ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QsciScintilla_Delete(@ptrCast(self));
    }
};

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
