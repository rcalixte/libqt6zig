const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtextcursor_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextcursor.html
pub const qtextcursor = struct {
    /// New constructs a new QTextCursor object.
    ///
    ///
    pub fn New() QtC.QTextCursor {
        return qtc.QTextCursor_new();
    }

    /// New2 constructs a new QTextCursor object.
    ///
    /// ``` document: QtC.QTextDocument ```
    pub fn New2(document: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new2(@ptrCast(document));
    }

    /// New3 constructs a new QTextCursor object.
    ///
    /// ``` frame: QtC.QTextFrame ```
    pub fn New3(frame: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new3(@ptrCast(frame));
    }

    /// New4 constructs a new QTextCursor object.
    ///
    /// ``` block: QtC.QTextBlock ```
    pub fn New4(block: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new4(@ptrCast(block));
    }

    /// New5 constructs a new QTextCursor object.
    ///
    /// ``` cursor: QtC.QTextCursor ```
    pub fn New5(cursor: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new5(@ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq)
    ///
    /// ``` self: QtC.QTextCursor, other: QtC.QTextCursor ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextCursor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#swap)
    ///
    /// ``` self: QtC.QTextCursor, other: QtC.QTextCursor ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextCursor_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QTextCursor_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ``` self: QtC.QTextCursor, pos: i32 ```
    pub fn SetPosition(self: ?*anyopaque, pos: i32) void {
        qtc.QTextCursor_SetPosition(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#position)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn PositionInBlock(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_PositionInBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn Anchor(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_Anchor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ``` self: QtC.QTextCursor, text: []const u8 ```
    pub fn InsertText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextCursor_InsertText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ``` self: QtC.QTextCursor, text: []const u8, format: QtC.QTextCharFormat ```
    pub fn InsertText2(self: ?*anyopaque, text: []const u8, format: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextCursor_InsertText2(@ptrCast(self), text_str, @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ``` self: QtC.QTextCursor, op: qtextcursor_enums.MoveOperation ```
    pub fn MovePosition(self: ?*anyopaque, op: i64) bool {
        return qtc.QTextCursor_MovePosition(@ptrCast(self), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn VisualNavigation(self: ?*anyopaque) bool {
        return qtc.QTextCursor_VisualNavigation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
    ///
    /// ``` self: QtC.QTextCursor, b: bool ```
    pub fn SetVisualNavigation(self: ?*anyopaque, b: bool) void {
        qtc.QTextCursor_SetVisualNavigation(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
    ///
    /// ``` self: QtC.QTextCursor, x: i32 ```
    pub fn SetVerticalMovementX(self: ?*anyopaque, x: i32) void {
        qtc.QTextCursor_SetVerticalMovementX(@ptrCast(self), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn VerticalMovementX(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_VerticalMovementX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
    ///
    /// ``` self: QtC.QTextCursor, b: bool ```
    pub fn SetKeepPositionOnInsert(self: ?*anyopaque, b: bool) void {
        qtc.QTextCursor_SetKeepPositionOnInsert(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn KeepPositionOnInsert(self: ?*anyopaque) bool {
        return qtc.QTextCursor_KeepPositionOnInsert(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn DeleteChar(self: ?*anyopaque) void {
        qtc.QTextCursor_DeleteChar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn DeletePreviousChar(self: ?*anyopaque) void {
        qtc.QTextCursor_DeletePreviousChar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#select)
    ///
    /// ``` self: QtC.QTextCursor, selection: qtextcursor_enums.SelectionType ```
    pub fn Select(self: ?*anyopaque, selection: i64) void {
        qtc.QTextCursor_Select(@ptrCast(self), @intCast(selection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn HasSelection(self: ?*anyopaque) bool {
        return qtc.QTextCursor_HasSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn HasComplexSelection(self: ?*anyopaque) bool {
        return qtc.QTextCursor_HasComplexSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn RemoveSelectedText(self: ?*anyopaque) void {
        qtc.QTextCursor_RemoveSelectedText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QTextCursor_ClearSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn SelectionStart(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_SelectionStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn SelectionEnd(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_SelectionEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
    ///
    /// ``` self: QtC.QTextCursor, allocator: std.mem.Allocator ```
    pub fn SelectedText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCursor_SelectedText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcursor.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selection)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn Selection(self: ?*anyopaque) QtC.QTextDocumentFragment {
        return qtc.QTextCursor_Selection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedTableCells)
    ///
    /// ``` self: QtC.QTextCursor, firstRow: *i32, numRows: *i32, firstColumn: *i32, numColumns: *i32 ```
    pub fn SelectedTableCells(self: ?*anyopaque, firstRow: *i32, numRows: *i32, firstColumn: *i32, numColumns: *i32) void {
        qtc.QTextCursor_SelectedTableCells(@ptrCast(self), @ptrCast(firstRow), @ptrCast(numRows), @ptrCast(firstColumn), @ptrCast(numColumns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#block)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn Block(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QTextCursor_Block(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn CharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextCursor_CharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextCharFormat ```
    pub fn SetCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
    ///
    /// ``` self: QtC.QTextCursor, modifier: QtC.QTextCharFormat ```
    pub fn MergeCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn BlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextCursor_BlockFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextBlockFormat ```
    pub fn SetBlockFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetBlockFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
    ///
    /// ``` self: QtC.QTextCursor, modifier: QtC.QTextBlockFormat ```
    pub fn MergeBlockFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeBlockFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn BlockCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextCursor_BlockCharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextCharFormat ```
    pub fn SetBlockCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetBlockCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
    ///
    /// ``` self: QtC.QTextCursor, modifier: QtC.QTextCharFormat ```
    pub fn MergeBlockCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeBlockCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn AtBlockStart(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtBlockStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn AtBlockEnd(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtBlockEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn AtStart(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QTextCursor_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn InsertBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextBlockFormat ```
    pub fn InsertBlock2(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock2(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextBlockFormat, charFormat: QtC.QTextCharFormat ```
    pub fn InsertBlock3(self: ?*anyopaque, format: ?*anyopaque, charFormat: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock3(@ptrCast(self), @ptrCast(format), @ptrCast(charFormat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextListFormat ```
    pub fn InsertList(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_InsertList(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ``` self: QtC.QTextCursor, style: qtextcursor_enums.Style ```
    pub fn InsertList2(self: ?*anyopaque, style: i64) QtC.QTextList {
        return qtc.QTextCursor_InsertList2(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextListFormat ```
    pub fn CreateList(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_CreateList(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ``` self: QtC.QTextCursor, style: qtextcursor_enums.Style ```
    pub fn CreateList2(self: ?*anyopaque, style: i64) QtC.QTextList {
        return qtc.QTextCursor_CreateList2(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn CurrentList(self: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_CurrentList(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ``` self: QtC.QTextCursor, rows: i32, cols: i32, format: QtC.QTextTableFormat ```
    pub fn InsertTable(self: ?*anyopaque, rows: i32, cols: i32, format: ?*anyopaque) QtC.QTextTable {
        return qtc.QTextCursor_InsertTable(@ptrCast(self), @intCast(rows), @intCast(cols), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ``` self: QtC.QTextCursor, rows: i32, cols: i32 ```
    pub fn InsertTable2(self: ?*anyopaque, rows: i32, cols: i32) QtC.QTextTable {
        return qtc.QTextCursor_InsertTable2(@ptrCast(self), @intCast(rows), @intCast(cols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn CurrentTable(self: ?*anyopaque) QtC.QTextTable {
        return qtc.QTextCursor_CurrentTable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextFrameFormat ```
    pub fn InsertFrame(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextCursor_InsertFrame(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn CurrentFrame(self: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextCursor_CurrentFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
    ///
    /// ``` self: QtC.QTextCursor, fragment: QtC.QTextDocumentFragment ```
    pub fn InsertFragment(self: ?*anyopaque, fragment: ?*anyopaque) void {
        qtc.QTextCursor_InsertFragment(@ptrCast(self), @ptrCast(fragment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
    ///
    /// ``` self: QtC.QTextCursor, html: []const u8 ```
    pub fn InsertHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.struct_libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QTextCursor_InsertHtml(@ptrCast(self), html_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ``` self: QtC.QTextCursor, markdown: []const u8 ```
    pub fn InsertMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.struct_libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown(@ptrCast(self), markdown_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextImageFormat, alignment: qtextcursor_enums.Position ```
    pub fn InsertImage(self: ?*anyopaque, format: ?*anyopaque, alignment: i64) void {
        qtc.QTextCursor_InsertImage(@ptrCast(self), @ptrCast(format), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: QtC.QTextCursor, format: QtC.QTextImageFormat ```
    pub fn InsertImage2(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_InsertImage2(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: QtC.QTextCursor, name: []const u8 ```
    pub fn InsertImage3(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage3(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: QtC.QTextCursor, image: QtC.QImage ```
    pub fn InsertImage4(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QTextCursor_InsertImage4(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn BeginEditBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_BeginEditBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn JoinPreviousEditBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_JoinPreviousEditBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn EndEditBlock(self: ?*anyopaque) void {
        qtc.QTextCursor_EndEditBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextCursor, rhs: QtC.QTextCursor ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt)
    ///
    /// ``` self: QtC.QTextCursor, rhs: QtC.QTextCursor ```
    pub fn OperatorLesser(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorLesser(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt-eq)
    ///
    /// ``` self: QtC.QTextCursor, rhs: QtC.QTextCursor ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextCursor, rhs: QtC.QTextCursor ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt-eq)
    ///
    /// ``` self: QtC.QTextCursor, rhs: QtC.QTextCursor ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt)
    ///
    /// ``` self: QtC.QTextCursor, rhs: QtC.QTextCursor ```
    pub fn OperatorGreater(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorGreater(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
    ///
    /// ``` self: QtC.QTextCursor, other: QtC.QTextCursor ```
    pub fn IsCopyOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextCursor_IsCopyOf(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn BlockNumber(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_BlockNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QTextCursor_ColumnNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#document)
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextCursor_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ``` self: QtC.QTextCursor, pos: i32, mode: qtextcursor_enums.MoveMode ```
    pub fn SetPosition2(self: ?*anyopaque, pos: i32, mode: i64) void {
        qtc.QTextCursor_SetPosition2(@ptrCast(self), @intCast(pos), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ``` self: QtC.QTextCursor, op: qtextcursor_enums.MoveOperation, param2: qtextcursor_enums.MoveMode ```
    pub fn MovePosition2(self: ?*anyopaque, op: i64, param2: i64) bool {
        return qtc.QTextCursor_MovePosition2(@ptrCast(self), @intCast(op), @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ``` self: QtC.QTextCursor, op: qtextcursor_enums.MoveOperation, param2: qtextcursor_enums.MoveMode, n: i32 ```
    pub fn MovePosition3(self: ?*anyopaque, op: i64, param2: i64, n: i32) bool {
        return qtc.QTextCursor_MovePosition3(@ptrCast(self), @intCast(op), @intCast(param2), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ``` self: QtC.QTextCursor, markdown: []const u8, features: i32 ```
    pub fn InsertMarkdown2(self: ?*anyopaque, markdown: []const u8, features: i64) void {
        const markdown_str = qtc.struct_libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown2(@ptrCast(self), markdown_str, @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: QtC.QTextCursor, image: QtC.QImage, name: []const u8 ```
    pub fn InsertImage22(self: ?*anyopaque, image: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage22(@ptrCast(self), @ptrCast(image), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#dtor.QTextCursor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextCursor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextCursor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextcursor.html#types
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
