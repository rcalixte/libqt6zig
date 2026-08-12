const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextFrame = @import("libqt6").QTextFrame;
const QTextFrameFormat = @import("libqt6").QTextFrameFormat;
const QTextFrame__iterator = @import("libqt6").QTextFrame__iterator;
const QTextTableFormat = @import("libqt6").QTextTableFormat;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html)
pub const QTextTableCell = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTableCell,

    pub const _is_QTextTableCell = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextTableCell object in C++ memory
    ///
    pub fn new() QTextTableCell {
        return .{ .ptr = qtc.QTextTableCell_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextTableCell object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextTableCell `
    ///
    pub fn new2(o: anytype) QTextTableCell {
        comptime _ = @TypeOf(o)._is_QTextTableCell;
        return .{ .ptr = qtc.QTextTableCell_new2(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` o: QTextTableCell `
    ///
    pub fn operatorAssign(self: QTextTableCell, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextTableCell;
        qtc.QTextTableCell_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` _format: QTextCharFormat `
    ///
    pub fn setFormat(self: QTextTableCell, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.QTextTableCell_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn format(self: QTextTableCell) QTextCharFormat {
        return .{ .ptr = qtc.QTextTableCell_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn row(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_Row(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn column(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowSpan` instead
    ///
    pub const RowSpan = rowSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#rowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn rowSpan(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_RowSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnSpan` instead
    ///
    pub const ColumnSpan = columnSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#columnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn columnSpan(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_ColumnSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn isValid(self: QTextTableCell) bool {
        return qtc.QTextTableCell_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `firstCursorPosition` instead
    ///
    pub const FirstCursorPosition = firstCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#firstCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn firstCursorPosition(self: QTextTableCell) QTextCursor {
        return .{ .ptr = qtc.QTextTableCell_FirstCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastCursorPosition` instead
    ///
    pub const LastCursorPosition = lastCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#lastCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn lastCursorPosition(self: QTextTableCell) QTextCursor {
        return .{ .ptr = qtc.QTextTableCell_LastCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstPosition` instead
    ///
    pub const FirstPosition = firstPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#firstPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn firstPosition(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_FirstPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastPosition` instead
    ///
    pub const LastPosition = lastPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn lastPosition(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_LastPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` other: QTextTableCell `
    ///
    pub fn operatorEqual(self: QTextTableCell, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextTableCell;
        return qtc.QTextTableCell_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` other: QTextTableCell `
    ///
    pub fn operatorNotEqual(self: QTextTableCell, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextTableCell;
        return qtc.QTextTableCell_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn begin(self: QTextTableCell) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextTableCell_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn end(self: QTextTableCell) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextTableCell_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableCellFormatIndex` instead
    ///
    pub const TableCellFormatIndex = tableCellFormatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#tableCellFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn tableCellFormatIndex(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_TableCellFormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#dtor.QTextTableCell)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn delete(self: QTextTableCell) void {
        qtc.QTextTableCell_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html)
pub const QTextTable = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTable,

    pub const _is_QTextTable = {};
    pub const _is_QTextFrame = {};
    pub const _is_QTextObject = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextTable object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn new(doc: anytype) QTextTable {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        return .{ .ptr = qtc.QTextTable_new(@ptrCast(doc.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn metaObject(self: QTextTable) QMetaObject {
        return .{ .ptr = qtc.QTextTable_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTextTable, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextTable_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn superMetaObject(self: QTextTable) QMetaObject {
        return .{ .ptr = qtc.QTextTable_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTextTable, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextTable_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTextTable, callback: *const fn (QTextTable, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextTable_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTextTable, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextTable_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QTextTable, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextTable_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTextTable, callback: *const fn (QTextTable, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextTable_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QTextTable, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextTable_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTable.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _rows: i32 `
    ///
    /// ` cols: i32 `
    ///
    pub fn resize(self: QTextTable, _rows: i32, cols: i32) void {
        qtc.QTextTable_Resize(@ptrCast(self.ptr), @bitCast(_rows), @bitCast(cols));
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn insertRows(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_InsertRows(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### DEPRECATED: Use `insertColumns` instead
    ///
    pub const InsertColumns = insertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#insertColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn insertColumns(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_InsertColumns(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### DEPRECATED: Use `appendRows` instead
    ///
    pub const AppendRows = appendRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#appendRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` count: i32 `
    ///
    pub fn appendRows(self: QTextTable, count: i32) void {
        qtc.QTextTable_AppendRows(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `appendColumns` instead
    ///
    pub const AppendColumns = appendColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#appendColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` count: i32 `
    ///
    pub fn appendColumns(self: QTextTable, count: i32) void {
        qtc.QTextTable_AppendColumns(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn removeRows(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveRows(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### DEPRECATED: Use `removeColumns` instead
    ///
    pub const RemoveColumns = removeColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn removeColumns(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveColumns(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### DEPRECATED: Use `mergeCells` instead
    ///
    pub const MergeCells = mergeCells;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` numRows: i32 `
    ///
    /// ` numCols: i32 `
    ///
    pub fn mergeCells(self: QTextTable, _row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_MergeCells(@ptrCast(self.ptr), @bitCast(_row), @bitCast(col), @bitCast(numRows), @bitCast(numCols));
    }

    /// ### DEPRECATED: Use `mergeCells2` instead
    ///
    pub const MergeCells2 = mergeCells2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn mergeCells2(self: QTextTable, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextTable_MergeCells2(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `splitCell` instead
    ///
    pub const SplitCell = splitCell;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#splitCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` numRows: i32 `
    ///
    /// ` numCols: i32 `
    ///
    pub fn splitCell(self: QTextTable, _row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_SplitCell(@ptrCast(self.ptr), @bitCast(_row), @bitCast(col), @bitCast(numRows), @bitCast(numCols));
    }

    /// ### DEPRECATED: Use `rows` instead
    ///
    pub const Rows = rows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn rows(self: QTextTable) i32 {
        return qtc.QTextTable_Rows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columns` instead
    ///
    pub const Columns = columns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#columns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn columns(self: QTextTable) i32 {
        return qtc.QTextTable_Columns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cellAt` instead
    ///
    pub const CellAt = cellAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _row: i32 `
    ///
    /// ` col: i32 `
    ///
    pub fn cellAt(self: QTextTable, _row: i32, col: i32) QTextTableCell {
        return .{ .ptr = qtc.QTextTable_CellAt(@ptrCast(self.ptr), @bitCast(_row), @bitCast(col)) };
    }

    /// ### DEPRECATED: Use `cellAt2` instead
    ///
    pub const CellAt2 = cellAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` position: i32 `
    ///
    pub fn cellAt2(self: QTextTable, position: i32) QTextTableCell {
        return .{ .ptr = qtc.QTextTable_CellAt2(@ptrCast(self.ptr), @bitCast(position)) };
    }

    /// ### DEPRECATED: Use `cellAt3` instead
    ///
    pub const CellAt3 = cellAt3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` c: QTextCursor `
    ///
    pub fn cellAt3(self: QTextTable, c: anytype) QTextTableCell {
        comptime _ = @TypeOf(c)._is_QTextCursor;
        return .{ .ptr = qtc.QTextTable_CellAt3(@ptrCast(self.ptr), @ptrCast(c.ptr)) };
    }

    /// ### DEPRECATED: Use `rowStart` instead
    ///
    pub const RowStart = rowStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rowStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` c: QTextCursor `
    ///
    pub fn rowStart(self: QTextTable, c: anytype) QTextCursor {
        comptime _ = @TypeOf(c)._is_QTextCursor;
        return .{ .ptr = qtc.QTextTable_RowStart(@ptrCast(self.ptr), @ptrCast(c.ptr)) };
    }

    /// ### DEPRECATED: Use `rowEnd` instead
    ///
    pub const RowEnd = rowEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rowEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` c: QTextCursor `
    ///
    pub fn rowEnd(self: QTextTable, c: anytype) QTextCursor {
        comptime _ = @TypeOf(c)._is_QTextCursor;
        return .{ .ptr = qtc.QTextTable_RowEnd(@ptrCast(self.ptr), @ptrCast(c.ptr)) };
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _format: QTextTableFormat `
    ///
    pub fn setFormat(self: QTextTable, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextTableFormat;
        qtc.QTextTable_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn format(self: QTextTable) QTextTableFormat {
        return .{ .ptr = qtc.QTextTable_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTable.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTable.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFrameFormat` instead
    ///
    pub const SetFrameFormat = setFrameFormat;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _format: QTextFrameFormat `
    ///
    pub fn setFrameFormat(self: QTextTable, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextFrameFormat;
        qtc.QTextFrame_SetFrameFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `frameFormat` instead
    ///
    pub const FrameFormat = frameFormat;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn frameFormat(self: QTextTable) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFrame_FrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstCursorPosition` instead
    ///
    pub const FirstCursorPosition = firstCursorPosition;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn firstCursorPosition(self: QTextTable) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_FirstCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastCursorPosition` instead
    ///
    pub const LastCursorPosition = lastCursorPosition;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn lastCursorPosition(self: QTextTable) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_LastCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstPosition` instead
    ///
    pub const FirstPosition = firstPosition;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn firstPosition(self: QTextTable) i32 {
        return qtc.QTextFrame_FirstPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastPosition` instead
    ///
    pub const LastPosition = lastPosition;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn lastPosition(self: QTextTable) i32 {
        return qtc.QTextFrame_LastPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `childFrames` instead
    ///
    pub const ChildFrames = childFrames;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childFrames(self: QTextTable, allocator: std.mem.Allocator) []QTextFrame {
        const _arr: qtc.libqt_list = qtc.QTextFrame_ChildFrames(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextFrame, _arr.len) catch @panic("QTextTable.childFrames: Memory allocation failed");
        const _data_val: [*]QtC.QTextFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `parentFrame` instead
    ///
    pub const ParentFrame = parentFrame;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn parentFrame(self: QTextTable) QTextFrame {
        return .{ .ptr = qtc.QTextFrame_ParentFrame(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn begin(self: QTextTable) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn end(self: QTextTable) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formatIndex` instead
    ///
    pub const FormatIndex = formatIndex;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn formatIndex(self: QTextTable) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn document(self: QTextTable) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn objectIndex(self: QTextTable) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTextTable, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTable.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTextTable, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn isWidgetType(self: QTextTable) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn isWindowType(self: QTextTable) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn isQuickItemType(self: QTextTable) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn signalsBlocked(self: QTextTable) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTextTable, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn thread(self: QTextTable) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTextTable, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTextTable, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTextTable, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTextTable, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTextTable, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTextTable, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTextTable.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTextTable, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTextTable, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTextTable, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTextTable, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn disconnect3(self: QTextTable) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTextTable, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn dumpObjectTree(self: QTextTable) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn dumpObjectInfo(self: QTextTable) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTextTable, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTextTable, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTextTable, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextTable.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextTable.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn bindingStorage(self: QTextTable) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn bindingStorage2(self: QTextTable) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn destroyed(self: QTextTable) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTextTable, callback: *const fn (QTextTable) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn parent(self: QTextTable) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTextTable, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn deleteLater(self: QTextTable) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTextTable, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTextTable, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTextTable, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTextTable, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTextTable, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTextTable, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTextTable, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTextTable, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTextTable, callback: *const fn (QTextTable, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTextTable, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextTable_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTextTable, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextTable_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTextTable, callback: *const fn (QTextTable, QEvent) callconv(.c) bool) void {
        qtc.QTextTable_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTextTable, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextTable_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTextTable, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextTable_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTextTable, callback: *const fn (QTextTable, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextTable_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTextTable, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextTable_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTextTable, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextTable_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTextTable, callback: *const fn (QTextTable, QTimerEvent) callconv(.c) void) void {
        qtc.QTextTable_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTextTable, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextTable_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTextTable, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextTable_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTextTable, callback: *const fn (QTextTable, QChildEvent) callconv(.c) void) void {
        qtc.QTextTable_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTextTable, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextTable_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTextTable, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextTable_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTextTable, callback: *const fn (QTextTable, QEvent) callconv(.c) void) void {
        qtc.QTextTable_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTextTable, callback: *const fn (QTextTable, QMetaMethod) callconv(.c) void) void {
        qtc.QTextTable_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTextTable, callback: *const fn (QTextTable, QMetaMethod) callconv(.c) void) void {
        qtc.QTextTable_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn sender(self: QTextTable) QObject {
        return .{ .ptr = qtc.QTextTable_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn superSender(self: QTextTable) QObject {
        return .{ .ptr = qtc.QTextTable_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTextTable, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextTable_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn senderSignalIndex(self: QTextTable) i32 {
        return qtc.QTextTable_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn superSenderSignalIndex(self: QTextTable) i32 {
        return qtc.QTextTable_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTextTable, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextTable_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTextTable, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextTable_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTextTable, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextTable_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTextTable, callback: *const fn (QTextTable, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextTable_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTextTable, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextTable_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTextTable, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextTable_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTextTable, callback: *const fn (QTextTable, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextTable_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTextTable, callback: *const fn (QTextTable, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#dtor.QTextTable)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTable `
    ///
    pub fn delete(self: QTextTable) void {
        qtc.QTextTable_Delete(@ptrCast(self.ptr));
    }
};
