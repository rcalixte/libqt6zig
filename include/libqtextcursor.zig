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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextCursor object in C++ memory
    ///
    pub fn new() QTextCursor {
        return .{ .ptr = qtc.QTextCursor_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _document: QTextDocument `
    ///
    pub fn new2(_document: anytype) QTextCursor {
        comptime _ = @TypeOf(_document)._is_QTextDocument;
        return .{ .ptr = qtc.QTextCursor_new2(@ptrCast(_document.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` frame: QTextFrame `
    ///
    pub fn new3(frame: anytype) QTextCursor {
        comptime _ = @TypeOf(frame)._is_QTextFrame;
        return .{ .ptr = qtc.QTextCursor_new3(@ptrCast(frame.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _block: QTextBlock `
    ///
    pub fn new4(_block: anytype) QTextCursor {
        comptime _ = @TypeOf(_block)._is_QTextBlock;
        return .{ .ptr = qtc.QTextCursor_new4(@ptrCast(_block.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTextCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn new5(cursor: anytype) QTextCursor {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextCursor_new5(@ptrCast(cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` other: QTextCursor `
    ///
    pub fn operatorAssign(self: QTextCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextCursor;
        qtc.QTextCursor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` other: QTextCursor `
    ///
    pub fn swap(self: QTextCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextCursor;
        qtc.QTextCursor_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn isNull(self: QTextCursor) bool {
        return qtc.QTextCursor_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` pos: i32 `
    ///
    pub fn setPosition(self: QTextCursor, pos: i32) void {
        qtc.QTextCursor_SetPosition(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn position(self: QTextCursor) i32 {
        return qtc.QTextCursor_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `positionInBlock` instead
    ///
    pub const PositionInBlock = positionInBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn positionInBlock(self: QTextCursor) i32 {
        return qtc.QTextCursor_PositionInBlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `anchor` instead
    ///
    pub const Anchor = anchor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn anchor(self: QTextCursor) i32 {
        return qtc.QTextCursor_Anchor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertText` instead
    ///
    pub const InsertText = insertText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertText(self: QTextCursor, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextCursor_InsertText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `insertText2` instead
    ///
    pub const InsertText2 = insertText2;

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
    pub fn insertText2(self: QTextCursor, text: []const u8, format: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextCursor_InsertText2(@ptrCast(self.ptr), text_str, @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `movePosition` instead
    ///
    pub const MovePosition = movePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` op: qtextcursor_enums.MoveOperation `
    ///
    pub fn movePosition(self: QTextCursor, op: i32) bool {
        return qtc.QTextCursor_MovePosition(@ptrCast(self.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `visualNavigation` instead
    ///
    pub const VisualNavigation = visualNavigation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn visualNavigation(self: QTextCursor) bool {
        return qtc.QTextCursor_VisualNavigation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisualNavigation` instead
    ///
    pub const SetVisualNavigation = setVisualNavigation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` b: bool `
    ///
    pub fn setVisualNavigation(self: QTextCursor, b: bool) void {
        qtc.QTextCursor_SetVisualNavigation(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setVerticalMovementX` instead
    ///
    pub const SetVerticalMovementX = setVerticalMovementX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` x: i32 `
    ///
    pub fn setVerticalMovementX(self: QTextCursor, x: i32) void {
        qtc.QTextCursor_SetVerticalMovementX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### DEPRECATED: Use `verticalMovementX` instead
    ///
    pub const VerticalMovementX = verticalMovementX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn verticalMovementX(self: QTextCursor) i32 {
        return qtc.QTextCursor_VerticalMovementX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeepPositionOnInsert` instead
    ///
    pub const SetKeepPositionOnInsert = setKeepPositionOnInsert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` b: bool `
    ///
    pub fn setKeepPositionOnInsert(self: QTextCursor, b: bool) void {
        qtc.QTextCursor_SetKeepPositionOnInsert(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `keepPositionOnInsert` instead
    ///
    pub const KeepPositionOnInsert = keepPositionOnInsert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn keepPositionOnInsert(self: QTextCursor) bool {
        return qtc.QTextCursor_KeepPositionOnInsert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deleteChar` instead
    ///
    pub const DeleteChar = deleteChar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn deleteChar(self: QTextCursor) void {
        qtc.QTextCursor_DeleteChar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deletePreviousChar` instead
    ///
    pub const DeletePreviousChar = deletePreviousChar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn deletePreviousChar(self: QTextCursor) void {
        qtc.QTextCursor_DeletePreviousChar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `select` instead
    ///
    pub const Select = select;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` _selection: qtextcursor_enums.SelectionType `
    ///
    pub fn select(self: QTextCursor, _selection: i32) void {
        qtc.QTextCursor_Select(@ptrCast(self.ptr), @bitCast(_selection));
    }

    /// ### DEPRECATED: Use `hasSelection` instead
    ///
    pub const HasSelection = hasSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn hasSelection(self: QTextCursor) bool {
        return qtc.QTextCursor_HasSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasComplexSelection` instead
    ///
    pub const HasComplexSelection = hasComplexSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn hasComplexSelection(self: QTextCursor) bool {
        return qtc.QTextCursor_HasComplexSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeSelectedText` instead
    ///
    pub const RemoveSelectedText = removeSelectedText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn removeSelectedText(self: QTextCursor) void {
        qtc.QTextCursor_RemoveSelectedText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearSelection` instead
    ///
    pub const ClearSelection = clearSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn clearSelection(self: QTextCursor) void {
        qtc.QTextCursor_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionStart` instead
    ///
    pub const SelectionStart = selectionStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn selectionStart(self: QTextCursor) i32 {
        return qtc.QTextCursor_SelectionStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionEnd` instead
    ///
    pub const SelectionEnd = selectionEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn selectionEnd(self: QTextCursor) i32 {
        return qtc.QTextCursor_SelectionEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedText` instead
    ///
    pub const SelectedText = selectedText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedText(self: QTextCursor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCursor_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextCursor.selectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `selection` instead
    ///
    pub const Selection = selection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn selection(self: QTextCursor) QTextDocumentFragment {
        return .{ .ptr = qtc.QTextCursor_Selection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectedTableCells` instead
    ///
    pub const SelectedTableCells = selectedTableCells;

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
    pub fn selectedTableCells(self: QTextCursor, firstRow: *i32, numRows: *i32, firstColumn: *i32, numColumns: *i32) void {
        qtc.QTextCursor_SelectedTableCells(@ptrCast(self.ptr), @ptrCast(firstRow), @ptrCast(numRows), @ptrCast(firstColumn), @ptrCast(numColumns));
    }

    /// ### DEPRECATED: Use `block` instead
    ///
    pub const Block = block;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#block)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn block(self: QTextCursor) QTextBlock {
        return .{ .ptr = qtc.QTextCursor_Block(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `charFormat` instead
    ///
    pub const CharFormat = charFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn charFormat(self: QTextCursor) QTextCharFormat {
        return .{ .ptr = qtc.QTextCursor_CharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCharFormat` instead
    ///
    pub const SetCharFormat = setCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn setCharFormat(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextCursor_SetCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `mergeCharFormat` instead
    ///
    pub const MergeCharFormat = mergeCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn mergeCharFormat(self: QTextCursor, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QTextCursor_MergeCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### DEPRECATED: Use `blockFormat` instead
    ///
    pub const BlockFormat = blockFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn blockFormat(self: QTextCursor) QTextBlockFormat {
        return .{ .ptr = qtc.QTextCursor_BlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBlockFormat` instead
    ///
    pub const SetBlockFormat = setBlockFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextBlockFormat `
    ///
    pub fn setBlockFormat(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextBlockFormat;
        qtc.QTextCursor_SetBlockFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `mergeBlockFormat` instead
    ///
    pub const MergeBlockFormat = mergeBlockFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` modifier: QTextBlockFormat `
    ///
    pub fn mergeBlockFormat(self: QTextCursor, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextBlockFormat;
        qtc.QTextCursor_MergeBlockFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### DEPRECATED: Use `blockCharFormat` instead
    ///
    pub const BlockCharFormat = blockCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn blockCharFormat(self: QTextCursor) QTextCharFormat {
        return .{ .ptr = qtc.QTextCursor_BlockCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBlockCharFormat` instead
    ///
    pub const SetBlockCharFormat = setBlockCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn setBlockCharFormat(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextCursor_SetBlockCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `mergeBlockCharFormat` instead
    ///
    pub const MergeBlockCharFormat = mergeBlockCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn mergeBlockCharFormat(self: QTextCursor, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QTextCursor_MergeBlockCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### DEPRECATED: Use `atBlockStart` instead
    ///
    pub const AtBlockStart = atBlockStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn atBlockStart(self: QTextCursor) bool {
        return qtc.QTextCursor_AtBlockStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atBlockEnd` instead
    ///
    pub const AtBlockEnd = atBlockEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn atBlockEnd(self: QTextCursor) bool {
        return qtc.QTextCursor_AtBlockEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atStart` instead
    ///
    pub const AtStart = atStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn atStart(self: QTextCursor) bool {
        return qtc.QTextCursor_AtStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn atEnd(self: QTextCursor) bool {
        return qtc.QTextCursor_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertBlock` instead
    ///
    pub const InsertBlock = insertBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn insertBlock(self: QTextCursor) void {
        qtc.QTextCursor_InsertBlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertBlock2` instead
    ///
    pub const InsertBlock2 = insertBlock2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextBlockFormat `
    ///
    pub fn insertBlock2(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextBlockFormat;
        qtc.QTextCursor_InsertBlock2(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `insertBlock3` instead
    ///
    pub const InsertBlock3 = insertBlock3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextBlockFormat `
    ///
    /// ` _charFormat: QTextCharFormat `
    ///
    pub fn insertBlock3(self: QTextCursor, format: anytype, _charFormat: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextBlockFormat;
        comptime _ = @TypeOf(_charFormat)._is_QTextCharFormat;
        qtc.QTextCursor_InsertBlock3(@ptrCast(self.ptr), @ptrCast(format.ptr), @ptrCast(_charFormat.ptr));
    }

    /// ### DEPRECATED: Use `insertList` instead
    ///
    pub const InsertList = insertList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextListFormat `
    ///
    pub fn insertList(self: QTextCursor, format: anytype) QTextList {
        comptime _ = @TypeOf(format)._is_QTextListFormat;
        return .{ .ptr = qtc.QTextCursor_InsertList(@ptrCast(self.ptr), @ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `insertList2` instead
    ///
    pub const InsertList2 = insertList2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` style: qtextformat_enums.Style `
    ///
    pub fn insertList2(self: QTextCursor, style: i32) QTextList {
        return .{ .ptr = qtc.QTextCursor_InsertList2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `createList` instead
    ///
    pub const CreateList = createList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextListFormat `
    ///
    pub fn createList(self: QTextCursor, format: anytype) QTextList {
        comptime _ = @TypeOf(format)._is_QTextListFormat;
        return .{ .ptr = qtc.QTextCursor_CreateList(@ptrCast(self.ptr), @ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `createList2` instead
    ///
    pub const CreateList2 = createList2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` style: qtextformat_enums.Style `
    ///
    pub fn createList2(self: QTextCursor, style: i32) QTextList {
        return .{ .ptr = qtc.QTextCursor_CreateList2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `currentList` instead
    ///
    pub const CurrentList = currentList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn currentList(self: QTextCursor) QTextList {
        return .{ .ptr = qtc.QTextCursor_CurrentList(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertTable` instead
    ///
    pub const InsertTable = insertTable;

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
    pub fn insertTable(self: QTextCursor, rows: i32, cols: i32, format: anytype) QTextTable {
        comptime _ = @TypeOf(format)._is_QTextTableFormat;
        return .{ .ptr = qtc.QTextCursor_InsertTable(@ptrCast(self.ptr), @bitCast(rows), @bitCast(cols), @ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `insertTable2` instead
    ///
    pub const InsertTable2 = insertTable2;

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
    pub fn insertTable2(self: QTextCursor, rows: i32, cols: i32) QTextTable {
        return .{ .ptr = qtc.QTextCursor_InsertTable2(@ptrCast(self.ptr), @bitCast(rows), @bitCast(cols)) };
    }

    /// ### DEPRECATED: Use `currentTable` instead
    ///
    pub const CurrentTable = currentTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn currentTable(self: QTextCursor) QTextTable {
        return .{ .ptr = qtc.QTextCursor_CurrentTable(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertFrame` instead
    ///
    pub const InsertFrame = insertFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextFrameFormat `
    ///
    pub fn insertFrame(self: QTextCursor, format: anytype) QTextFrame {
        comptime _ = @TypeOf(format)._is_QTextFrameFormat;
        return .{ .ptr = qtc.QTextCursor_InsertFrame(@ptrCast(self.ptr), @ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `currentFrame` instead
    ///
    pub const CurrentFrame = currentFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn currentFrame(self: QTextCursor) QTextFrame {
        return .{ .ptr = qtc.QTextCursor_CurrentFrame(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertFragment` instead
    ///
    pub const InsertFragment = insertFragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` fragment: QTextDocumentFragment `
    ///
    pub fn insertFragment(self: QTextCursor, fragment: anytype) void {
        comptime _ = @TypeOf(fragment)._is_QTextDocumentFragment;
        qtc.QTextCursor_InsertFragment(@ptrCast(self.ptr), @ptrCast(fragment.ptr));
    }

    /// ### DEPRECATED: Use `insertHtml` instead
    ///
    pub const InsertHtml = insertHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` html: []const u8 `
    ///
    pub fn insertHtml(self: QTextCursor, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QTextCursor_InsertHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### DEPRECATED: Use `insertMarkdown` instead
    ///
    pub const InsertMarkdown = insertMarkdown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn insertMarkdown(self: QTextCursor, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown(@ptrCast(self.ptr), markdown_str);
    }

    /// ### DEPRECATED: Use `insertImage` instead
    ///
    pub const InsertImage = insertImage;

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
    pub fn insertImage(self: QTextCursor, format: anytype, alignment: i32) void {
        comptime _ = @TypeOf(format)._is_QTextImageFormat;
        qtc.QTextCursor_InsertImage(@ptrCast(self.ptr), @ptrCast(format.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `insertImage2` instead
    ///
    pub const InsertImage2 = insertImage2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` format: QTextImageFormat `
    ///
    pub fn insertImage2(self: QTextCursor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextImageFormat;
        qtc.QTextCursor_InsertImage2(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `insertImage3` instead
    ///
    pub const InsertImage3 = insertImage3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn insertImage3(self: QTextCursor, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage3(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `insertImage4` instead
    ///
    pub const InsertImage4 = insertImage4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` image: QImage `
    ///
    pub fn insertImage4(self: QTextCursor, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QTextCursor_InsertImage4(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `beginEditBlock` instead
    ///
    pub const BeginEditBlock = beginEditBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn beginEditBlock(self: QTextCursor) void {
        qtc.QTextCursor_BeginEditBlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `joinPreviousEditBlock` instead
    ///
    pub const JoinPreviousEditBlock = joinPreviousEditBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn joinPreviousEditBlock(self: QTextCursor) void {
        qtc.QTextCursor_JoinPreviousEditBlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endEditBlock` instead
    ///
    pub const EndEditBlock = endEditBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn endEditBlock(self: QTextCursor) void {
        qtc.QTextCursor_EndEditBlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn operatorNotEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn operatorLesser(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorLesser(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesserOrEqual` instead
    ///
    pub const OperatorLesserOrEqual = operatorLesserOrEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn operatorLesserOrEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorLesserOrEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn operatorEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorGreaterOrEqual` instead
    ///
    pub const OperatorGreaterOrEqual = operatorGreaterOrEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn operatorGreaterOrEqual(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorGreaterOrEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorGreater` instead
    ///
    pub const OperatorGreater = operatorGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` rhs: QTextCursor `
    ///
    pub fn operatorGreater(self: QTextCursor, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextCursor;
        return qtc.QTextCursor_OperatorGreater(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `isCopyOf` instead
    ///
    pub const IsCopyOf = isCopyOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    /// ` other: QTextCursor `
    ///
    pub fn isCopyOf(self: QTextCursor, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextCursor;
        return qtc.QTextCursor_IsCopyOf(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `blockNumber` instead
    ///
    pub const BlockNumber = blockNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn blockNumber(self: QTextCursor) i32 {
        return qtc.QTextCursor_BlockNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn columnNumber(self: QTextCursor) i32 {
        return qtc.QTextCursor_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCursor `
    ///
    pub fn document(self: QTextCursor) QTextDocument {
        return .{ .ptr = qtc.QTextCursor_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

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
    pub fn setPosition2(self: QTextCursor, pos: i32, mode: i32) void {
        qtc.QTextCursor_SetPosition2(@ptrCast(self.ptr), @bitCast(pos), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `movePosition2` instead
    ///
    pub const MovePosition2 = movePosition2;

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
    pub fn movePosition2(self: QTextCursor, op: i32, param2: i32) bool {
        return qtc.QTextCursor_MovePosition2(@ptrCast(self.ptr), @bitCast(op), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `movePosition3` instead
    ///
    pub const MovePosition3 = movePosition3;

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
    pub fn movePosition3(self: QTextCursor, op: i32, param2: i32, n: i32) bool {
        return qtc.QTextCursor_MovePosition3(@ptrCast(self.ptr), @bitCast(op), @bitCast(param2), @bitCast(n));
    }

    /// ### DEPRECATED: Use `insertMarkdown2` instead
    ///
    pub const InsertMarkdown2 = insertMarkdown2;

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
    pub fn insertMarkdown2(self: QTextCursor, markdown: []const u8, features: i32) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextCursor_InsertMarkdown2(@ptrCast(self.ptr), markdown_str, @bitCast(features));
    }

    /// ### DEPRECATED: Use `insertImage22` instead
    ///
    pub const InsertImage22 = insertImage22;

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
    pub fn insertImage22(self: QTextCursor, image: anytype, name: []const u8) void {
        comptime _ = @TypeOf(image)._is_QImage;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextCursor_InsertImage22(@ptrCast(self.ptr), @ptrCast(image.ptr), name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#dtor.QTextCursor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextCursor `
    ///
    pub fn delete(self: QTextCursor) void {
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
