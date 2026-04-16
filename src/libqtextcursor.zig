const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QImage = @import("libqt6").QImage;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextBlockFormat = @import("libqt6").QTextBlockFormat;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextDocumentFragment = @import("libqt6").QTextDocumentFragment;
const QTextFrame = @import("libqt6").QTextFrame;
const QTextFrameFormat = @import("libqt6").QTextFrameFormat;
const QTextImageFormat = @import("libqt6").QTextImageFormat;
const QTextList = @import("libqt6").QTextList;
const QTextListFormat = @import("libqt6").QTextListFormat;
const QTextTable = @import("libqt6").QTextTable;
const QTextTableFormat = @import("libqt6").QTextTableFormat;
const qtextcursor_enums = enums;
const qtextdocument_enums = @import("libqtextdocument.zig").enums;
const qtextformat_enums = @import("libqtextformat.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)
pub const QTextCursor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextCursor,

    pub const _is_QTextCursor = {};

    /// New constructs a new QTextCursor object.
    ///
    pub fn New() QTextCursor {
        return .{ .ptr = qtc.QTextCursor_new() };
    }

    /// New2 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QTextDocument `
    ///
    pub fn New2(document: anytype) QTextCursor {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return .{ .ptr = qtc.QTextCursor_new2(@ptrCast(document.ptr)) };
    }

    /// New3 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` frame: QTextFrame `
    ///
    pub fn New3(frame: anytype) QTextCursor {
        comptime _ = @TypeOf(frame)._is_QTextFrame;
        return .{ .ptr = qtc.QTextCursor_new3(@ptrCast(frame.ptr)) };
    }

    /// New4 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` block: QTextBlock `
    ///
    pub fn New4(block: anytype) QTextCursor {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QTextCursor_new4(@ptrCast(block.ptr)) };
    }

    /// New5 constructs a new QTextCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn New5(cursor: anytype) QTextCursor {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextCursor_new5(@ptrCast(cursor.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` other: QTextCursor `
    ///
    pub fn OperatorAssign(self: QTextCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextCursor;
        qtc.QTextCursor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` other: QTextCursor `
    ///
    pub fn Swap(self: QTextCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextCursor;
        qtc.QTextCursor_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn IsNull(self: QTextCursor) bool {
        return qtc.QTextCursor_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetPosition(self: QTextCursor, pos: i32) void {
        qtc.QTextCursor_SetPosition(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn Position(self: QTextCursor) i32 {
        return qtc.QTextCursor_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn PositionInBlock(self: QTextCursor) i32 {
        return qtc.QTextCursor_PositionInBlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn Anchor(self: QTextCursor) i32 {
        return qtc.QTextCursor_Anchor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertText(self: QTextCursor, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextCursor_InsertText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` text: []const u8 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn InsertText2(self: QTextCursor, text: []const u8, format: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextCursor_InsertText2(@ptrCast(self.ptr), text_str, @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` op: qtextcursor_enums.MoveOperation `
    ///
    pub fn MovePosition(self: QTextCursor, op: i32) bool {
        return qtc.QTextCursor_MovePosition(@ptrCast(self.ptr), @bitCast(op));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn VisualNavigation(self: QTextCursor) bool {
        return qtc.QTextCursor_VisualNavigation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` b: bool `
    ///
    pub fn SetVisualNavigation(self: QTextCursor, b: bool) void {
        qtc.QTextCursor_SetVisualNavigation(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` x: i32 `
    ///
    pub fn SetVerticalMovementX(self: QTextCursor, x: i32) void {
        qtc.QTextCursor_SetVerticalMovementX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn VerticalMovementX(self: QTextCursor) i32 {
        return qtc.QTextCursor_VerticalMovementX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` b: bool `
    ///
    pub fn SetKeepPositionOnInsert(self: QTextCursor, b: bool) void {
        qtc.QTextCursor_SetKeepPositionOnInsert(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn KeepPositionOnInsert(self: QTextCursor) bool {
        return qtc.QTextCursor_KeepPositionOnInsert(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn DeleteChar(self: QTextCursor) void {
        qtc.QTextCursor_DeleteChar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn DeletePreviousChar(self: QTextCursor) void {
        qtc.QTextCursor_DeletePreviousChar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` selection: qtextcursor_enums.SelectionType `
    ///
    pub fn Select(self: QTextCursor, selection: i32) void {
        qtc.QTextCursor_Select(@ptrCast(self.ptr), @bitCast(selection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn HasSelection(self: QTextCursor) bool {
        return qtc.QTextCursor_HasSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn HasComplexSelection(self: QTextCursor) bool {
        return qtc.QTextCursor_HasComplexSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn RemoveSelectedText(self: QTextCursor) void {
        qtc.QTextCursor_RemoveSelectedText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn ClearSelection(self: QTextCursor) void {
        qtc.QTextCursor_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn SelectionStart(self: QTextCursor) i32 {
        return qtc.QTextCursor_SelectionStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn SelectionEnd(self: QTextCursor) i32 {
        return qtc.QTextCursor_SelectionEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: QTextCursor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCursor_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcursor.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn Selection(self: QTextCursor) QTextDocumentFragment {
        return .{ .ptr = qtc.QTextCursor_Selection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectedTableCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` firstRow: *i32 `
    ///
    /// ` numRows: *i32 `
    ///
    /// ` firstColumn: *i32 `
    ///
    /// ` numColumns: *i32 `
    ///
    pub fn SelectedTableCells(self: QTextCursor, firstRow: *i32, numRows: *i32, firstColumn: *i32, numColumns: *i32) void {
        qtc.QTextCursor_SelectedTableCells(@ptrCast(self.ptr), @ptrCast(firstRow), @ptrCast(numRows), @ptrCast(firstColumn), @ptrCast(numColumns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#block)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn Block(self: QTextCursor) QTextBlock {
        return .{ .ptr = qtc.QTextCursor_Block(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn CharFormat(self: QTextCursor) QTextCharFormat {
        return .{ .ptr = qtc.QTextCursor_CharFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetCharFormat(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextCursor_SetCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn MergeCharFormat(self: QTextCursor, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QTextCursor_MergeCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn BlockFormat(self: QTextCursor) QTextBlockFormat {
        return .{ .ptr = qtc.QTextCursor_BlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextBlockFormat `
    ///
    pub fn SetBlockFormat(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextBlockFormat;
        qtc.QTextCursor_SetBlockFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` modifier: QTextBlockFormat `
    ///
    pub fn MergeBlockFormat(self: QTextCursor, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextBlockFormat;
        qtc.QTextCursor_MergeBlockFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn BlockCharFormat(self: QTextCursor) QTextCharFormat {
        return .{ .ptr = qtc.QTextCursor_BlockCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetBlockCharFormat(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextCursor_SetBlockCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn MergeBlockCharFormat(self: QTextCursor, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QTextCursor_MergeBlockCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn AtBlockStart(self: QTextCursor) bool {
        return qtc.QTextCursor_AtBlockStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn AtBlockEnd(self: QTextCursor) bool {
        return qtc.QTextCursor_AtBlockEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn AtStart(self: QTextCursor) bool {
        return qtc.QTextCursor_AtStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn AtEnd(self: QTextCursor) bool {
        return qtc.QTextCursor_AtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn InsertBlock(self: QTextCursor) void {
        qtc.QTextCursor_InsertBlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextBlockFormat `
    ///
    pub fn InsertBlock2(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextBlockFormat;
        qtc.QTextCursor_InsertBlock2(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextBlockFormat `
    ///
    /// ` charFormat: QTextCharFormat `
    ///
    pub fn InsertBlock3(self: QTextCursor, format: anytype, charFormat: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextBlockFormat;
        comptime _ = @TypeOf(charFormat)._is_QTextCharFormat;
        qtc.QTextCursor_InsertBlock3(@ptrCast(self.ptr), @ptrCast(format.ptr), @ptrCast(charFormat.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextListFormat `
    ///
    pub fn InsertList(self: QTextCursor, format: anytype) QTextList {
        comptime _ = @TypeOf(format)._is_QTextListFormat;
        return .{ .ptr = qtc.QTextCursor_InsertList(@ptrCast(self.ptr), @ptrCast(format.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` style: qtextformat_enums.Style `
    ///
    pub fn InsertList2(self: QTextCursor, style: i32) QTextList {
        return .{ .ptr = qtc.QTextCursor_InsertList2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextListFormat `
    ///
    pub fn CreateList(self: QTextCursor, format: anytype) QTextList {
        comptime _ = @TypeOf(format)._is_QTextListFormat;
        return .{ .ptr = qtc.QTextCursor_CreateList(@ptrCast(self.ptr), @ptrCast(format.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` style: qtextformat_enums.Style `
    ///
    pub fn CreateList2(self: QTextCursor, style: i32) QTextList {
        return .{ .ptr = qtc.QTextCursor_CreateList2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn CurrentList(self: QTextCursor) QTextList {
        return .{ .ptr = qtc.QTextCursor_CurrentList(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rows: i32 `
    ///
    /// ` cols: i32 `
    ///
    /// ` format: QTextTableFormat `
    ///
    pub fn InsertTable(self: QTextCursor, rows: i32, cols: i32, format: anytype) QTextTable {
        comptime _ = @TypeOf(format)._is_QTextTableFormat;
        return .{ .ptr = qtc.QTextCursor_InsertTable(@ptrCast(self.ptr), @bitCast(rows), @bitCast(cols), @ptrCast(format.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rows: i32 `
    ///
    /// ` cols: i32 `
    ///
    pub fn InsertTable2(self: QTextCursor, rows: i32, cols: i32) QTextTable {
        return .{ .ptr = qtc.QTextCursor_InsertTable2(@ptrCast(self.ptr), @bitCast(rows), @bitCast(cols)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn CurrentTable(self: QTextCursor) QTextTable {
        return .{ .ptr = qtc.QTextCursor_CurrentTable(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextFrameFormat `
    ///
    pub fn InsertFrame(self: QTextCursor, format: anytype) QTextFrame {
        comptime _ = @TypeOf(format)._is_QTextFrameFormat;
        return .{ .ptr = qtc.QTextCursor_InsertFrame(@ptrCast(self.ptr), @ptrCast(format.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn CurrentFrame(self: QTextCursor) QTextFrame {
        return .{ .ptr = qtc.QTextCursor_CurrentFrame(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` fragment: QTextDocumentFragment `
    ///
    pub fn InsertFragment(self: QTextCursor, fragment: anytype) void {
        comptime _ = @TypeOf(fragment)._is_QTextDocumentFragment;
        qtc.QTextCursor_InsertFragment(@ptrCast(self.ptr), @ptrCast(fragment.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` html: []const u8 `
    ///
    pub fn InsertHtml(self: QTextCursor, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QTextCursor_InsertHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn InsertMarkdown(self: QTextCursor, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown(@ptrCast(self.ptr), markdown_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextImageFormat `
    ///
    /// ` alignment: qtextformat_enums.Position `
    ///
    pub fn InsertImage(self: QTextCursor, format: anytype, alignment: i32) void {
        comptime _ = @TypeOf(format)._is_QTextImageFormat;
        qtc.QTextCursor_InsertImage(@ptrCast(self.ptr), @ptrCast(format.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextImageFormat `
    ///
    pub fn InsertImage2(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextImageFormat;
        qtc.QTextCursor_InsertImage2(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn InsertImage3(self: QTextCursor, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage3(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` image: QImage `
    ///
    pub fn InsertImage4(self: QTextCursor, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QTextCursor_InsertImage4(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn BeginEditBlock(self: QTextCursor) void {
        qtc.QTextCursor_BeginEditBlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn JoinPreviousEditBlock(self: QTextCursor) void {
        qtc.QTextCursor_JoinPreviousEditBlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn EndEditBlock(self: QTextCursor) void {
        qtc.QTextCursor_EndEditBlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn OperatorNotEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn OperatorLesser(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorLesser(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn OperatorLesserOrEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorLesserOrEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn OperatorEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn OperatorGreaterOrEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorGreaterOrEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn OperatorGreater(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorGreater(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` other: QTextCursor `
    ///
    pub fn IsCopyOf(self: QTextCursor, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextCursor;
        return qtc.QTextCursor_IsCopyOf(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn BlockNumber(self: QTextCursor) i32 {
        return qtc.QTextCursor_BlockNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn ColumnNumber(self: QTextCursor) i32 {
        return qtc.QTextCursor_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn Document(self: QTextCursor) QTextDocument {
        return .{ .ptr = qtc.QTextCursor_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` pos: i32 `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn SetPosition2(self: QTextCursor, pos: i32, mode: i32) void {
        qtc.QTextCursor_SetPosition2(@ptrCast(self.ptr), @bitCast(pos), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` op: qtextcursor_enums.MoveOperation `
    ///
    /// ` param2: qtextcursor_enums.MoveMode `
    ///
    pub fn MovePosition2(self: QTextCursor, op: i32, param2: i32) bool {
        return qtc.QTextCursor_MovePosition2(@ptrCast(self.ptr), @bitCast(op), @bitCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` op: qtextcursor_enums.MoveOperation `
    ///
    /// ` param2: qtextcursor_enums.MoveMode `
    ///
    /// ` n: i32 `
    ///
    pub fn MovePosition3(self: QTextCursor, op: i32, param2: i32, n: i32) bool {
        return qtc.QTextCursor_MovePosition3(@ptrCast(self.ptr), @bitCast(op), @bitCast(param2), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` markdown: []const u8 `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn InsertMarkdown2(self: QTextCursor, markdown: []const u8, features: i32) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown2(@ptrCast(self.ptr), markdown_str, @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` image: QImage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn InsertImage22(self: QTextCursor, image: anytype, name: []const u8) void {
        comptime _ = @TypeOf(image)._is_QImage;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage22(@ptrCast(self.ptr), @ptrCast(image.ptr), name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#dtor.QTextCursor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextCursor `
    ///
    pub fn Delete(self: QTextCursor) void {
        qtc.QTextCursor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#public-types)
pub const enums = struct {
    pub const MoveMode = enum(i32) {
        pub const MoveAnchor: i32 = 0;
        pub const KeepAnchor: i32 = 1;
    };

    pub const MoveOperation = enum(i32) {
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

    pub const SelectionType = enum(i32) {
        pub const WordUnderCursor: i32 = 0;
        pub const LineUnderCursor: i32 = 1;
        pub const BlockUnderCursor: i32 = 2;
        pub const Document: i32 = 3;
    };
};
