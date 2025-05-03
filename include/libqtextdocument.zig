const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qtextdocument_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstractundoitem.html
pub const qabstractundoitem = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#undo)
    ///
    /// ``` self: ?*C.QAbstractUndoItem ```
    pub fn Undo(self: ?*anyopaque) void {
        C.QAbstractUndoItem_Undo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#redo)
    ///
    /// ``` self: ?*C.QAbstractUndoItem ```
    pub fn Redo(self: ?*anyopaque) void {
        C.QAbstractUndoItem_Redo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#operator=)
    ///
    /// ``` self: ?*C.QAbstractUndoItem, param1: ?*C.QAbstractUndoItem ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QAbstractUndoItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractUndoItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractUndoItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextdocument.html
pub const qtextdocument = struct {
    /// New constructs a new QTextDocument object.
    ///
    ///
    pub fn New() ?*C.QTextDocument {
        return C.QTextDocument_new();
    }

    /// New2 constructs a new QTextDocument object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) ?*C.QTextDocument {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QTextDocument_new2(text_str);
    }

    /// New3 constructs a new QTextDocument object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New3(parent: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextDocument_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QTextDocument object.
    ///
    /// ``` text: []const u8, parent: ?*C.QObject ```
    pub fn New4(text: []const u8, parent: ?*anyopaque) ?*C.QTextDocument {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QTextDocument_new4(text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QTextDocument_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextDocument, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QTextDocument_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QTextDocument, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextDocument_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QTextDocument_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTextDocument, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextDocument_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QTextDocument_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Clone(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextDocument_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QTextDocument_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QTextDocument_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QTextDocument_OnClear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        C.QTextDocument_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
    ///
    /// ``` self: ?*C.QTextDocument, enable: bool ```
    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        C.QTextDocument_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsUndoRedoEnabled(self: ?*anyopaque) bool {
        return C.QTextDocument_IsUndoRedoEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsUndoAvailable(self: ?*anyopaque) bool {
        return C.QTextDocument_IsUndoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsRedoAvailable(self: ?*anyopaque) bool {
        return C.QTextDocument_IsRedoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn AvailableUndoSteps(self: ?*anyopaque) i32 {
        return C.QTextDocument_AvailableUndoSteps(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn AvailableRedoSteps(self: ?*anyopaque) i32 {
        return C.QTextDocument_AvailableRedoSteps(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#revision)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Revision(self: ?*anyopaque) i32 {
        return C.QTextDocument_Revision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
    ///
    /// ``` self: ?*C.QTextDocument, layout: ?*C.QAbstractTextDocumentLayout ```
    pub fn SetDocumentLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QTextDocument_SetDocumentLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DocumentLayout(self: ?*anyopaque) ?*C.QAbstractTextDocumentLayout {
        return C.QTextDocument_DocumentLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMetaInformation)
    ///
    /// ``` self: ?*C.QTextDocument, info: qtextdocument_enums.MetaInformation, param2: []const u8 ```
    pub fn SetMetaInformation(self: ?*anyopaque, info: i64, param2: []const u8) void {
        const param2_str = C.struct_libqt_string{
            .len = param2.len,
            .data = @constCast(param2.ptr),
        };
        C.QTextDocument_SetMetaInformation(@ptrCast(self), @intCast(info), param2_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#metaInformation)
    ///
    /// ``` self: ?*C.QTextDocument, info: qtextdocument_enums.MetaInformation, allocator: std.mem.Allocator ```
    pub fn MetaInformation(self: ?*anyopaque, info: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextDocument_MetaInformation(@ptrCast(self), @intCast(info));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextDocument_ToHtml(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
    ///
    /// ``` self: ?*C.QTextDocument, html: []const u8 ```
    pub fn SetHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = C.struct_libqt_string{
            .len = html.len,
            .data = @constCast(html.ptr),
        };
        C.QTextDocument_SetHtml(@ptrCast(self), html_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToMarkdown(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextDocument_ToMarkdown(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
    ///
    /// ``` self: ?*C.QTextDocument, markdown: []const u8 ```
    pub fn SetMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = C.struct_libqt_string{
            .len = markdown.len,
            .data = @constCast(markdown.ptr),
        };
        C.QTextDocument_SetMarkdown(@ptrCast(self), markdown_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToRawText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextDocument_ToRawText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextDocument_ToPlainText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
    ///
    /// ``` self: ?*C.QTextDocument, text: []const u8 ```
    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QTextDocument_SetPlainText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
    ///
    /// ``` self: ?*C.QTextDocument, pos: i32 ```
    pub fn CharacterAt(self: ?*anyopaque, pos: i32) ?*C.QChar {
        return C.QTextDocument_CharacterAt(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, subString: []const u8 ```
    pub fn Find(self: ?*anyopaque, subString: []const u8) ?*C.QTextCursor {
        const subString_str = C.struct_libqt_string{
            .len = subString.len,
            .data = @constCast(subString.ptr),
        };
        return C.QTextDocument_Find(@ptrCast(self), subString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, subString: []const u8, cursor: ?*C.QTextCursor ```
    pub fn Find2(self: ?*anyopaque, subString: []const u8, cursor: ?*anyopaque) ?*C.QTextCursor {
        const subString_str = C.struct_libqt_string{
            .len = subString.len,
            .data = @constCast(subString.ptr),
        };
        return C.QTextDocument_Find2(@ptrCast(self), subString_str, @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, expr: ?*C.QRegularExpression ```
    pub fn FindWithExpr(self: ?*anyopaque, expr: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextDocument_FindWithExpr(@ptrCast(self), @ptrCast(expr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, expr: ?*C.QRegularExpression, cursor: ?*C.QTextCursor ```
    pub fn Find3(self: ?*anyopaque, expr: ?*anyopaque, cursor: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextDocument_Find3(@ptrCast(self), @ptrCast(expr), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
    ///
    /// ``` self: ?*C.QTextDocument, pos: i32 ```
    pub fn FrameAt(self: ?*anyopaque, pos: i32) ?*C.QTextFrame {
        return C.QTextDocument_FrameAt(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn RootFrame(self: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextDocument_RootFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#object)
    ///
    /// ``` self: ?*C.QTextDocument, objectIndex: i32 ```
    pub fn Object(self: ?*anyopaque, objectIndex: i32) ?*C.QTextObject {
        return C.QTextDocument_Object(@ptrCast(self), @intCast(objectIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
    ///
    /// ``` self: ?*C.QTextDocument, param1: ?*C.QTextFormat ```
    pub fn ObjectForFormat(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QTextObject {
        return C.QTextDocument_ObjectForFormat(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
    ///
    /// ``` self: ?*C.QTextDocument, pos: i32 ```
    pub fn FindBlock(self: ?*anyopaque, pos: i32) ?*C.QTextBlock {
        return C.QTextDocument_FindBlock(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
    ///
    /// ``` self: ?*C.QTextDocument, blockNumber: i32 ```
    pub fn FindBlockByNumber(self: ?*anyopaque, blockNumber: i32) ?*C.QTextBlock {
        return C.QTextDocument_FindBlockByNumber(@ptrCast(self), @intCast(blockNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
    ///
    /// ``` self: ?*C.QTextDocument, blockNumber: i32 ```
    pub fn FindBlockByLineNumber(self: ?*anyopaque, blockNumber: i32) ?*C.QTextBlock {
        return C.QTextDocument_FindBlockByLineNumber(@ptrCast(self), @intCast(blockNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#begin)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Begin(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextDocument_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#end)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn End(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextDocument_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn FirstBlock(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextDocument_FirstBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn LastBlock(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextDocument_LastBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
    ///
    /// ``` self: ?*C.QTextDocument, size: ?*C.QSizeF ```
    pub fn SetPageSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QTextDocument_SetPageSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn PageSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QTextDocument_PageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
    ///
    /// ``` self: ?*C.QTextDocument, font: ?*C.QFont ```
    pub fn SetDefaultFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QTextDocument_SetDefaultFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DefaultFont(self: ?*anyopaque) ?*C.QFont {
        return C.QTextDocument_DefaultFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
    ///
    /// ``` self: ?*C.QTextDocument, baseline: f64 ```
    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        C.QTextDocument_SetSuperScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn SuperScriptBaseline(self: ?*anyopaque) f64 {
        return C.QTextDocument_SuperScriptBaseline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
    ///
    /// ``` self: ?*C.QTextDocument, baseline: f64 ```
    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        C.QTextDocument_SetSubScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn SubScriptBaseline(self: ?*anyopaque) f64 {
        return C.QTextDocument_SubScriptBaseline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
    ///
    /// ``` self: ?*C.QTextDocument, baseline: f64 ```
    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        C.QTextDocument_SetBaselineOffset(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn BaselineOffset(self: ?*anyopaque) f64 {
        return C.QTextDocument_BaselineOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn PageCount(self: ?*anyopaque) i32 {
        return C.QTextDocument_PageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsModified(self: ?*anyopaque) bool {
        return C.QTextDocument_IsModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#print)
    ///
    /// ``` self: ?*C.QTextDocument, printer: ?*C.QPagedPaintDevice ```
    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        C.QTextDocument_Print(@ptrCast(self), @ptrCast(printer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#resource)
    ///
    /// ``` self: ?*C.QTextDocument, typeVal: i32, name: ?*C.QUrl ```
    pub fn Resource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) ?*C.QVariant {
        return C.QTextDocument_Resource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#addResource)
    ///
    /// ``` self: ?*C.QTextDocument, typeVal: i32, name: ?*C.QUrl, resource: ?*C.QVariant ```
    pub fn AddResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque, resource: ?*anyopaque) void {
        C.QTextDocument_AddResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name), @ptrCast(resource));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
    pub fn AllFormats(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTextFormat {
        const _arr: C.struct_libqt_list = C.QTextDocument_AllFormats(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTextFormat, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTextFormat = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#markContentsDirty)
    ///
    /// ``` self: ?*C.QTextDocument, from: i32, length: i32 ```
    pub fn MarkContentsDirty(self: ?*anyopaque, from: i32, length: i32) void {
        C.QTextDocument_MarkContentsDirty(@ptrCast(self), @intCast(from), @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
    ///
    /// ``` self: ?*C.QTextDocument, b: bool ```
    pub fn SetUseDesignMetrics(self: ?*anyopaque, b: bool) void {
        C.QTextDocument_SetUseDesignMetrics(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn UseDesignMetrics(self: ?*anyopaque) bool {
        return C.QTextDocument_UseDesignMetrics(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
    ///
    /// ``` self: ?*C.QTextDocument, b: bool ```
    pub fn SetLayoutEnabled(self: ?*anyopaque, b: bool) void {
        C.QTextDocument_SetLayoutEnabled(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsLayoutEnabled(self: ?*anyopaque) bool {
        return C.QTextDocument_IsLayoutEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
    ///
    /// ``` self: ?*C.QTextDocument, painter: ?*C.QPainter ```
    pub fn DrawContents(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QTextDocument_DrawContents(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
    ///
    /// ``` self: ?*C.QTextDocument, width: f64 ```
    pub fn SetTextWidth(self: ?*anyopaque, width: f64) void {
        C.QTextDocument_SetTextWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn TextWidth(self: ?*anyopaque) f64 {
        return C.QTextDocument_TextWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IdealWidth(self: ?*anyopaque) f64 {
        return C.QTextDocument_IdealWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IndentWidth(self: ?*anyopaque) f64 {
        return C.QTextDocument_IndentWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
    ///
    /// ``` self: ?*C.QTextDocument, width: f64 ```
    pub fn SetIndentWidth(self: ?*anyopaque, width: f64) void {
        C.QTextDocument_SetIndentWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DocumentMargin(self: ?*anyopaque) f64 {
        return C.QTextDocument_DocumentMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
    ///
    /// ``` self: ?*C.QTextDocument, margin: f64 ```
    pub fn SetDocumentMargin(self: ?*anyopaque, margin: f64) void {
        C.QTextDocument_SetDocumentMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        C.QTextDocument_AdjustSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#size)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Size(self: ?*anyopaque) ?*C.QSizeF {
        return C.QTextDocument_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn BlockCount(self: ?*anyopaque) i32 {
        return C.QTextDocument_BlockCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn LineCount(self: ?*anyopaque) i32 {
        return C.QTextDocument_LineCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn CharacterCount(self: ?*anyopaque) i32 {
        return C.QTextDocument_CharacterCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
    ///
    /// ``` self: ?*C.QTextDocument, sheet: []const u8 ```
    pub fn SetDefaultStyleSheet(self: ?*anyopaque, sheet: []const u8) void {
        const sheet_str = C.struct_libqt_string{
            .len = sheet.len,
            .data = @constCast(sheet.ptr),
        };
        C.QTextDocument_SetDefaultStyleSheet(@ptrCast(self), sheet_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
    pub fn DefaultStyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextDocument_DefaultStyleSheet(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ``` self: ?*C.QTextDocument, cursor: ?*C.QTextCursor ```
    pub fn Undo(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QTextDocument_Undo(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ``` self: ?*C.QTextDocument, cursor: ?*C.QTextCursor ```
    pub fn Redo(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QTextDocument_Redo(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn ClearUndoRedoStacks(self: ?*anyopaque) void {
        C.QTextDocument_ClearUndoRedoStacks(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn MaximumBlockCount(self: ?*anyopaque) i32 {
        return C.QTextDocument_MaximumBlockCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
    ///
    /// ``` self: ?*C.QTextDocument, maximum: i32 ```
    pub fn SetMaximumBlockCount(self: ?*anyopaque, maximum: i32) void {
        C.QTextDocument_SetMaximumBlockCount(@ptrCast(self), @intCast(maximum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DefaultTextOption(self: ?*anyopaque) ?*C.QTextOption {
        return C.QTextDocument_DefaultTextOption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
    ///
    /// ``` self: ?*C.QTextDocument, option: ?*C.QTextOption ```
    pub fn SetDefaultTextOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QTextDocument_SetDefaultTextOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn BaseUrl(self: ?*anyopaque) ?*C.QUrl {
        return C.QTextDocument_BaseUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
    ///
    /// ``` self: ?*C.QTextDocument, url: ?*C.QUrl ```
    pub fn SetBaseUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QTextDocument_SetBaseUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultCursorMoveStyle)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DefaultCursorMoveStyle(self: ?*anyopaque) i64 {
        return C.QTextDocument_DefaultCursorMoveStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
    ///
    /// ``` self: ?*C.QTextDocument, style: qnamespace_enums.CursorMoveStyle ```
    pub fn SetDefaultCursorMoveStyle(self: ?*anyopaque, style: i64) void {
        C.QTextDocument_SetDefaultCursorMoveStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
    ///
    /// ``` self: ?*C.QTextDocument, from: i32, charsRemoved: i32, charsAdded: i32 ```
    pub fn ContentsChange(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        C.QTextDocument_ContentsChange(@ptrCast(self), @intCast(from), @intCast(charsRemoved), @intCast(charsAdded));
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, i32, i32, i32) callconv(.c) void ```
    pub fn OnContentsChange(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        C.QTextDocument_Connect_ContentsChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn ContentsChanged(self: ?*anyopaque) void {
        C.QTextDocument_ContentsChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument) callconv(.c) void ```
    pub fn OnContentsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_Connect_ContentsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
    ///
    /// ``` self: ?*C.QTextDocument, param1: bool ```
    pub fn UndoAvailable(self: ?*anyopaque, param1: bool) void {
        C.QTextDocument_UndoAvailable(@ptrCast(self), param1);
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, bool) callconv(.c) void ```
    pub fn OnUndoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QTextDocument_Connect_UndoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
    ///
    /// ``` self: ?*C.QTextDocument, param1: bool ```
    pub fn RedoAvailable(self: ?*anyopaque, param1: bool) void {
        C.QTextDocument_RedoAvailable(@ptrCast(self), param1);
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, bool) callconv(.c) void ```
    pub fn OnRedoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QTextDocument_Connect_RedoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn UndoCommandAdded(self: ?*anyopaque) void {
        C.QTextDocument_UndoCommandAdded(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument) callconv(.c) void ```
    pub fn OnUndoCommandAdded(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_Connect_UndoCommandAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
    ///
    /// ``` self: ?*C.QTextDocument, m: bool ```
    pub fn ModificationChanged(self: ?*anyopaque, m: bool) void {
        C.QTextDocument_ModificationChanged(@ptrCast(self), m);
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, bool) callconv(.c) void ```
    pub fn OnModificationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QTextDocument_Connect_ModificationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
    ///
    /// ``` self: ?*C.QTextDocument, cursor: ?*C.QTextCursor ```
    pub fn CursorPositionChanged(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QTextDocument_CursorPositionChanged(@ptrCast(self), @ptrCast(cursor));
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QTextCursor) callconv(.c) void ```
    pub fn OnCursorPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_Connect_CursorPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
    ///
    /// ``` self: ?*C.QTextDocument, newBlockCount: i32 ```
    pub fn BlockCountChanged(self: ?*anyopaque, newBlockCount: i32) void {
        C.QTextDocument_BlockCountChanged(@ptrCast(self), @intCast(newBlockCount));
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, i32) callconv(.c) void ```
    pub fn OnBlockCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QTextDocument_Connect_BlockCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
    ///
    /// ``` self: ?*C.QTextDocument, url: ?*C.QUrl ```
    pub fn BaseUrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QTextDocument_BaseUrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QUrl) callconv(.c) void ```
    pub fn OnBaseUrlChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_Connect_BaseUrlChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DocumentLayoutChanged(self: ?*anyopaque) void {
        C.QTextDocument_DocumentLayoutChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument) callconv(.c) void ```
    pub fn OnDocumentLayoutChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_Connect_DocumentLayoutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Undo2(self: ?*anyopaque) void {
        C.QTextDocument_Undo2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Redo2(self: ?*anyopaque) void {
        C.QTextDocument_Redo2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
    ///
    /// ``` self: ?*C.QTextDocument, param1: ?*C.QAbstractUndoItem ```
    pub fn AppendUndoItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTextDocument_AppendUndoItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn SetModified(self: ?*anyopaque) void {
        C.QTextDocument_SetModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// ``` self: ?*C.QTextDocument, f: ?*C.QTextFormat ```
    pub fn CreateObject(self: ?*anyopaque, f: ?*anyopaque) ?*C.QTextObject {
        return C.QTextDocument_CreateObject(@ptrCast(self), @ptrCast(f));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QTextFormat) callconv(.c) ?*C.QTextObject ```
    pub fn OnCreateObject(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QTextObject) void {
        C.QTextDocument_OnCreateObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTextDocument, f: ?*C.QTextFormat ```
    pub fn QBaseCreateObject(self: ?*anyopaque, f: ?*anyopaque) ?*C.QTextObject {
        return C.QTextDocument_QBaseCreateObject(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
    ///
    /// ``` self: ?*C.QTextDocument, typeVal: i32, name: ?*C.QUrl ```
    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) ?*C.QVariant {
        return C.QTextDocument_LoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, i32, ?*C.QUrl) callconv(.c) ?*C.QVariant ```
    pub fn OnLoadResource(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) ?*C.QVariant) void {
        C.QTextDocument_OnLoadResource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTextDocument, typeVal: i32, name: ?*C.QUrl ```
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) ?*C.QVariant {
        return C.QTextDocument_QBaseLoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTextDocument_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QTextDocument_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ``` self: ?*C.QTextDocument, parent: ?*C.QObject ```
    pub fn Clone1(self: ?*anyopaque, parent: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextDocument_Clone1(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
    ///
    /// ``` self: ?*C.QTextDocument, features: i32, allocator: std.mem.Allocator ```
    pub fn ToMarkdown1(self: ?*anyopaque, features: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextDocument_ToMarkdown1(@ptrCast(self), @intCast(features));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
    ///
    /// ``` self: ?*C.QTextDocument, markdown: []const u8, features: i32 ```
    pub fn SetMarkdown2(self: ?*anyopaque, markdown: []const u8, features: i64) void {
        const markdown_str = C.struct_libqt_string{
            .len = markdown.len,
            .data = @constCast(markdown.ptr),
        };
        C.QTextDocument_SetMarkdown2(@ptrCast(self), markdown_str, @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, subString: []const u8, from: i32 ```
    pub fn Find22(self: ?*anyopaque, subString: []const u8, from: i32) ?*C.QTextCursor {
        const subString_str = C.struct_libqt_string{
            .len = subString.len,
            .data = @constCast(subString.ptr),
        };
        return C.QTextDocument_Find22(@ptrCast(self), subString_str, @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, subString: []const u8, from: i32, options: i32 ```
    pub fn Find32(self: ?*anyopaque, subString: []const u8, from: i32, options: i64) ?*C.QTextCursor {
        const subString_str = C.struct_libqt_string{
            .len = subString.len,
            .data = @constCast(subString.ptr),
        };
        return C.QTextDocument_Find32(@ptrCast(self), subString_str, @intCast(from), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, subString: []const u8, cursor: ?*C.QTextCursor, options: i32 ```
    pub fn Find33(self: ?*anyopaque, subString: []const u8, cursor: ?*anyopaque, options: i64) ?*C.QTextCursor {
        const subString_str = C.struct_libqt_string{
            .len = subString.len,
            .data = @constCast(subString.ptr),
        };
        return C.QTextDocument_Find33(@ptrCast(self), subString_str, @ptrCast(cursor), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, expr: ?*C.QRegularExpression, from: i32 ```
    pub fn Find23(self: ?*anyopaque, expr: ?*anyopaque, from: i32) ?*C.QTextCursor {
        return C.QTextDocument_Find23(@ptrCast(self), @ptrCast(expr), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, expr: ?*C.QRegularExpression, from: i32, options: i32 ```
    pub fn Find34(self: ?*anyopaque, expr: ?*anyopaque, from: i32, options: i64) ?*C.QTextCursor {
        return C.QTextDocument_Find34(@ptrCast(self), @ptrCast(expr), @intCast(from), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: ?*C.QTextDocument, expr: ?*C.QRegularExpression, cursor: ?*C.QTextCursor, options: i32 ```
    pub fn Find35(self: ?*anyopaque, expr: ?*anyopaque, cursor: ?*anyopaque, options: i64) ?*C.QTextCursor {
        return C.QTextDocument_Find35(@ptrCast(self), @ptrCast(expr), @ptrCast(cursor), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
    ///
    /// ``` self: ?*C.QTextDocument, painter: ?*C.QPainter, rect: ?*C.QRectF ```
    pub fn DrawContents2(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        C.QTextDocument_DrawContents2(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ``` self: ?*C.QTextDocument, historyToClear: qtextdocument_enums.Stacks ```
    pub fn ClearUndoRedoStacks1(self: ?*anyopaque, historyToClear: i64) void {
        C.QTextDocument_ClearUndoRedoStacks1(@ptrCast(self), @intCast(historyToClear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ``` self: ?*C.QTextDocument, m: bool ```
    pub fn SetModified1(self: ?*anyopaque, m: bool) void {
        C.QTextDocument_SetModified1(@ptrCast(self), m);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextDocument, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QTextDocument, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QTextDocument, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextDocument, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QTextDocument, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextDocument, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QTextDocument, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QTextDocument, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QTextDocument, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QTextDocument ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QTextDocument, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QTextDocument, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QTextDocument, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextDocument ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextDocument ```
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
    /// ``` self: ?*C.QTextDocument ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QTextDocument, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextDocument, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QTextDocument, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextDocument, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextDocument_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextDocument_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextDocument_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextDocument_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextDocument_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextDocument_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextDocument_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextDocument_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextDocument_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextDocument_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextDocument_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextDocument_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextDocument_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextDocument_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextDocument_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextDocument_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextDocument_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QTextDocument_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QTextDocument_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QTextDocument_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTextDocument_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTextDocument_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTextDocument_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTextDocument_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTextDocument_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QTextDocument_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTextDocument_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTextDocument_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextDocument, slot: fn (?*C.QTextDocument, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextDocument_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextDocument ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextDocument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextdocument.html#types
pub const enums = struct {
    pub const MetaInformation = enum {
        pub const DocumentTitle: i32 = 0;
        pub const DocumentUrl: i32 = 1;
        pub const CssMedia: i32 = 2;
    };

    pub const MarkdownFeature = enum {
        pub const MarkdownNoHTML: i32 = 96;
        pub const MarkdownDialectCommonMark: i32 = 0;
        pub const MarkdownDialectGitHub: i32 = 20236;
    };

    pub const FindFlag = enum {
        pub const FindBackward: i32 = 1;
        pub const FindCaseSensitively: i32 = 2;
        pub const FindWholeWords: i32 = 4;
    };

    pub const ResourceType = enum {
        pub const UnknownResource: i32 = 0;
        pub const HtmlResource: i32 = 1;
        pub const ImageResource: i32 = 2;
        pub const StyleSheetResource: i32 = 3;
        pub const MarkdownResource: i32 = 4;
        pub const UserResource: i32 = 100;
    };

    pub const Stacks = enum {
        pub const UndoStack: i32 = 1;
        pub const RedoStack: i32 = 2;
        pub const UndoAndRedoStacks: i32 = 3;
    };
};
