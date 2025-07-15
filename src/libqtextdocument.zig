const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qtextdocument_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstractundoitem.html
pub const qabstractundoitem = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#undo)
    ///
    /// ``` self: QtC.QAbstractUndoItem ```
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QAbstractUndoItem_Undo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#redo)
    ///
    /// ``` self: QtC.QAbstractUndoItem ```
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QAbstractUndoItem_Redo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#operator=)
    ///
    /// ``` self: QtC.QAbstractUndoItem, param1: QtC.QAbstractUndoItem ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractUndoItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#dtor.QAbstractUndoItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractUndoItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractUndoItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextdocument.html
pub const qtextdocument = struct {
    /// New constructs a new QTextDocument object.
    ///
    ///
    pub fn New() QtC.QTextDocument {
        return qtc.QTextDocument_new();
    }

    /// New2 constructs a new QTextDocument object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.QTextDocument {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTextDocument_new2(text_str);
    }

    /// New3 constructs a new QTextDocument object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextDocument_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QTextDocument object.
    ///
    /// ``` text: []const u8, parent: QtC.QObject ```
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QTextDocument {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTextDocument_new4(text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QTextDocument_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QTextDocument, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextDocument_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QTextDocument, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QTextDocument_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTextDocument_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QTextDocument, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QTextDocument_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QTextDocument_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Clone(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextDocument_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextDocument_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QTextDocument_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QTextDocument_OnClear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.QTextDocument_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
    ///
    /// ``` self: QtC.QTextDocument, enable: bool ```
    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextDocument_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsUndoRedoEnabled(self: ?*anyopaque) bool {
        return qtc.QTextDocument_IsUndoRedoEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsUndoAvailable(self: ?*anyopaque) bool {
        return qtc.QTextDocument_IsUndoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsRedoAvailable(self: ?*anyopaque) bool {
        return qtc.QTextDocument_IsRedoAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn AvailableUndoSteps(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_AvailableUndoSteps(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn AvailableRedoSteps(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_AvailableRedoSteps(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#revision)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Revision(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_Revision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
    ///
    /// ``` self: QtC.QTextDocument, layout: QtC.QAbstractTextDocumentLayout ```
    pub fn SetDocumentLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QTextDocument_SetDocumentLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DocumentLayout(self: ?*anyopaque) QtC.QAbstractTextDocumentLayout {
        return qtc.QTextDocument_DocumentLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMetaInformation)
    ///
    /// ``` self: QtC.QTextDocument, info: qtextdocument_enums.MetaInformation, param2: []const u8 ```
    pub fn SetMetaInformation(self: ?*anyopaque, info: i64, param2: []const u8) void {
        const param2_str = qtc.struct_libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.QTextDocument_SetMetaInformation(@ptrCast(self), @intCast(info), param2_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#metaInformation)
    ///
    /// ``` self: QtC.QTextDocument, info: qtextdocument_enums.MetaInformation, allocator: std.mem.Allocator ```
    pub fn MetaInformation(self: ?*anyopaque, info: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_MetaInformation(@ptrCast(self), @intCast(info));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.MetaInformation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToHtml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
    ///
    /// ``` self: QtC.QTextDocument, html: []const u8 ```
    pub fn SetHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.struct_libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QTextDocument_SetHtml(@ptrCast(self), html_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToMarkdown(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToMarkdown(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
    ///
    /// ``` self: QtC.QTextDocument, markdown: []const u8 ```
    pub fn SetMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.struct_libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextDocument_SetMarkdown(@ptrCast(self), markdown_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToRawText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToRawText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToRawText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ToPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToPlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
    ///
    /// ``` self: QtC.QTextDocument, text: []const u8 ```
    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextDocument_SetPlainText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
    ///
    /// ``` self: QtC.QTextDocument, pos: i32 ```
    pub fn CharacterAt(self: ?*anyopaque, pos: i32) QtC.QChar {
        return qtc.QTextDocument_CharacterAt(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, subString: []const u8 ```
    pub fn Find(self: ?*anyopaque, subString: []const u8) QtC.QTextCursor {
        const subString_str = qtc.struct_libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return qtc.QTextDocument_Find(@ptrCast(self), subString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, subString: []const u8, cursor: QtC.QTextCursor ```
    pub fn Find2(self: ?*anyopaque, subString: []const u8, cursor: ?*anyopaque) QtC.QTextCursor {
        const subString_str = qtc.struct_libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return qtc.QTextDocument_Find2(@ptrCast(self), subString_str, @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, expr: QtC.QRegularExpression ```
    pub fn Find3(self: ?*anyopaque, expr: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextDocument_Find3(@ptrCast(self), @ptrCast(expr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, expr: QtC.QRegularExpression, cursor: QtC.QTextCursor ```
    pub fn Find4(self: ?*anyopaque, expr: ?*anyopaque, cursor: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextDocument_Find4(@ptrCast(self), @ptrCast(expr), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
    ///
    /// ``` self: QtC.QTextDocument, pos: i32 ```
    pub fn FrameAt(self: ?*anyopaque, pos: i32) QtC.QTextFrame {
        return qtc.QTextDocument_FrameAt(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn RootFrame(self: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextDocument_RootFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#object)
    ///
    /// ``` self: QtC.QTextDocument, objectIndex: i32 ```
    pub fn Object(self: ?*anyopaque, objectIndex: i32) QtC.QTextObject {
        return qtc.QTextDocument_Object(@ptrCast(self), @intCast(objectIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
    ///
    /// ``` self: QtC.QTextDocument, param1: QtC.QTextFormat ```
    pub fn ObjectForFormat(self: ?*anyopaque, param1: ?*anyopaque) QtC.QTextObject {
        return qtc.QTextDocument_ObjectForFormat(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
    ///
    /// ``` self: QtC.QTextDocument, pos: i32 ```
    pub fn FindBlock(self: ?*anyopaque, pos: i32) QtC.QTextBlock {
        return qtc.QTextDocument_FindBlock(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
    ///
    /// ``` self: QtC.QTextDocument, blockNumber: i32 ```
    pub fn FindBlockByNumber(self: ?*anyopaque, blockNumber: i32) QtC.QTextBlock {
        return qtc.QTextDocument_FindBlockByNumber(@ptrCast(self), @intCast(blockNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
    ///
    /// ``` self: QtC.QTextDocument, blockNumber: i32 ```
    pub fn FindBlockByLineNumber(self: ?*anyopaque, blockNumber: i32) QtC.QTextBlock {
        return qtc.QTextDocument_FindBlockByLineNumber(@ptrCast(self), @intCast(blockNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#begin)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Begin(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QTextDocument_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#end)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn End(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QTextDocument_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn FirstBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QTextDocument_FirstBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn LastBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QTextDocument_LastBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
    ///
    /// ``` self: QtC.QTextDocument, size: QtC.QSizeF ```
    pub fn SetPageSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QTextDocument_SetPageSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn PageSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QTextDocument_PageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
    ///
    /// ``` self: QtC.QTextDocument, font: QtC.QFont ```
    pub fn SetDefaultFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTextDocument_SetDefaultFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DefaultFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextDocument_DefaultFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
    ///
    /// ``` self: QtC.QTextDocument, baseline: f64 ```
    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextDocument_SetSuperScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn SuperScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextDocument_SuperScriptBaseline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
    ///
    /// ``` self: QtC.QTextDocument, baseline: f64 ```
    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextDocument_SetSubScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn SubScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextDocument_SubScriptBaseline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
    ///
    /// ``` self: QtC.QTextDocument, baseline: f64 ```
    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextDocument_SetBaselineOffset(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn BaselineOffset(self: ?*anyopaque) f64 {
        return qtc.QTextDocument_BaselineOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn PageCount(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_PageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsModified(self: ?*anyopaque) bool {
        return qtc.QTextDocument_IsModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#print)
    ///
    /// ``` self: QtC.QTextDocument, printer: QtC.QPagedPaintDevice ```
    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QTextDocument_Print(@ptrCast(self), @ptrCast(printer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#resource)
    ///
    /// ``` self: QtC.QTextDocument, typeVal: i32, name: QtC.QUrl ```
    pub fn Resource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextDocument_Resource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#addResource)
    ///
    /// ``` self: QtC.QTextDocument, typeVal: i32, name: QtC.QUrl, resource: QtC.QVariant ```
    pub fn AddResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque, resource: ?*anyopaque) void {
        qtc.QTextDocument_AddResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name), @ptrCast(resource));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn AllFormats(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextFormat {
        const _arr: qtc.struct_libqt_list = qtc.QTextDocument_AllFormats(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextFormat, _arr.len) catch @panic("qtextdocument.AllFormats: Memory allocation failed");
        const _data: [*]QtC.QTextFormat = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#markContentsDirty)
    ///
    /// ``` self: QtC.QTextDocument, from: i32, length: i32 ```
    pub fn MarkContentsDirty(self: ?*anyopaque, from: i32, length: i32) void {
        qtc.QTextDocument_MarkContentsDirty(@ptrCast(self), @intCast(from), @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
    ///
    /// ``` self: QtC.QTextDocument, b: bool ```
    pub fn SetUseDesignMetrics(self: ?*anyopaque, b: bool) void {
        qtc.QTextDocument_SetUseDesignMetrics(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn UseDesignMetrics(self: ?*anyopaque) bool {
        return qtc.QTextDocument_UseDesignMetrics(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
    ///
    /// ``` self: QtC.QTextDocument, b: bool ```
    pub fn SetLayoutEnabled(self: ?*anyopaque, b: bool) void {
        qtc.QTextDocument_SetLayoutEnabled(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsLayoutEnabled(self: ?*anyopaque) bool {
        return qtc.QTextDocument_IsLayoutEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
    ///
    /// ``` self: QtC.QTextDocument, painter: QtC.QPainter ```
    pub fn DrawContents(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QTextDocument_DrawContents(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
    ///
    /// ``` self: QtC.QTextDocument, width: f64 ```
    pub fn SetTextWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextDocument_SetTextWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn TextWidth(self: ?*anyopaque) f64 {
        return qtc.QTextDocument_TextWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IdealWidth(self: ?*anyopaque) f64 {
        return qtc.QTextDocument_IdealWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IndentWidth(self: ?*anyopaque) f64 {
        return qtc.QTextDocument_IndentWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
    ///
    /// ``` self: QtC.QTextDocument, width: f64 ```
    pub fn SetIndentWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextDocument_SetIndentWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DocumentMargin(self: ?*anyopaque) f64 {
        return qtc.QTextDocument_DocumentMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
    ///
    /// ``` self: QtC.QTextDocument, margin: f64 ```
    pub fn SetDocumentMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextDocument_SetDocumentMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QTextDocument_AdjustSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#size)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QTextDocument_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn BlockCount(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_BlockCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn LineCount(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_LineCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn CharacterCount(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_CharacterCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
    ///
    /// ``` self: QtC.QTextDocument, sheet: []const u8 ```
    pub fn SetDefaultStyleSheet(self: ?*anyopaque, sheet: []const u8) void {
        const sheet_str = qtc.struct_libqt_string{
            .len = sheet.len,
            .data = sheet.ptr,
        };
        qtc.QTextDocument_SetDefaultStyleSheet(@ptrCast(self), sheet_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn DefaultStyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_DefaultStyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.DefaultStyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ``` self: QtC.QTextDocument, cursor: QtC.QTextCursor ```
    pub fn Undo(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextDocument_Undo(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ``` self: QtC.QTextDocument, cursor: QtC.QTextCursor ```
    pub fn Redo(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextDocument_Redo(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn ClearUndoRedoStacks(self: ?*anyopaque) void {
        qtc.QTextDocument_ClearUndoRedoStacks(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn MaximumBlockCount(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_MaximumBlockCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
    ///
    /// ``` self: QtC.QTextDocument, maximum: i32 ```
    pub fn SetMaximumBlockCount(self: ?*anyopaque, maximum: i32) void {
        qtc.QTextDocument_SetMaximumBlockCount(@ptrCast(self), @intCast(maximum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DefaultTextOption(self: ?*anyopaque) QtC.QTextOption {
        return qtc.QTextDocument_DefaultTextOption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
    ///
    /// ``` self: QtC.QTextDocument, option: QtC.QTextOption ```
    pub fn SetDefaultTextOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTextDocument_SetDefaultTextOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn BaseUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QTextDocument_BaseUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
    ///
    /// ``` self: QtC.QTextDocument, url: QtC.QUrl ```
    pub fn SetBaseUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QTextDocument_SetBaseUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultCursorMoveStyle)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DefaultCursorMoveStyle(self: ?*anyopaque) i64 {
        return qtc.QTextDocument_DefaultCursorMoveStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
    ///
    /// ``` self: QtC.QTextDocument, style: qnamespace_enums.CursorMoveStyle ```
    pub fn SetDefaultCursorMoveStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextDocument_SetDefaultCursorMoveStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
    ///
    /// ``` self: QtC.QTextDocument, from: i32, charsRemoved: i32, charsAdded: i32 ```
    pub fn ContentsChange(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QTextDocument_ContentsChange(@ptrCast(self), @intCast(from), @intCast(charsRemoved), @intCast(charsAdded));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, from: i32, charsRemoved: i32, charsAdded: i32) callconv(.c) void ```
    pub fn OnContentsChange(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn ContentsChanged(self: ?*anyopaque) void {
        qtc.QTextDocument_ContentsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument) callconv(.c) void ```
    pub fn OnContentsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
    ///
    /// ``` self: QtC.QTextDocument, param1: bool ```
    pub fn UndoAvailable(self: ?*anyopaque, param1: bool) void {
        qtc.QTextDocument_UndoAvailable(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, param1: bool) callconv(.c) void ```
    pub fn OnUndoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
    ///
    /// ``` self: QtC.QTextDocument, param1: bool ```
    pub fn RedoAvailable(self: ?*anyopaque, param1: bool) void {
        qtc.QTextDocument_RedoAvailable(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, param1: bool) callconv(.c) void ```
    pub fn OnRedoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_RedoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn UndoCommandAdded(self: ?*anyopaque) void {
        qtc.QTextDocument_UndoCommandAdded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument) callconv(.c) void ```
    pub fn OnUndoCommandAdded(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoCommandAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
    ///
    /// ``` self: QtC.QTextDocument, m: bool ```
    pub fn ModificationChanged(self: ?*anyopaque, m: bool) void {
        qtc.QTextDocument_ModificationChanged(@ptrCast(self), m);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, m: bool) callconv(.c) void ```
    pub fn OnModificationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ModificationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.QTextDocument, cursor: QtC.QTextCursor ```
    pub fn CursorPositionChanged(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextDocument_CursorPositionChanged(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, cursor: QtC.QTextCursor) callconv(.c) void ```
    pub fn OnCursorPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_CursorPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
    ///
    /// ``` self: QtC.QTextDocument, newBlockCount: i32 ```
    pub fn BlockCountChanged(self: ?*anyopaque, newBlockCount: i32) void {
        qtc.QTextDocument_BlockCountChanged(@ptrCast(self), @intCast(newBlockCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, newBlockCount: i32) callconv(.c) void ```
    pub fn OnBlockCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BlockCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
    ///
    /// ``` self: QtC.QTextDocument, url: QtC.QUrl ```
    pub fn BaseUrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QTextDocument_BaseUrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, url: QtC.QUrl) callconv(.c) void ```
    pub fn OnBaseUrlChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BaseUrlChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DocumentLayoutChanged(self: ?*anyopaque) void {
        qtc.QTextDocument_DocumentLayoutChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument) callconv(.c) void ```
    pub fn OnDocumentLayoutChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_Connect_DocumentLayoutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Undo2(self: ?*anyopaque) void {
        qtc.QTextDocument_Undo2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Redo2(self: ?*anyopaque) void {
        qtc.QTextDocument_Redo2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
    ///
    /// ``` self: QtC.QTextDocument, param1: QtC.QAbstractUndoItem ```
    pub fn AppendUndoItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextDocument_AppendUndoItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn SetModified(self: ?*anyopaque) void {
        qtc.QTextDocument_SetModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// ``` self: QtC.QTextDocument, f: QtC.QTextFormat ```
    pub fn CreateObject(self: ?*anyopaque, f: ?*anyopaque) QtC.QTextObject {
        return qtc.QTextDocument_CreateObject(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, f: QtC.QTextFormat) callconv(.c) QtC.QTextObject ```
    pub fn OnCreateObject(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QTextObject) void {
        qtc.QTextDocument_OnCreateObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTextDocument, f: QtC.QTextFormat ```
    pub fn QBaseCreateObject(self: ?*anyopaque, f: ?*anyopaque) QtC.QTextObject {
        return qtc.QTextDocument_QBaseCreateObject(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
    ///
    /// ``` self: QtC.QTextDocument, typeVal: i32, name: QtC.QUrl ```
    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextDocument_LoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, typeVal: i32, name: QtC.QUrl) callconv(.c) QtC.QVariant ```
    pub fn OnLoadResource(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QTextDocument_OnLoadResource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTextDocument, typeVal: i32, name: QtC.QUrl ```
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QTextDocument_QBaseLoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QTextDocument_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QTextDocument_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ``` self: QtC.QTextDocument, parent: QtC.QObject ```
    pub fn Clone1(self: ?*anyopaque, parent: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextDocument_Clone1(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
    ///
    /// ``` self: QtC.QTextDocument, features: i32, allocator: std.mem.Allocator ```
    pub fn ToMarkdown1(self: ?*anyopaque, features: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocument_ToMarkdown1(@ptrCast(self), @intCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
    ///
    /// ``` self: QtC.QTextDocument, markdown: []const u8, features: i32 ```
    pub fn SetMarkdown2(self: ?*anyopaque, markdown: []const u8, features: i64) void {
        const markdown_str = qtc.struct_libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextDocument_SetMarkdown2(@ptrCast(self), markdown_str, @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, subString: []const u8, from: i32 ```
    pub fn Find22(self: ?*anyopaque, subString: []const u8, from: i32) QtC.QTextCursor {
        const subString_str = qtc.struct_libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return qtc.QTextDocument_Find22(@ptrCast(self), subString_str, @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, subString: []const u8, from: i32, options: i32 ```
    pub fn Find32(self: ?*anyopaque, subString: []const u8, from: i32, options: i64) QtC.QTextCursor {
        const subString_str = qtc.struct_libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return qtc.QTextDocument_Find32(@ptrCast(self), subString_str, @intCast(from), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, subString: []const u8, cursor: QtC.QTextCursor, options: i32 ```
    pub fn Find33(self: ?*anyopaque, subString: []const u8, cursor: ?*anyopaque, options: i64) QtC.QTextCursor {
        const subString_str = qtc.struct_libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return qtc.QTextDocument_Find33(@ptrCast(self), subString_str, @ptrCast(cursor), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, expr: QtC.QRegularExpression, from: i32 ```
    pub fn Find23(self: ?*anyopaque, expr: ?*anyopaque, from: i32) QtC.QTextCursor {
        return qtc.QTextDocument_Find23(@ptrCast(self), @ptrCast(expr), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, expr: QtC.QRegularExpression, from: i32, options: i32 ```
    pub fn Find34(self: ?*anyopaque, expr: ?*anyopaque, from: i32, options: i64) QtC.QTextCursor {
        return qtc.QTextDocument_Find34(@ptrCast(self), @ptrCast(expr), @intCast(from), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ``` self: QtC.QTextDocument, expr: QtC.QRegularExpression, cursor: QtC.QTextCursor, options: i32 ```
    pub fn Find35(self: ?*anyopaque, expr: ?*anyopaque, cursor: ?*anyopaque, options: i64) QtC.QTextCursor {
        return qtc.QTextDocument_Find35(@ptrCast(self), @ptrCast(expr), @ptrCast(cursor), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
    ///
    /// ``` self: QtC.QTextDocument, painter: QtC.QPainter, rect: QtC.QRectF ```
    pub fn DrawContents2(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QTextDocument_DrawContents2(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ``` self: QtC.QTextDocument, historyToClear: qtextdocument_enums.Stacks ```
    pub fn ClearUndoRedoStacks1(self: ?*anyopaque, historyToClear: i64) void {
        qtc.QTextDocument_ClearUndoRedoStacks1(@ptrCast(self), @intCast(historyToClear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ``` self: QtC.QTextDocument, m: bool ```
    pub fn SetModified1(self: ?*anyopaque, m: bool) void {
        qtc.QTextDocument_SetModified1(@ptrCast(self), m);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QTextDocument, name: []const u8 ```
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
    /// ``` self: QtC.QTextDocument ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QTextDocument, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QTextDocument, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QTextDocument, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QTextDocument, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QTextDocument, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qtextdocument.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QTextDocument, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QTextDocument, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QTextDocument, obj: QtC.QObject ```
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
    /// ``` self: QtC.QTextDocument, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QTextDocument ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QTextDocument, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QTextDocument, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QTextDocument, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtextdocument.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextdocument.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTextDocument ```
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
    /// ``` self: QtC.QTextDocument ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QTextDocument, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QTextDocument, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QTextDocument, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QTextDocument, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTextDocument, param1: QtC.QObject ```
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

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextDocument_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextDocument_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextDocument_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextDocument_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextDocument_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextDocument_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextDocument_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextDocument_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextDocument_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextDocument_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextDocument_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextDocument_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextDocument_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextDocument_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextDocument_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextDocument_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextDocument_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QTextDocument_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QTextDocument_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QTextDocument_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QTextDocument_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTextDocument_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextDocument_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextDocument_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QTextDocument_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QTextDocument_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QTextDocument_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QTextDocument, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextDocument_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QTextDocument, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#dtor.QTextDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextDocument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextDocument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextdocument.html#types
pub const enums = struct {
    pub const MetaInformation = enum {
        pub const DocumentTitle: i32 = 0;
        pub const DocumentUrl: i32 = 1;
        pub const CssMedia: i32 = 2;
        pub const FrontMatter: i32 = 3;
    };

    pub const MarkdownFeature = enum {
        pub const MarkdownNoHTML: i32 = 96;
        pub const MarkdownDialectCommonMark: i32 = 0;
        pub const MarkdownDialectGitHub: i32 = 1068812;
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
