const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtextcursor_enums = enums;
const qtextdocument_enums = @import("libqtextdocument.zig").enums;
const qtextformat_enums = @import("libqtextformat.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)
pub const qtextcursor = struct {
    /// New constructs a new QTextCursor object.
    ///
    pub fn New() QtC.QTextCursor {
        return qtc.QTextCursor_new();
    }

    /// New2 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QtC.QTextDocument `
    ///
    pub fn New2(document: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new2(@ptrCast(document));
    }

    /// New3 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` frame: QtC.QTextFrame `
    ///
    pub fn New3(frame: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new3(@ptrCast(frame));
    }

    /// New4 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` block: QtC.QTextBlock `
    ///
    pub fn New4(block: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new4(@ptrCast(block));
    }

    /// New5 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QtC.QTextCursor `
    ///
    pub fn New5(cursor: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new5(@ptrCast(cursor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` other: QtC.QTextCursor `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextCursor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` other: QtC.QTextCursor `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextCursor_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QTextCursor_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetPosition(self: ?*anyopaque, pos: i32) void {
        qtc.QTextCursor_SetPosition(@ptrCast(self), @intCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn PositionInBlock(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_PositionInBlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn Anchor(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_Anchor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextCursor_InsertText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` text: []const u8 `
    ///
    /// ` format: QtC.QTextCharFormat `
    ///
    pub fn InsertText2(self: ?*anyopaque, text: []const u8, format: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextCursor_InsertText2(@ptrCast(self), text_str, @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` op: qtextcursor_enums.MoveOperation `
    ///
    pub fn MovePosition(self: ?*anyopaque, op: i32) bool {
        return qtc.QTextCursor_MovePosition(@ptrCast(self), @intCast(op));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn VisualNavigation(self: ?*anyopaque) bool {
        return qtc.QTextCursor_VisualNavigation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` b: bool `
    ///
    pub fn SetVisualNavigation(self: ?*anyopaque, b: bool) void {
        qtc.QTextCursor_SetVisualNavigation(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` x: i32 `
    ///
    pub fn SetVerticalMovementX(self: ?*anyopaque, x: i32) void {
        qtc.QTextCursor_SetVerticalMovementX(@ptrCast(self), @intCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn VerticalMovementX(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_VerticalMovementX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` b: bool `
    ///
    pub fn SetKeepPositionOnInsert(self: ?*anyopaque, b: bool) void {
        qtc.QTextCursor_SetKeepPositionOnInsert(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn KeepPositionOnInsert(self: ?*anyopaque) bool {
        return qtc.QTextCursor_KeepPositionOnInsert(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn DeleteChar(self: ?*anyopaque) void {
        qtc.QTextCursor_DeleteChar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn DeletePreviousChar(self: ?*anyopaque) void {
        qtc.QTextCursor_DeletePreviousChar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` selection: qtextcursor_enums.SelectionType `
    ///
    pub fn Select(self: ?*anyopaque, selection: i32) void {
        qtc.QTextCursor_Select(@ptrCast(self), @intCast(selection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn HasSelection(self: ?*anyopaque) bool {
        return qtc.QTextCursor_HasSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn HasComplexSelection(self: ?*anyopaque) bool {
        return qtc.QTextCursor_HasComplexSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn RemoveSelectedText(self: ?*anyopaque) void {
        qtc.QTextCursor_RemoveSelectedText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QTextCursor_ClearSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn SelectionStart(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_SelectionStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn SelectionEnd(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_SelectionEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCursor_SelectedText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcursor.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn Selection(self: ?*anyopaque) QtC.QTextDocumentFragment {
        return qtc.QTextCursor_Selection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectedTableCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` firstRow: *i32 `
    ///
    /// ` numRows: *i32 `
    ///
    /// ` firstColumn: *i32 `
    ///
    /// ` numColumns: *i32 `
    ///
    pub fn SelectedTableCells(self: ?*anyopaque, firstRow: *i32, numRows: *i32, firstColumn: *i32, numColumns: *i32) void {
        qtc.QTextCursor_SelectedTableCells(@ptrCast(self), @ptrCast(firstRow), @ptrCast(numRows), @ptrCast(firstColumn), @ptrCast(numColumns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#block)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn Block(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QTextCursor_Block(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn CharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextCursor_CharFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextCharFormat `
    ///
    pub fn SetCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` modifier: QtC.QTextCharFormat `
    ///
    pub fn MergeCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn BlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextCursor_BlockFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextBlockFormat `
    ///
    pub fn SetBlockFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetBlockFormat(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` modifier: QtC.QTextBlockFormat `
    ///
    pub fn MergeBlockFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeBlockFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn BlockCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextCursor_BlockCharFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextCharFormat `
    ///
    pub fn SetBlockCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetBlockCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` modifier: QtC.QTextCharFormat `
    ///
    pub fn MergeBlockCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeBlockCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn AtBlockStart(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtBlockStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn AtBlockEnd(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtBlockEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn AtStart(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn InsertBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextBlockFormat `
    ///
    pub fn InsertBlock2(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock2(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextBlockFormat `
    ///
    /// ` charFormat: QtC.QTextCharFormat `
    ///
    pub fn InsertBlock3(self: ?*anyopaque, format: ?*anyopaque, charFormat: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock3(@ptrCast(self), @ptrCast(format), @ptrCast(charFormat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextListFormat `
    ///
    pub fn InsertList(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_InsertList(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` style: qtextformat_enums.Style `
    ///
    pub fn InsertList2(self: ?*anyopaque, style: i32) QtC.QTextList {
        return qtc.QTextCursor_InsertList2(@ptrCast(self), @intCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextListFormat `
    ///
    pub fn CreateList(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_CreateList(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` style: qtextformat_enums.Style `
    ///
    pub fn CreateList2(self: ?*anyopaque, style: i32) QtC.QTextList {
        return qtc.QTextCursor_CreateList2(@ptrCast(self), @intCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn CurrentList(self: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_CurrentList(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rows: i32 `
    ///
    /// ` cols: i32 `
    ///
    /// ` format: QtC.QTextTableFormat `
    ///
    pub fn InsertTable(self: ?*anyopaque, rows: i32, cols: i32, format: ?*anyopaque) QtC.QTextTable {
        return qtc.QTextCursor_InsertTable(@ptrCast(self), @intCast(rows), @intCast(cols), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rows: i32 `
    ///
    /// ` cols: i32 `
    ///
    pub fn InsertTable2(self: ?*anyopaque, rows: i32, cols: i32) QtC.QTextTable {
        return qtc.QTextCursor_InsertTable2(@ptrCast(self), @intCast(rows), @intCast(cols));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn CurrentTable(self: ?*anyopaque) QtC.QTextTable {
        return qtc.QTextCursor_CurrentTable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextFrameFormat `
    ///
    pub fn InsertFrame(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextCursor_InsertFrame(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn CurrentFrame(self: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextCursor_CurrentFrame(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` fragment: QtC.QTextDocumentFragment `
    ///
    pub fn InsertFragment(self: ?*anyopaque, fragment: ?*anyopaque) void {
        qtc.QTextCursor_InsertFragment(@ptrCast(self), @ptrCast(fragment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` html: []const u8 `
    ///
    pub fn InsertHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QTextCursor_InsertHtml(@ptrCast(self), html_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn InsertMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown(@ptrCast(self), markdown_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextImageFormat `
    ///
    /// ` alignment: qtextformat_enums.Position `
    ///
    pub fn InsertImage(self: ?*anyopaque, format: ?*anyopaque, alignment: i32) void {
        qtc.QTextCursor_InsertImage(@ptrCast(self), @ptrCast(format), @intCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` format: QtC.QTextImageFormat `
    ///
    pub fn InsertImage2(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_InsertImage2(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn InsertImage3(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage3(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn InsertImage4(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QTextCursor_InsertImage4(@ptrCast(self), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn BeginEditBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_BeginEditBlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn JoinPreviousEditBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_JoinPreviousEditBlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn EndEditBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_EndEditBlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rhs: QtC.QTextCursor `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rhs: QtC.QTextCursor `
    ///
    pub fn OperatorLesser(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorLesser(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rhs: QtC.QTextCursor `
    ///
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rhs: QtC.QTextCursor `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rhs: QtC.QTextCursor `
    ///
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` rhs: QtC.QTextCursor `
    ///
    pub fn OperatorGreater(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorGreater(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` other: QtC.QTextCursor `
    ///
    pub fn IsCopyOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextCursor_IsCopyOf(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn BlockNumber(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_BlockNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_ColumnNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextCursor_Document(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` pos: i32 `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn SetPosition2(self: ?*anyopaque, pos: i32, mode: i32) void {
        qtc.QTextCursor_SetPosition2(@ptrCast(self), @intCast(pos), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` op: qtextcursor_enums.MoveOperation `
    ///
    /// ` param2: qtextcursor_enums.MoveMode `
    ///
    pub fn MovePosition2(self: ?*anyopaque, op: i32, param2: i32) bool {
        return qtc.QTextCursor_MovePosition2(@ptrCast(self), @intCast(op), @intCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` op: qtextcursor_enums.MoveOperation `
    ///
    /// ` param2: qtextcursor_enums.MoveMode `
    ///
    /// ` n: i32 `
    ///
    pub fn MovePosition3(self: ?*anyopaque, op: i32, param2: i32, n: i32) bool {
        return qtc.QTextCursor_MovePosition3(@ptrCast(self), @intCast(op), @intCast(param2), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` markdown: []const u8 `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn InsertMarkdown2(self: ?*anyopaque, markdown: []const u8, features: i32) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown2(@ptrCast(self), markdown_str, @intCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextCursor `
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn InsertImage22(self: ?*anyopaque, image: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage22(@ptrCast(self), @ptrCast(image), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#dtor.QTextCursor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTextCursor `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextCursor_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#public-types)
pub const enums = struct {
    pub const MoveMode = enum {
        pub const MoveAnchor: i32 = 0;
        pub const KeepAnchor: i32 = 1;
    };

    pub const MoveOperation = enum {
        pub const NoMove: i32 = 0;
        pub const Start: i32 = 1;
        pub const Up: i32 = 2;
        pub const StartOfLine: i32 = 3;
        pub const StartOfBlock: i32 = 4;
        pub const StartOfWord: i32 = 5;
        pub const PreviousBlock: i32 = 6;
        pub const PreviousCharacter: i32 = 7;
        pub const PreviousWord: i32 = 8;
        pub const Left: i32 = 9;
        pub const WordLeft: i32 = 10;
        pub const End: i32 = 11;
        pub const Down: i32 = 12;
        pub const EndOfLine: i32 = 13;
        pub const EndOfWord: i32 = 14;
        pub const EndOfBlock: i32 = 15;
        pub const NextBlock: i32 = 16;
        pub const NextCharacter: i32 = 17;
        pub const NextWord: i32 = 18;
        pub const Right: i32 = 19;
        pub const WordRight: i32 = 20;
        pub const NextCell: i32 = 21;
        pub const PreviousCell: i32 = 22;
        pub const NextRow: i32 = 23;
        pub const PreviousRow: i32 = 24;
    };

    pub const SelectionType = enum {
        pub const WordUnderCursor: i32 = 0;
        pub const LineUnderCursor: i32 = 1;
        pub const BlockUnderCursor: i32 = 2;
        pub const Document: i32 = 3;
    };
};
